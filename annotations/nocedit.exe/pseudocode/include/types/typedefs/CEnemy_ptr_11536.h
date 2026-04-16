#pragma once

// Forward declarations
struct CEnemy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CEnemy_ptr_11536
// Points to CEnemy at offset 0x2d10 in CEnemy
// 32-bit pointer to CEnemy
struct CEnemy_ptr_11536 {
    void *_raw;
    typedef CEnemy base_type;
    CEnemy_ptr_11536() : _raw(0) {}
    template<typename T> CEnemy_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CEnemy_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CEnemy* operator->() const { return (CEnemy*)_raw; }
    CEnemy* adj() const { return (CEnemy*)((char*)_raw - 11536); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

