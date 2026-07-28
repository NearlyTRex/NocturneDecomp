#pragma once

// Forward declarations
struct CGlass;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CGlass.h"
// Adjusted pointer: CGlass_ptr_492
// Points to CGlass at offset 0x1ec in CGlass
// 32-bit pointer to CGlass
struct CGlass_ptr_492 {
    void *_raw;
    typedef CGlass base_type;
    CGlass_ptr_492() : _raw(0) {}
    template<typename T> CGlass_ptr_492(T* p) : _raw((void*)p) {}
    template<typename T> CGlass_ptr_492& operator=(T* p) { _raw = (void*)p; return *this; }
    CGlass* operator->() const { return (CGlass*)_raw; }
    CGlass* adj() const { return (CGlass*)((char*)_raw - offsetof(CGlass, mirror.reflection.corner1.z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

