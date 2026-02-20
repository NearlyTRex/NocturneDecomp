#pragma once

// Forward declarations
struct CTrap;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTrap_ptr_344
// 32-bit pointer to CTrap
struct CTrap_ptr_344 {
    void *_raw;
    CTrap_ptr_344() : _raw(0) {}
    template<typename T> CTrap_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CTrap_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CTrap* operator->() const { return (CTrap*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

