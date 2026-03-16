#pragma once

// Forward declarations
struct CSentinel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSentinel_ptr_344
// Points to CSentinel at offset 0x158 in CSentinel
// 32-bit pointer to CSentinel
struct CSentinel_ptr_344 {
    void *_raw;
    typedef CSentinel base_type;
    CSentinel_ptr_344() : _raw(0) {}
    template<typename T> CSentinel_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CSentinel_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CSentinel* operator->() const { return (CSentinel*)_raw; }
    CSentinel* adj() const { return (CSentinel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

