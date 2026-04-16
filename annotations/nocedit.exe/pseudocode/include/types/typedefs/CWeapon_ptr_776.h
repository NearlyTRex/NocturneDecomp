#pragma once

// Forward declarations
struct CWeapon;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWeapon_ptr_776
// Points to CBox at offset 0x308 in CWeapon
// 32-bit pointer to CWeapon
struct CBox;
struct CWeapon_ptr_776 {
    void *_raw;
    typedef CWeapon base_type;
    CWeapon_ptr_776() : _raw(0) {}
    template<typename T> CWeapon_ptr_776(T* p) : _raw((void*)p) {}
    template<typename T> CWeapon_ptr_776& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    CWeapon* adj() const { return (CWeapon*)((char*)_raw - 776); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

