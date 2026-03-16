#pragma once

// Forward declarations
struct CTVBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTVBat_ptr_344
// Points to CTVBat at offset 0x158 in CTVBat
// 32-bit pointer to CTVBat
struct CTVBat_ptr_344 {
    void *_raw;
    typedef CTVBat base_type;
    CTVBat_ptr_344() : _raw(0) {}
    template<typename T> CTVBat_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CTVBat_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CTVBat* operator->() const { return (CTVBat*)_raw; }
    CTVBat* adj() const { return (CTVBat*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

