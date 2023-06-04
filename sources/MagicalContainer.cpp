#include "MagicalContainer.hpp"
#include <cmath>

namespace ariel {



    // MagicalContainer::MagicalContainer() {}

    void MagicalContainer::addElement(int element) 
    {

    }

    void MagicalContainer::removeElement(int element) 
    {

    }

    int MagicalContainer::size() const 
    {
        return 0;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container), iter(container._ascendingIteratorElements.begin()), position(0)
    {
    }
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container), iter(other.iter), position(other.position)
    {
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other) 
    { 
        return *this; 
    }


    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
    {
        return *this;
    }
    
       MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
    {
        return *this;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
    {
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*()
    {
        return 0;
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container), iter(container._ascendingIteratorElements.begin()), position(0)
    {
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container), iter(other.iter), position(other.position)
    {
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
    {
        return *this;
    }
    
       MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*()
    {
        return 0;
    }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container), iter(container._ascendingIteratorElements.begin()), position(0)
    {
    }

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container), iter(other.iter), position(other.position)
    {
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
    {
        return *this;
    }
    
       MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
    {
        return *this;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
    {
        return false;
    }

    int MagicalContainer::PrimeIterator::operator*()
    {
        return 0;
    }

    //  MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
    // {
    //     return *this;
    // }

    //     MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
    // {
    //     return *this;
    // }

}