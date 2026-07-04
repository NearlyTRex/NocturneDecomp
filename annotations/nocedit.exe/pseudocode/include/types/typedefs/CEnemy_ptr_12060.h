#pragma once

// Forward declarations
struct CEnemy;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CEnemy.h"
// Adjusted pointer: CEnemy_ptr_12060
// Points to CEnemy at offset 0x2f1c in CEnemy
// 32-bit pointer to CEnemy
struct CEnemy_ptr_12060 {
    void *_raw;
    typedef CEnemy base_type;
    CEnemy_ptr_12060() : _raw(0) {}
    template<typename T> CEnemy_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CEnemy_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CEnemy* operator->() const { return (CEnemy*)_raw; }
    CEnemy* adj() const { return (CEnemy*)((char*)_raw - offsetof(CEnemy, base.fires)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

