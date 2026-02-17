#pragma once

// Forward declarations
struct SFly;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SFly_ptr_4
// 32-bit pointer to SFly
struct SFly_ptr_4 {
    void *_raw;
    SFly_ptr_4() : _raw(0) {}
    template<typename T> SFly_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> SFly_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    SFly* operator->() const { return (SFly*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

