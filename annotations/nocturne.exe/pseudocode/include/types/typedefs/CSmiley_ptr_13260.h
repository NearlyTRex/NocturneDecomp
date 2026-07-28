#pragma once

// Forward declarations
struct CSmiley;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSmiley.h"
// Adjusted pointer: CSmiley_ptr_13260
// Points to CSmiley at offset 0x33cc in CSmiley
// 32-bit pointer to CSmiley
struct CSmiley_ptr_13260 {
    void *_raw;
    typedef CSmiley base_type;
    CSmiley_ptr_13260() : _raw(0) {}
    template<typename T> CSmiley_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CSmiley_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CSmiley* operator->() const { return (CSmiley*)_raw; }
    CSmiley* adj() const { return (CSmiley*)((char*)_raw - offsetof(CSmiley, base.base.flames[0].base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

