#pragma once

// Forward declarations
struct CWeapon;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWeapon_ptr_776
// 32-bit pointer to CWeapon
struct CWeapon_ptr_776 {
    void *_raw;
    CWeapon_ptr_776() : _raw(0) {}
    template<typename T> CWeapon_ptr_776(T* p) : _raw((void*)p) {}
    template<typename T> CWeapon_ptr_776& operator=(T* p) { _raw = (void*)p; return *this; }
    CWeapon* operator->() const { return (CWeapon*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

