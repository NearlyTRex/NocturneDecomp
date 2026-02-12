#pragma once

// Forward declarations
struct CAmmo;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CAmmo_ptr_344
// 32-bit pointer to CAmmo
struct CAmmo_ptr_344 {
    void *_raw;
    CAmmo_ptr_344() : _raw(0) {}
    template<typename T> CAmmo_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAmmo_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CAmmo* operator->() const { return (CAmmo*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

