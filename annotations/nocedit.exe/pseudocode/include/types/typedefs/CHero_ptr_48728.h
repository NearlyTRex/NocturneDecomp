#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHero_ptr_48728
// Points to CPathMap at offset 0xbe58 in CHero
// 32-bit pointer to CHero
struct CPathMap;
struct CHero_ptr_48728 {
    void *_raw;
    typedef CHero base_type;
    CHero_ptr_48728() : _raw(0) {}
    template<typename T> CHero_ptr_48728(T* p) : _raw((void*)p) {}
    template<typename T> CHero_ptr_48728& operator=(T* p) { _raw = (void*)p; return *this; }
    CPathMap* operator->() const { return (CPathMap*)_raw; }
    CHero* adj() const { return (CHero*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

