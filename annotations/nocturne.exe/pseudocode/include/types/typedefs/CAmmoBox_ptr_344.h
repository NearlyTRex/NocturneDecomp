#pragma once

// Forward declarations
struct CAmmoBox;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CAmmoBox.h"
// Adjusted pointer: CAmmoBox_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CAmmoBox
// 32-bit pointer to CAmmoBox
struct CKeyFramedModelInstance;
struct CAmmoBox_ptr_344 {
    void *_raw;
    typedef CAmmoBox base_type;
    CAmmoBox_ptr_344() : _raw(0) {}
    template<typename T> CAmmoBox_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAmmoBox_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CAmmoBox* adj() const { return (CAmmoBox*)((char*)_raw - offsetof(CAmmoBox, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

