#pragma once

// Forward declarations
struct CGhoul;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGhoul_ptr_12060
// Points to CGhoul at offset 0x2f1c in CGhoul
// 32-bit pointer to CGhoul
struct CGhoul_ptr_12060 {
    void *_raw;
    typedef CGhoul base_type;
    CGhoul_ptr_12060() : _raw(0) {}
    template<typename T> CGhoul_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CGhoul_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CGhoul* operator->() const { return (CGhoul*)_raw; }
    CGhoul* adj() const { return (CGhoul*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

