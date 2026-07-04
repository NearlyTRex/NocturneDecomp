#pragma once

// Forward declarations
struct CZombieDog;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombieDog.h"
// Adjusted pointer: CZombieDog_ptr_11536
// Points to CZombieDog at offset 0x2d10 in CZombieDog
// 32-bit pointer to CZombieDog
struct CZombieDog_ptr_11536 {
    void *_raw;
    typedef CZombieDog base_type;
    CZombieDog_ptr_11536() : _raw(0) {}
    template<typename T> CZombieDog_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CZombieDog_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieDog* operator->() const { return (CZombieDog*)_raw; }
    CZombieDog* adj() const { return (CZombieDog*)((char*)_raw - offsetof(CZombieDog, base.base.collision_test_normals)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

