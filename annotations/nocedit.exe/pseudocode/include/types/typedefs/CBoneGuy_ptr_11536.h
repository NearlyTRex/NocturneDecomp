#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBoneGuy.h"
// Adjusted pointer: CBoneGuy_ptr_11536
// Points to CBoneGuy at offset 0x2d10 in CBoneGuy
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_11536 {
    void *_raw;
    typedef CBoneGuy base_type;
    CBoneGuy_ptr_11536() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    CBoneGuy* adj() const { return (CBoneGuy*)((char*)_raw - offsetof(CBoneGuy, base.base.collision_test_normals)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

