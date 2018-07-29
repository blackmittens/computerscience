#include <vector>
#include <list>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>


namespace thread_safe{
    template <class T>
    class stack
    {
        public:
        
            stack();
            ~stack();
            
            stack(const stack& val);
            stack(const stack&& val);
            stack& operator=(const stack& val);
            stack& operator=(const stack&& val);
            stack& operator==(const stack& val);
            
            void clean();
            int64_t size();
            void sort();
            
            bool push(const T& val);
            T pop();
            /*
             * Design the iterator
             */
            /*void begin();
            void end();*/
            
        private:
            std::list<T>  m_data;
    };
}
