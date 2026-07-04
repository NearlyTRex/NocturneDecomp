#pragma once

// Forward declarations
struct CImp;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CImp.h"
// Adjusted pointer: CImp_ptr_11356
// Points to CImp at offset 0x2c5c in CImp
// 32-bit pointer to CImp
struct CImp_ptr_11356 {
    void *_raw;
    typedef CImp base_type;
    CImp_ptr_11356() : _raw(0) {}
    template<typename T> CImp_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CImp_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CImp* operator->() const { return (CImp*)_raw; }
    CImp* adj() const { return (CImp*)((char*)_raw - offsetof(CImp, base.base.collision_test_points)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

