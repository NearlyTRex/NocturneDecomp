#pragma once

// Forward declarations
struct CZombieDog;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CZombieDog_ptr_12060
// Points to CZombieDog at offset 0x2f1c in CZombieDog
// 32-bit pointer to CZombieDog
struct CZombieDog_ptr_12060 {
    void *_raw;
    typedef CZombieDog base_type;
    CZombieDog_ptr_12060() : _raw(0) {}
    template<typename T> CZombieDog_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CZombieDog_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieDog* operator->() const { return (CZombieDog*)_raw; }
    CZombieDog* adj() const { return (CZombieDog*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

