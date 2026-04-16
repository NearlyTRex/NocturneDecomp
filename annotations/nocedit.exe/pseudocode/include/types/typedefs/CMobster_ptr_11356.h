#pragma once

// Forward declarations
struct CMobster;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMobster_ptr_11356
// Points to CMobster at offset 0x2c5c in CMobster
// 32-bit pointer to CMobster
struct CMobster_ptr_11356 {
    void *_raw;
    typedef CMobster base_type;
    CMobster_ptr_11356() : _raw(0) {}
    template<typename T> CMobster_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CMobster_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CMobster* operator->() const { return (CMobster*)_raw; }
    CMobster* adj() const { return (CMobster*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

