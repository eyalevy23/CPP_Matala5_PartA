#include <iostream>
#include <list>
#include <iterator>
#include <set>
#include <algorithm>

namespace ariel{
    class MagicalContainer
    {
        private:
           std::list<int> _elements;
           
        public:
            std::multiset<int> _ascendingIteratorElements;
            // MagicalContainer(/* args */);
            // ~MagicalContainer();
            void addElement(int element);
            void removeElement(int element);
            int size() const;
    
    
        // MagicalContainer::MagicalContainer(/* args */)
        // {
        // }
        
        // MagicalContainer::~MagicalContainer()
        // {
        // }

        class AscendingIterator
            {
            private:
                MagicalContainer &container;
                std::multiset<int>::iterator iter;
                size_t position;

            public:
                // Constructors
                AscendingIterator(MagicalContainer &container);
                AscendingIterator(const AscendingIterator &other);

                ~AscendingIterator() = default;
                AscendingIterator &operator=(const AscendingIterator &other);
                AscendingIterator(AscendingIterator &&other) noexcept = default;
                AscendingIterator &operator=(AscendingIterator &&other) noexcept { return *this; }


                AscendingIterator& operator++();
                int operator*();
                bool operator==(const AscendingIterator& other) const;
                bool operator!=(const AscendingIterator& other) const;
                bool operator>(const AscendingIterator& other) const;
                bool operator<(const AscendingIterator& other) const;

                AscendingIterator &begin();
                AscendingIterator &end();
            };

            class SideCrossIterator
            {
            private:
                MagicalContainer &container;
                std::multiset<int>::iterator iter;
                size_t position;

            public:
                // Constructors
                SideCrossIterator(MagicalContainer &container);
                SideCrossIterator(const SideCrossIterator &other);

                // ~SideCrossIterator() = default;
                // SideCrossIterator &operator=(const SideCrossIterator &other);
                // SideCrossIterator(SideCrossIterator &&other) noexcept = default;
                // SideCrossIterator &operator=(SideCrossIterator &&other) noexcept { return *this; }

                SideCrossIterator& operator++();
                int operator*();
                bool operator==(const SideCrossIterator& other) const;
                bool operator!=(const SideCrossIterator& other) const;
                bool operator>(const SideCrossIterator& other) const;
                bool operator<(const SideCrossIterator& other) const;

                SideCrossIterator &begin();
                SideCrossIterator &end();
        };

        class PrimeIterator
        {
            private:
                MagicalContainer &container;
                std::multiset<int>::iterator iter;
                size_t position;

            public:
                // Constructors
                PrimeIterator(MagicalContainer &container);
                PrimeIterator(const PrimeIterator &other);

                // ~PrimeIterator() = default;
                // PrimeIterator &operator=(const PrimeIterator &other);
                // PrimeIterator(PrimeIterator &&other) noexcept = default;
                // PrimeIterator &operator=(PrimeIterator &&other) noexcept { return *this; }

                PrimeIterator& operator++();
                int operator*();
                bool operator==(const PrimeIterator& other) const;
                bool operator!=(const PrimeIterator& other) const;
                bool operator>(const PrimeIterator& other) const;
                bool operator<(const PrimeIterator& other) const;

                PrimeIterator &begin();
                PrimeIterator &end();
        };     
    
    };
}