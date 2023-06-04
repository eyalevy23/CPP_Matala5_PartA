#include <iostream>
#include "sources/MagicalContainer.hpp"
#include "doctest.h"
using namespace ariel;

TEST_CASE("Test MagicalContainer basic functionality")
{
    MagicalContainer container;

    // Add elements
    container.addElement(1);
    CHECK(container.size() == 1);

    container.addElement(2);
    CHECK(container.size() == 2);

    container.addElement(3);
    CHECK(container.size() == 3);

    // Remove elements
    container.removeElement(2);
    CHECK(container.size() == 2);

    container.removeElement(1);
    CHECK(container.size() == 1);

    container.removeElement(3);
    CHECK(container.size() == 0);
}

TEST_CASE("Test MagicalContainer AscendingIterator")
{
    MagicalContainer container;
    container.addElement(3);
    container.addElement(4);
    container.addElement(2);

    // AscendingIterator
    MagicalContainer::AscendingIterator ascIter(container);

    CHECK_EQ(*ascIter, 2);
    ++ascIter;
    CHECK_EQ(*ascIter, 3);
    ++ascIter;
    CHECK_EQ(*ascIter, 4);
    ++ascIter;
    CHECK_EQ(ascIter, ascIter.end());

}

TEST_CASE("Test MagicalContainer SideCrossIterator")
{
    MagicalContainer container;
    container.addElement(2);
    container.addElement(3);
    container.addElement(1);

    // SideCrossIterator
    MagicalContainer::SideCrossIterator crossIter(container);

    CHECK(*crossIter == 1);
    ++crossIter;
    CHECK(*crossIter == 3);
    ++crossIter;
    CHECK(*crossIter == 2);
    ++crossIter;
    CHECK(crossIter == crossIter.end());
}

TEST_CASE("Test MagicalContainer PrimeIterator")
{
    MagicalContainer container;
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);

    // PrimeIterator
    MagicalContainer::PrimeIterator primeIter(container);

    CHECK(*primeIter == 2);
    ++primeIter;
    CHECK(*primeIter == 3);
    ++primeIter;
    CHECK(primeIter == primeIter.end());

}

TEST_CASE("Test MagicalContainer iterators")
{
    MagicalContainer container;
    container.addElement(3);
    container.addElement(4);
    container.addElement(2);

    // AscendingIterator
    MagicalContainer::AscendingIterator ascIter(container);

    CHECK_EQ(*ascIter, 2);
    ++ascIter;
    CHECK_EQ(*ascIter, 3);
    ++ascIter;
    CHECK_EQ(*ascIter, 4);
    ++ascIter;
    CHECK_EQ(ascIter, ascIter.end());

    // SideCrossIterator
    MagicalContainer::SideCrossIterator crossIter(container);

    CHECK(*crossIter == 2);
    ++crossIter;
    CHECK(*crossIter == 4);
    ++crossIter;
    CHECK(*crossIter == 3);
    ++crossIter;
    CHECK(crossIter == crossIter.end());
}