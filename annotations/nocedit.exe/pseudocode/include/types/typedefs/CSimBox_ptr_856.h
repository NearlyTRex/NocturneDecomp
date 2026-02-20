#pragma once

// Forward declarations
struct CSimBox;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSimBox_ptr_856
// 32-bit pointer to CSimBox
struct CSimBox_ptr_856 {
    void *_raw;
    CSimBox_ptr_856() : _raw(0) {}
    template<typename T> CSimBox_ptr_856(T* p) : _raw((void*)p) {}
    template<typename T> CSimBox_ptr_856& operator=(T* p) { _raw = (void*)p; return *this; }
    CSimBox* operator->() const { return (CSimBox*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

