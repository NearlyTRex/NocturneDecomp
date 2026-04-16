#pragma once

// Forward declarations
struct CSpike;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSpike_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CSpike
// 32-bit pointer to CSpike
struct CKeyFramedModelInstance;
struct CSpike_ptr_344 {
    void *_raw;
    typedef CSpike base_type;
    CSpike_ptr_344() : _raw(0) {}
    template<typename T> CSpike_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CSpike_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CSpike* adj() const { return (CSpike*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

