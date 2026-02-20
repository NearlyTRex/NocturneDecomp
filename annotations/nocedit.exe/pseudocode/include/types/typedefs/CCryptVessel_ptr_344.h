#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCryptVessel_ptr_344
// 32-bit pointer to CCryptVessel
struct CCryptVessel_ptr_344 {
    void *_raw;
    CCryptVessel_ptr_344() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CCryptVessel* operator->() const { return (CCryptVessel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

