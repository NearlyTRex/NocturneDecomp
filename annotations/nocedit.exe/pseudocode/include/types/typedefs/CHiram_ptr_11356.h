#pragma once

// Forward declarations
struct CHiram;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHiram_ptr_11356
// Points to CHiram at offset 0x2c5c in CHiram
// 32-bit pointer to CHiram
struct CHiram_ptr_11356 {
    void *_raw;
    typedef CHiram base_type;
    CHiram_ptr_11356() : _raw(0) {}
    template<typename T> CHiram_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CHiram_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CHiram* operator->() const { return (CHiram*)_raw; }
    CHiram* adj() const { return (CHiram*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

