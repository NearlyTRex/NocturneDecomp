#pragma once

// Forward declarations
struct SVert;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/structs/SVert.h"
// Adjusted pointer: SVert_ptr_16
// Points to CVector3f at offset 0x10 in SVert
// 32-bit pointer to SVert
struct CVector3f;
struct SVert_ptr_16 {
    void *_raw;
    typedef SVert base_type;
    SVert_ptr_16() : _raw(0) {}
    template<typename T> SVert_ptr_16(T* p) : _raw((void*)p) {}
    template<typename T> SVert_ptr_16& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    SVert* adj() const { return (SVert*)((char*)_raw - offsetof(SVert, position)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

