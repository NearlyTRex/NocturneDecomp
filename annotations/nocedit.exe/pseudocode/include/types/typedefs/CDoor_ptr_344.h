#pragma once

// Forward declarations
struct CDoor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDoor_ptr_344
// 32-bit pointer to CDoor
struct CDoor_ptr_344 {
    void *_raw;
    CDoor_ptr_344() : _raw(0) {}
    template<typename T> CDoor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDoor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDoor* operator->() const { return (CDoor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

