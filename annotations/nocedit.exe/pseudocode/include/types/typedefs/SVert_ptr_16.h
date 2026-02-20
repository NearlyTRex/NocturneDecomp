#pragma once

// Forward declarations
struct SVert;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SVert_ptr_16
// 32-bit pointer to SVert
struct SVert_ptr_16 {
    void *_raw;
    SVert_ptr_16() : _raw(0) {}
    template<typename T> SVert_ptr_16(T* p) : _raw((void*)p) {}
    template<typename T> SVert_ptr_16& operator=(T* p) { _raw = (void*)p; return *this; }
    SVert* operator->() const { return (SVert*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

