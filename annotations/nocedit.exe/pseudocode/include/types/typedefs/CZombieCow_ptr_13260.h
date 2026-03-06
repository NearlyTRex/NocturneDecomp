#pragma once

// Forward declarations
struct CZombieCow;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CZombieCow_ptr_13260
// Points to CZombieCow at offset 0x33cc in CZombieCow
// 32-bit pointer to CZombieCow
struct CZombieCow_ptr_13260 {
    void *_raw;
    typedef CZombieCow base_type;
    CZombieCow_ptr_13260() : _raw(0) {}
    template<typename T> CZombieCow_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CZombieCow_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieCow* operator->() const { return (CZombieCow*)_raw; }
    CZombieCow* adj() const { return (CZombieCow*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

