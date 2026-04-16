#pragma once

// Forward declarations
struct CGlassParticle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGlassParticle_ptr_120
// Points to STriangleVertices at offset 0x78 in CGlassParticle
// 32-bit pointer to CGlassParticle
struct STriangleVertices;
struct CGlassParticle_ptr_120 {
    void *_raw;
    typedef CGlassParticle base_type;
    CGlassParticle_ptr_120() : _raw(0) {}
    template<typename T> CGlassParticle_ptr_120(T* p) : _raw((void*)p) {}
    template<typename T> CGlassParticle_ptr_120& operator=(T* p) { _raw = (void*)p; return *this; }
    STriangleVertices* operator->() const { return (STriangleVertices*)_raw; }
    CGlassParticle* adj() const { return (CGlassParticle*)((char*)_raw - 120); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

