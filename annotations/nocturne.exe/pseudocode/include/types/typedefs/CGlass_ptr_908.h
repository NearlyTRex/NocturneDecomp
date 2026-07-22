#pragma once

// Forward declarations
struct CGlass;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CGlass.h"
// Adjusted pointer: CGlass_ptr_908
// Points to CVector3f at offset 0x38c in CGlass
// 32-bit pointer to CGlass
struct CVector3f;
struct CGlass_ptr_908 {
    void *_raw;
    typedef CGlass base_type;
    CGlass_ptr_908() : _raw(0) {}
    template<typename T> CGlass_ptr_908(T* p) : _raw((void*)p) {}
    template<typename T> CGlass_ptr_908& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CGlass* adj() const { return (CGlass*)((char*)_raw - offsetof(CGlass, broken_vertices)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

