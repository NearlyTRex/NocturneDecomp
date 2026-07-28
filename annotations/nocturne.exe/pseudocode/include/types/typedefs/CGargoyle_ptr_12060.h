#pragma once

// Forward declarations
struct CGargoyle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CGargoyle.h"
// Adjusted pointer: CGargoyle_ptr_12060
// Points to CGargoyle at offset 0x2f1c in CGargoyle
// 32-bit pointer to CGargoyle
struct CGargoyle_ptr_12060 {
    void *_raw;
    typedef CGargoyle base_type;
    CGargoyle_ptr_12060() : _raw(0) {}
    template<typename T> CGargoyle_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CGargoyle_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CGargoyle* operator->() const { return (CGargoyle*)_raw; }
    CGargoyle* adj() const { return (CGargoyle*)((char*)_raw - offsetof(CGargoyle, base.base.fires[0].offset)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

