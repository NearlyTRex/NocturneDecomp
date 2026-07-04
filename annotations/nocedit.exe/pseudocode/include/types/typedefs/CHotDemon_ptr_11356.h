#pragma once

// Forward declarations
struct CHotDemon;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHotDemon.h"
// Adjusted pointer: CHotDemon_ptr_11356
// Points to CHotDemon at offset 0x2c5c in CHotDemon
// 32-bit pointer to CHotDemon
struct CHotDemon_ptr_11356 {
    void *_raw;
    typedef CHotDemon base_type;
    CHotDemon_ptr_11356() : _raw(0) {}
    template<typename T> CHotDemon_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CHotDemon_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CHotDemon* operator->() const { return (CHotDemon*)_raw; }
    CHotDemon* adj() const { return (CHotDemon*)((char*)_raw - offsetof(CHotDemon, base.base.collision_test_points)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

