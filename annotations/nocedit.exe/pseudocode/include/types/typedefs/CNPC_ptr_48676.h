#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNPC_ptr_48676
// 32-bit pointer to CNPC
struct CNPC_ptr_48676 {
    void *_raw;
    CNPC_ptr_48676() : _raw(0) {}
    template<typename T> CNPC_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CNPC* operator->() const { return (CNPC*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

