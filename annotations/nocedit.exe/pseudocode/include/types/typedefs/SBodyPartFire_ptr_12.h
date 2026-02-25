#pragma once

// Forward declarations
struct SBodyPartFire;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SBodyPartFire_ptr_12
// Points to CFlame at offset 0xc in SBodyPartFire
// 32-bit pointer to SBodyPartFire
struct CFlame;
struct SBodyPartFire_ptr_12 {
    void *_raw;
    typedef SBodyPartFire base_type;
    SBodyPartFire_ptr_12() : _raw(0) {}
    template<typename T> SBodyPartFire_ptr_12(T* p) : _raw((void*)p) {}
    template<typename T> SBodyPartFire_ptr_12& operator=(T* p) { _raw = (void*)p; return *this; }
    CFlame* operator->() const { return (CFlame*)_raw; }
    SBodyPartFire* adj() const { return (SBodyPartFire*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

