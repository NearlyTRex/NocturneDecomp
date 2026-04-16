#pragma once

// Forward declarations
struct CDrone;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrone_ptr_11536
// Points to CDrone at offset 0x2d10 in CDrone
// 32-bit pointer to CDrone
struct CDrone_ptr_11536 {
    void *_raw;
    typedef CDrone base_type;
    CDrone_ptr_11536() : _raw(0) {}
    template<typename T> CDrone_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CDrone_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrone* operator->() const { return (CDrone*)_raw; }
    CDrone* adj() const { return (CDrone*)((char*)_raw - 11536); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

