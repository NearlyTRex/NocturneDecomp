#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonSet_ptr_4
// Points to C3DSCamera at offset 0x4 in CDemonSet
// 32-bit pointer to CDemonSet
struct C3DSCamera;
struct CDemonSet_ptr_4 {
    void *_raw;
    typedef CDemonSet base_type;
    CDemonSet_ptr_4() : _raw(0) {}
    template<typename T> CDemonSet_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    C3DSCamera* operator->() const { return (C3DSCamera*)_raw; }
    CDemonSet* adj() const { return (CDemonSet*)((char*)_raw - 4); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

