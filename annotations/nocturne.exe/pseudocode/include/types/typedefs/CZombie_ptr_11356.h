#pragma once

// Forward declarations
struct CZombie;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombie.h"
// Adjusted pointer: CZombie_ptr_11356
// Points to CZombie at offset 0x2c5c in CZombie
// 32-bit pointer to CZombie
struct CZombie_ptr_11356 {
    void *_raw;
    typedef CZombie base_type;
    CZombie_ptr_11356() : _raw(0) {}
    template<typename T> CZombie_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CZombie_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombie* operator->() const { return (CZombie*)_raw; }
    CZombie* adj() const { return (CZombie*)((char*)_raw - offsetof(CZombie, base.base.collision_test_points)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

