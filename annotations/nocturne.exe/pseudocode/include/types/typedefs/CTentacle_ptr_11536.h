#pragma once

// Forward declarations
struct CTentacle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CTentacle.h"
// Adjusted pointer: CTentacle_ptr_11536
// Points to CTentacle at offset 0x2d10 in CTentacle
// 32-bit pointer to CTentacle
struct CTentacle_ptr_11536 {
    void *_raw;
    typedef CTentacle base_type;
    CTentacle_ptr_11536() : _raw(0) {}
    template<typename T> CTentacle_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CTentacle_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CTentacle* operator->() const { return (CTentacle*)_raw; }
    CTentacle* adj() const { return (CTentacle*)((char*)_raw - offsetof(CTentacle, base.base.collision_test_normals[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

