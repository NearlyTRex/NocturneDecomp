#pragma once

// Forward declarations
struct CZombieDog;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombieDog.h"
// Adjusted pointer: CZombieDog_ptr_11356
// Points to CZombieDog at offset 0x2c5c in CZombieDog
// 32-bit pointer to CZombieDog
struct CZombieDog_ptr_11356 {
    void *_raw;
    typedef CZombieDog base_type;
    CZombieDog_ptr_11356() : _raw(0) {}
    template<typename T> CZombieDog_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CZombieDog_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieDog* operator->() const { return (CZombieDog*)_raw; }
    CZombieDog* adj() const { return (CZombieDog*)((char*)_raw - offsetof(CZombieDog, base.base.collision_test_points[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

