#pragma once

// Forward declarations
struct CEnemy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CEnemy_ptr_344
// Points to CEnemy at offset 0x158 in CEnemy
// 32-bit pointer to CEnemy
struct CEnemy_ptr_344 {
    void *_raw;
    typedef CEnemy base_type;
    CEnemy_ptr_344() : _raw(0) {}
    template<typename T> CEnemy_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CEnemy_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CEnemy* operator->() const { return (CEnemy*)_raw; }
    CEnemy* adj() const { return (CEnemy*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

