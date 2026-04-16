#pragma once

// Forward declarations
struct CGargoyle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGargoyle_ptr_13260
// Points to CGargoyle at offset 0x33cc in CGargoyle
// 32-bit pointer to CGargoyle
struct CGargoyle_ptr_13260 {
    void *_raw;
    typedef CGargoyle base_type;
    CGargoyle_ptr_13260() : _raw(0) {}
    template<typename T> CGargoyle_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CGargoyle_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CGargoyle* operator->() const { return (CGargoyle*)_raw; }
    CGargoyle* adj() const { return (CGargoyle*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

