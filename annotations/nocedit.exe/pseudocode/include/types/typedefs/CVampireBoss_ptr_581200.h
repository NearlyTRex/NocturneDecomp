#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_581200
// 32-bit pointer to CVampireBoss
struct CVampireBoss_ptr_581200 {
    void *_raw;
    CVampireBoss_ptr_581200() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_581200(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_581200& operator=(T* p) { _raw = (void*)p; return *this; }
    CVampireBoss* operator->() const { return (CVampireBoss*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

