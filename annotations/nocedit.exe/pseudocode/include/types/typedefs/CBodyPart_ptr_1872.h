#pragma once

// Forward declarations
struct CBodyPart;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBodyPart_ptr_1872
// Points to SBodyPartFire at offset 0x750 in CBodyPart
// 32-bit pointer to CBodyPart
struct SBodyPartFire;
struct CBodyPart_ptr_1872 {
    void *_raw;
    typedef CBodyPart base_type;
    CBodyPart_ptr_1872() : _raw(0) {}
    template<typename T> CBodyPart_ptr_1872(T* p) : _raw((void*)p) {}
    template<typename T> CBodyPart_ptr_1872& operator=(T* p) { _raw = (void*)p; return *this; }
    SBodyPartFire* operator->() const { return (SBodyPartFire*)_raw; }
    CBodyPart* adj() const { return (CBodyPart*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

