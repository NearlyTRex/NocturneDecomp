#pragma once

// Forward declarations
struct CStairs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CStairs_ptr_368
// 32-bit pointer to CStairs
struct CStairs_ptr_368 {
    void *_raw;
    CStairs_ptr_368() : _raw(0) {}
    template<typename T> CStairs_ptr_368(T* p) : _raw((void*)p) {}
    template<typename T> CStairs_ptr_368& operator=(T* p) { _raw = (void*)p; return *this; }
    CStairs* operator->() const { return (CStairs*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

