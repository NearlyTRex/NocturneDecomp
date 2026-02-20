#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCryptVessel_ptr_964
// 32-bit pointer to CCryptVessel
struct CCryptVessel_ptr_964 {
    void *_raw;
    CCryptVessel_ptr_964() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_964(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_964& operator=(T* p) { _raw = (void*)p; return *this; }
    CCryptVessel* operator->() const { return (CCryptVessel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

