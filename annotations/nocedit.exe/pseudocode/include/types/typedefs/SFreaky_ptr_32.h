#pragma once

// Forward declarations
struct SFreaky;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SFreaky_ptr_32
// Points to CVector3f at offset 0x20 in SFreaky
// 32-bit pointer to SFreaky
struct CVector3f;
struct SFreaky_ptr_32 {
    void *_raw;
    typedef SFreaky base_type;
    SFreaky_ptr_32() : _raw(0) {}
    template<typename T> SFreaky_ptr_32(T* p) : _raw((void*)p) {}
    template<typename T> SFreaky_ptr_32& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    SFreaky* adj() const { return (SFreaky*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

