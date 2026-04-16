#pragma once

// Forward declarations
struct CTVBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTVBat_ptr_11356
// Points to CTVBat at offset 0x2c5c in CTVBat
// 32-bit pointer to CTVBat
struct CTVBat_ptr_11356 {
    void *_raw;
    typedef CTVBat base_type;
    CTVBat_ptr_11356() : _raw(0) {}
    template<typename T> CTVBat_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CTVBat_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CTVBat* operator->() const { return (CTVBat*)_raw; }
    CTVBat* adj() const { return (CTVBat*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

