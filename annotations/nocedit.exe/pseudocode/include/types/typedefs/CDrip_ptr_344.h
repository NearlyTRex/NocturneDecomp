#pragma once

// Forward declarations
struct CDrip;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrip_ptr_344
// 32-bit pointer to CDrip
struct CDrip_ptr_344 {
    void *_raw;
    CDrip_ptr_344() : _raw(0) {}
    template<typename T> CDrip_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDrip_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrip* operator->() const { return (CDrip*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

