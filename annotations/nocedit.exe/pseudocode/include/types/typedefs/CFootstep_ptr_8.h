#pragma once

// Forward declarations
struct CFootstep;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFootstep_ptr_8
// Points to CVector3f at offset 0x8 in CFootstep
// 32-bit pointer to CFootstep
struct CVector3f;
struct CFootstep_ptr_8 {
    void *_raw;
    typedef CFootstep base_type;
    CFootstep_ptr_8() : _raw(0) {}
    template<typename T> CFootstep_ptr_8(T* p) : _raw((void*)p) {}
    template<typename T> CFootstep_ptr_8& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CFootstep* adj() const { return (CFootstep*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

