#pragma once

// Forward declarations
struct CZombie;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CZombie_ptr_13260
// Points to CZombie at offset 0x33cc in CZombie
// 32-bit pointer to CZombie
struct CZombie_ptr_13260 {
    void *_raw;
    typedef CZombie base_type;
    CZombie_ptr_13260() : _raw(0) {}
    template<typename T> CZombie_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CZombie_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombie* operator->() const { return (CZombie*)_raw; }
    CZombie* adj() const { return (CZombie*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

