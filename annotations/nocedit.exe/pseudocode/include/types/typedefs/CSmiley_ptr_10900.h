#pragma once

// Forward declarations
struct CSmiley;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSmiley_ptr_10900
// Points to CSmiley at offset 0x2a94 in CSmiley
// 32-bit pointer to CSmiley
struct CSmiley_ptr_10900 {
    void *_raw;
    typedef CSmiley base_type;
    CSmiley_ptr_10900() : _raw(0) {}
    template<typename T> CSmiley_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CSmiley_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CSmiley* operator->() const { return (CSmiley*)_raw; }
    CSmiley* adj() const { return (CSmiley*)((char*)_raw - 10900); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

