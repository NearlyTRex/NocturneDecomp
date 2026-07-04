#pragma once

// Forward declarations
struct CPoly;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPoly.h"
// Adjusted pointer: CPoly_ptr_16
// Points to CP2D at offset 0x10 in CPoly
// 32-bit pointer to CPoly
struct CP2D;
struct CPoly_ptr_16 {
    void *_raw;
    typedef CPoly base_type;
    CPoly_ptr_16() : _raw(0) {}
    template<typename T> CPoly_ptr_16(T* p) : _raw((void*)p) {}
    template<typename T> CPoly_ptr_16& operator=(T* p) { _raw = (void*)p; return *this; }
    CP2D* operator->() const { return (CP2D*)_raw; }
    CPoly* adj() const { return (CPoly*)((char*)_raw - offsetof(CPoly, uv_coords)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

