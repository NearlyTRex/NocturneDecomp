#pragma once

// Forward declarations
struct CZombie;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombie.h"
// Adjusted pointer: CZombie_ptr_11536
// Points to CZombie at offset 0x2d10 in CZombie
// 32-bit pointer to CZombie
struct CZombie_ptr_11536 {
    void *_raw;
    typedef CZombie base_type;
    CZombie_ptr_11536() : _raw(0) {}
    template<typename T> CZombie_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CZombie_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombie* operator->() const { return (CZombie*)_raw; }
    CZombie* adj() const { return (CZombie*)((char*)_raw - offsetof(CZombie, base.base.collision_test_normals)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

