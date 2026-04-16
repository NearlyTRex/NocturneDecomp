#pragma once

// Forward declarations
struct CHiram;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHiram_ptr_48676
// Points to CHiram at offset 0xbe24 in CHiram
// 32-bit pointer to CHiram
struct CHiram_ptr_48676 {
    void *_raw;
    typedef CHiram base_type;
    CHiram_ptr_48676() : _raw(0) {}
    template<typename T> CHiram_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CHiram_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CHiram* operator->() const { return (CHiram*)_raw; }
    CHiram* adj() const { return (CHiram*)((char*)_raw - 48676); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

