#pragma once

// Forward declarations
struct CSkeleton;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSkeleton_ptr_168828
// 32-bit pointer to CSkeleton
struct CSkeleton_ptr_168828 {
    void *_raw;
    CSkeleton_ptr_168828() : _raw(0) {}
    template<typename T> CSkeleton_ptr_168828(T* p) : _raw((void*)p) {}
    template<typename T> CSkeleton_ptr_168828& operator=(T* p) { _raw = (void*)p; return *this; }
    CSkeleton* operator->() const { return (CSkeleton*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

