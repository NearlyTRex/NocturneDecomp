#pragma once

// Forward declarations
struct CGlass;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGlass_ptr_492
// Points to CMirror at offset 0x1ec in CGlass
// 32-bit pointer to CGlass
struct CMirror;
struct CGlass_ptr_492 {
    void *_raw;
    typedef CGlass base_type;
    CGlass_ptr_492() : _raw(0) {}
    template<typename T> CGlass_ptr_492(T* p) : _raw((void*)p) {}
    template<typename T> CGlass_ptr_492& operator=(T* p) { _raw = (void*)p; return *this; }
    CMirror* operator->() const { return (CMirror*)_raw; }
    CGlass* adj() const { return (CGlass*)((char*)_raw - 492); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

