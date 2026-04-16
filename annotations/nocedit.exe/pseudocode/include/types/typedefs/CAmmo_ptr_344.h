#pragma once

// Forward declarations
struct CAmmo;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CAmmo_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CAmmo
// 32-bit pointer to CAmmo
struct CKeyFramedModelInstance;
struct CAmmo_ptr_344 {
    void *_raw;
    typedef CAmmo base_type;
    CAmmo_ptr_344() : _raw(0) {}
    template<typename T> CAmmo_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAmmo_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CAmmo* adj() const { return (CAmmo*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

