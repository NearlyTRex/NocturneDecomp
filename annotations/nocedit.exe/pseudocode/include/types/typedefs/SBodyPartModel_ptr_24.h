#pragma once

// Forward declarations
struct SBodyPartModel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SBodyPartModel_ptr_24
// Points to CKeyFramedModelInstance at offset 0x18 in SBodyPartModel
// 32-bit pointer to SBodyPartModel
struct CKeyFramedModelInstance;
struct SBodyPartModel_ptr_24 {
    void *_raw;
    typedef SBodyPartModel base_type;
    SBodyPartModel_ptr_24() : _raw(0) {}
    template<typename T> SBodyPartModel_ptr_24(T* p) : _raw((void*)p) {}
    template<typename T> SBodyPartModel_ptr_24& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    SBodyPartModel* adj() const { return (SBodyPartModel*)((char*)_raw - 24); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

