#pragma once

// Forward declarations
struct CZombieDog;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CZombieDog_ptr_344
// Points to CZombieDog at offset 0x158 in CZombieDog
// 32-bit pointer to CZombieDog
struct CZombieDog_ptr_344 {
    void *_raw;
    typedef CZombieDog base_type;
    CZombieDog_ptr_344() : _raw(0) {}
    template<typename T> CZombieDog_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CZombieDog_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieDog* operator->() const { return (CZombieDog*)_raw; }
    CZombieDog* adj() const { return (CZombieDog*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

