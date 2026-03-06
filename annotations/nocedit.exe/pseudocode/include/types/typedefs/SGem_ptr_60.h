#pragma once

// Forward declarations
struct SGem;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SGem_ptr_60
// Points to CDemonTriangle at offset 0x3c in SGem
// 32-bit pointer to SGem
struct CDemonTriangle;
struct SGem_ptr_60 {
    void *_raw;
    typedef SGem base_type;
    SGem_ptr_60() : _raw(0) {}
    template<typename T> SGem_ptr_60(T* p) : _raw((void*)p) {}
    template<typename T> SGem_ptr_60& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonTriangle* operator->() const { return (CDemonTriangle*)_raw; }
    SGem* adj() const { return (SGem*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

