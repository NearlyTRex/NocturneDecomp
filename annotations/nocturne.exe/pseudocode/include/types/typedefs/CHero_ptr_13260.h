#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHero.h"
// Adjusted pointer: CHero_ptr_13260
// Points to CHero at offset 0x33cc in CHero
// 32-bit pointer to CHero
struct CHero_ptr_13260 {
    void *_raw;
    typedef CHero base_type;
    CHero_ptr_13260() : _raw(0) {}
    template<typename T> CHero_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CHero_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CHero* operator->() const { return (CHero*)_raw; }
    CHero* adj() const { return (CHero*)((char*)_raw - offsetof(CHero, base.flames)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

