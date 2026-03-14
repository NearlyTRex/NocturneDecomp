#pragma once

// Forward declarations
struct CDrone;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrone_ptr_13260
// Points to CDrone at offset 0x33cc in CDrone
// 32-bit pointer to CDrone
struct CDrone_ptr_13260 {
    void *_raw;
    typedef CDrone base_type;
    CDrone_ptr_13260() : _raw(0) {}
    template<typename T> CDrone_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CDrone_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrone* operator->() const { return (CDrone*)_raw; }
    CDrone* adj() const { return (CDrone*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

