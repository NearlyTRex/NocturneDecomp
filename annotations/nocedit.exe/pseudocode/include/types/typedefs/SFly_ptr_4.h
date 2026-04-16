#pragma once

// Forward declarations
struct SFly;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SFly_ptr_4
// Points to CVector3f at offset 0x4 in SFly
// 32-bit pointer to SFly
struct CVector3f;
struct SFly_ptr_4 {
    void *_raw;
    typedef SFly base_type;
    SFly_ptr_4() : _raw(0) {}
    template<typename T> SFly_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> SFly_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    SFly* adj() const { return (SFly*)((char*)_raw - 4); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

