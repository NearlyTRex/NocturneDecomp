#pragma once

// Forward declarations
struct CGargoyle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CGargoyle.h"
// Adjusted pointer: CGargoyle_ptr_11356
// Points to CGargoyle at offset 0x2c5c in CGargoyle
// 32-bit pointer to CGargoyle
struct CGargoyle_ptr_11356 {
    void *_raw;
    typedef CGargoyle base_type;
    CGargoyle_ptr_11356() : _raw(0) {}
    template<typename T> CGargoyle_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CGargoyle_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CGargoyle* operator->() const { return (CGargoyle*)_raw; }
    CGargoyle* adj() const { return (CGargoyle*)((char*)_raw - offsetof(CGargoyle, base.base.collision_test_points)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

