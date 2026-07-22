#pragma once

// Forward declarations
struct CStairs;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CStairs.h"
// Adjusted pointer: CStairs_ptr_368
// Points to CDemonTriangle at offset 0x170 in CStairs
// 32-bit pointer to CStairs
struct CDemonTriangle;
struct CStairs_ptr_368 {
    void *_raw;
    typedef CStairs base_type;
    CStairs_ptr_368() : _raw(0) {}
    template<typename T> CStairs_ptr_368(T* p) : _raw((void*)p) {}
    template<typename T> CStairs_ptr_368& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonTriangle* operator->() const { return (CDemonTriangle*)_raw; }
    CStairs* adj() const { return (CStairs*)((char*)_raw - offsetof(CStairs, collision_triangles)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

