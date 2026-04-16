#pragma once

// Forward declarations
struct CEnemy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CEnemy_ptr_11356
// Points to CEnemy at offset 0x2c5c in CEnemy
// 32-bit pointer to CEnemy
struct CEnemy_ptr_11356 {
    void *_raw;
    typedef CEnemy base_type;
    CEnemy_ptr_11356() : _raw(0) {}
    template<typename T> CEnemy_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CEnemy_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CEnemy* operator->() const { return (CEnemy*)_raw; }
    CEnemy* adj() const { return (CEnemy*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

