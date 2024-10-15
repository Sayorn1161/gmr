#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include <iostream>

namespace Utility {

class IPrint {
public:
    virtual void print() const = 0;
    virtual ~IPrint() = default;
};

template <typename T>
class Array : public IPrint {
public:
    Array();
    Array(const Array& other);
    Array(Array&& other) noexcept;
    ~Array();

    Array& operator=(const Array& other);
    Array& operator=(Array&& other) noexcept;

    void add(const T& element);
    void print() const override;
    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;

private:
    T* data;
    std::size_t size;
    std::size_t capacity;

    void clear();
    void copyFrom(const Array& other);
    void resize();
};

}

#endif // UTILITY_H
