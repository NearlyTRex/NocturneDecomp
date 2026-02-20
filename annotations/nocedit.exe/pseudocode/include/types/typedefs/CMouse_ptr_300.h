#pragma once

// Forward declarations
struct CMouse;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMouse_ptr_300
// 32-bit pointer to CMouse
struct CMouse_ptr_300 {
    void *_raw;
    CMouse_ptr_300() : _raw(0) {}
    template<typename T> CMouse_ptr_300(T* p) : _raw((void*)p) {}
    template<typename T> CMouse_ptr_300& operator=(T* p) { _raw = (void*)p; return *this; }
    CMouse* operator->() const { return (CMouse*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

