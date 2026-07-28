#pragma once

// Forward declarations
struct CZombieCow;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombieCow.h"
// Adjusted pointer: CZombieCow_ptr_11356
// Points to CZombieCow at offset 0x2c5c in CZombieCow
// 32-bit pointer to CZombieCow
struct CZombieCow_ptr_11356 {
    void *_raw;
    typedef CZombieCow base_type;
    CZombieCow_ptr_11356() : _raw(0) {}
    template<typename T> CZombieCow_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CZombieCow_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieCow* operator->() const { return (CZombieCow*)_raw; }
    CZombieCow* adj() const { return (CZombieCow*)((char*)_raw - offsetof(CZombieCow, base.base.collision_test_points[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

