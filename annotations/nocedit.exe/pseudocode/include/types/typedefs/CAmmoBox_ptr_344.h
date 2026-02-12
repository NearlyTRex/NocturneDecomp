#pragma once

// Forward declarations
struct CAmmoBox;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CAmmoBox_ptr_344
// 32-bit pointer to CAmmoBox
struct CAmmoBox_ptr_344 {
    void *_raw;
    CAmmoBox_ptr_344() : _raw(0) {}
    template<typename T> CAmmoBox_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAmmoBox_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CAmmoBox* operator->() const { return (CAmmoBox*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

