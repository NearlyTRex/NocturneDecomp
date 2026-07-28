#pragma once

// Forward declarations
struct CEnemy;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CEnemy.h"
// Adjusted pointer: CEnemy_ptr_13260
// Points to CEnemy at offset 0x33cc in CEnemy
// 32-bit pointer to CEnemy
struct CEnemy_ptr_13260 {
    void *_raw;
    typedef CEnemy base_type;
    CEnemy_ptr_13260() : _raw(0) {}
    template<typename T> CEnemy_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CEnemy_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CEnemy* operator->() const { return (CEnemy*)_raw; }
    CEnemy* adj() const { return (CEnemy*)((char*)_raw - offsetof(CEnemy, base.flames[0].base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

