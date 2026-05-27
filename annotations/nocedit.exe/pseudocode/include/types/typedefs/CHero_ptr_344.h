#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHero_ptr_344
// Points to CHero at offset 0x158 in CHero
// 32-bit pointer to CHero
struct CHero_ptr_344 {
    void *_raw;
    typedef CHero base_type;
    CHero_ptr_344() : _raw(0) {}
    template<typename T> CHero_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHero_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHero* operator->() const { return (CHero*)_raw; }
    CHero* adj() const { return (CHero*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

