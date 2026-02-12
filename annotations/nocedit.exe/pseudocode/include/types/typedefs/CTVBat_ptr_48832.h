#pragma once

// Forward declarations
struct CTVBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTVBat_ptr_48832
// 32-bit pointer to CTVBat
struct CTVBat_ptr_48832 {
    void *_raw;
    CTVBat_ptr_48832() : _raw(0) {}
    template<typename T> CTVBat_ptr_48832(T* p) : _raw((void*)p) {}
    template<typename T> CTVBat_ptr_48832& operator=(T* p) { _raw = (void*)p; return *this; }
    CTVBat* operator->() const { return (CTVBat*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

