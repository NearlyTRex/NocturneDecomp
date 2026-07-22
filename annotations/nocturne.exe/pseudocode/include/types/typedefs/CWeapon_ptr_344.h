#pragma once

// Forward declarations
struct CWeapon;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CWeapon.h"
// Adjusted pointer: CWeapon_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CWeapon
// 32-bit pointer to CWeapon
struct CKeyFramedModelInstance;
struct CWeapon_ptr_344 {
    void *_raw;
    typedef CWeapon base_type;
    CWeapon_ptr_344() : _raw(0) {}
    template<typename T> CWeapon_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CWeapon_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CWeapon* adj() const { return (CWeapon*)((char*)_raw - offsetof(CWeapon, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

