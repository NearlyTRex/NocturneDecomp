#pragma once

// Forward declarations
struct SClothVertex;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/structs/SClothVertex.h"
// Adjusted pointer: SClothVertex_ptr_236
// Points to CVector3f at offset 0xec in SClothVertex
// 32-bit pointer to SClothVertex
struct CVector3f;
struct SClothVertex_ptr_236 {
    void *_raw;
    typedef SClothVertex base_type;
    SClothVertex_ptr_236() : _raw(0) {}
    template<typename T> SClothVertex_ptr_236(T* p) : _raw((void*)p) {}
    template<typename T> SClothVertex_ptr_236& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    SClothVertex* adj() const { return (SClothVertex*)((char*)_raw - offsetof(SClothVertex, bone_positions)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

