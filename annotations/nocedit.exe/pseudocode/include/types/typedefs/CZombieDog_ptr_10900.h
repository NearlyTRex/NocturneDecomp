#pragma once

// Forward declarations
struct CZombieDog;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CZombieDog_ptr_10900
// Points to CZombieDog at offset 0x2a94 in CZombieDog
// 32-bit pointer to CZombieDog
struct CZombieDog_ptr_10900 {
    void *_raw;
    typedef CZombieDog base_type;
    CZombieDog_ptr_10900() : _raw(0) {}
    template<typename T> CZombieDog_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CZombieDog_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieDog* operator->() const { return (CZombieDog*)_raw; }
    CZombieDog* adj() const { return (CZombieDog*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

