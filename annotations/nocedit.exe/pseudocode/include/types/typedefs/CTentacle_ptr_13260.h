#pragma once

// Forward declarations
struct CTentacle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTentacle_ptr_13260
// Points to CTentacle at offset 0x33cc in CTentacle
// 32-bit pointer to CTentacle
struct CTentacle_ptr_13260 {
    void *_raw;
    typedef CTentacle base_type;
    CTentacle_ptr_13260() : _raw(0) {}
    template<typename T> CTentacle_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CTentacle_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CTentacle* operator->() const { return (CTentacle*)_raw; }
    CTentacle* adj() const { return (CTentacle*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

