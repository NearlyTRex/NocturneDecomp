#pragma once

// Forward declarations
struct CHiram;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHiram.h"
// Adjusted pointer: CHiram_ptr_344
// Points to CHiram at offset 0x158 in CHiram
// 32-bit pointer to CHiram
struct CHiram_ptr_344 {
    void *_raw;
    typedef CHiram base_type;
    CHiram_ptr_344() : _raw(0) {}
    template<typename T> CHiram_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHiram_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHiram* operator->() const { return (CHiram*)_raw; }
    CHiram* adj() const { return (CHiram*)((char*)_raw - offsetof(CHiram, base.base.model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

