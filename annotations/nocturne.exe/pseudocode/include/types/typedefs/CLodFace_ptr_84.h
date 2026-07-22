#pragma once

// Forward declarations
struct CLodFace;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CLodFace.h"
// Adjusted pointer: CLodFace_ptr_84
// Points to CVector3f at offset 0x54 in CLodFace
// 32-bit pointer to CLodFace
struct CVector3f;
struct CLodFace_ptr_84 {
    void *_raw;
    typedef CLodFace base_type;
    CLodFace_ptr_84() : _raw(0) {}
    template<typename T> CLodFace_ptr_84(T* p) : _raw((void*)p) {}
    template<typename T> CLodFace_ptr_84& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CLodFace* adj() const { return (CLodFace*)((char*)_raw - offsetof(CLodFace, edge_perpendiculars)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

