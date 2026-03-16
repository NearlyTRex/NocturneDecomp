#pragma once

// Forward declarations
struct CMobster;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMobster_ptr_13260
// Points to CMobster at offset 0x33cc in CMobster
// 32-bit pointer to CMobster
struct CMobster_ptr_13260 {
    void *_raw;
    typedef CMobster base_type;
    CMobster_ptr_13260() : _raw(0) {}
    template<typename T> CMobster_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CMobster_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CMobster* operator->() const { return (CMobster*)_raw; }
    CMobster* adj() const { return (CMobster*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

