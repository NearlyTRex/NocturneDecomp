#pragma once

// Forward declarations
struct CBox;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBox_ptr_180
// 32-bit pointer to CBox
struct CBox_ptr_180 {
    void *_raw;
    CBox_ptr_180() : _raw(0) {}
    template<typename T> CBox_ptr_180(T* p) : _raw((void*)p) {}
    template<typename T> CBox_ptr_180& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

