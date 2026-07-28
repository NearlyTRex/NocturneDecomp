#pragma once

// Forward declarations
struct CGhoul;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CGhoul.h"
// Adjusted pointer: CGhoul_ptr_11356
// Points to CGhoul at offset 0x2c5c in CGhoul
// 32-bit pointer to CGhoul
struct CGhoul_ptr_11356 {
    void *_raw;
    typedef CGhoul base_type;
    CGhoul_ptr_11356() : _raw(0) {}
    template<typename T> CGhoul_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CGhoul_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CGhoul* operator->() const { return (CGhoul*)_raw; }
    CGhoul* adj() const { return (CGhoul*)((char*)_raw - offsetof(CGhoul, base.base.collision_test_points[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

