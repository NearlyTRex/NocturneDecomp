#pragma once

// Forward declarations
struct CDrip;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrip_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CDrip
// 32-bit pointer to CDrip
struct CKeyFramedModelInstance;
struct CDrip_ptr_344 {
    void *_raw;
    typedef CDrip base_type;
    CDrip_ptr_344() : _raw(0) {}
    template<typename T> CDrip_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDrip_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CDrip* adj() const { return (CDrip*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

