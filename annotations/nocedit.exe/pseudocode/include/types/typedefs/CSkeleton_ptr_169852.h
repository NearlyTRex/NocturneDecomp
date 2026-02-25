#pragma once

// Forward declarations
struct CSkeleton;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSkeleton_ptr_169852
// Points to CSkeleton at offset 0x2977c in CSkeleton
// 32-bit pointer to CSkeleton
struct CSkeleton_ptr_169852 {
    void *_raw;
    typedef CSkeleton base_type;
    CSkeleton_ptr_169852() : _raw(0) {}
    template<typename T> CSkeleton_ptr_169852(T* p) : _raw((void*)p) {}
    template<typename T> CSkeleton_ptr_169852& operator=(T* p) { _raw = (void*)p; return *this; }
    CSkeleton* operator->() const { return (CSkeleton*)_raw; }
    CSkeleton* adj() const { return (CSkeleton*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

