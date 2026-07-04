#pragma once

// Forward declarations
struct CTVBat;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CTVBat.h"
// Adjusted pointer: CTVBat_ptr_10900
// Points to CTVBat at offset 0x2a94 in CTVBat
// 32-bit pointer to CTVBat
struct CTVBat_ptr_10900 {
    void *_raw;
    typedef CTVBat base_type;
    CTVBat_ptr_10900() : _raw(0) {}
    template<typename T> CTVBat_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CTVBat_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CTVBat* operator->() const { return (CTVBat*)_raw; }
    CTVBat* adj() const { return (CTVBat*)((char*)_raw - offsetof(CTVBat, base.base.cloth_list)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

