#pragma once

// Forward declarations
struct CBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBat_ptr_392
// 32-bit pointer to CBat
struct CBat_ptr_392 {
    void *_raw;
    CBat_ptr_392() : _raw(0) {}
    template<typename T> CBat_ptr_392(T* p) : _raw((void*)p) {}
    template<typename T> CBat_ptr_392& operator=(T* p) { _raw = (void*)p; return *this; }
    CBat* operator->() const { return (CBat*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

