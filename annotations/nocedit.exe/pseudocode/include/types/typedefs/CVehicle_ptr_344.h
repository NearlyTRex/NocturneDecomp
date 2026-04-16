#pragma once

// Forward declarations
struct CVehicle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVehicle_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CVehicle
// 32-bit pointer to CVehicle
struct CKeyFramedModelInstance;
struct CVehicle_ptr_344 {
    void *_raw;
    typedef CVehicle base_type;
    CVehicle_ptr_344() : _raw(0) {}
    template<typename T> CVehicle_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CVehicle_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CVehicle* adj() const { return (CVehicle*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

