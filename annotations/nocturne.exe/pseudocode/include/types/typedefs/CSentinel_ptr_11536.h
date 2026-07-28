#pragma once

// Forward declarations
struct CSentinel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSentinel.h"
// Adjusted pointer: CSentinel_ptr_11536
// Points to CSentinel at offset 0x2d10 in CSentinel
// 32-bit pointer to CSentinel
struct CSentinel_ptr_11536 {
    void *_raw;
    typedef CSentinel base_type;
    CSentinel_ptr_11536() : _raw(0) {}
    template<typename T> CSentinel_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CSentinel_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CSentinel* operator->() const { return (CSentinel*)_raw; }
    CSentinel* adj() const { return (CSentinel*)((char*)_raw - offsetof(CSentinel, base.base.collision_test_normals[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

