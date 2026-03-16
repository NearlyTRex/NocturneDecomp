#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNPC_ptr_10900
// Points to CNPC at offset 0x2a94 in CNPC
// 32-bit pointer to CNPC
struct CNPC_ptr_10900 {
    void *_raw;
    typedef CNPC base_type;
    CNPC_ptr_10900() : _raw(0) {}
    template<typename T> CNPC_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CNPC* operator->() const { return (CNPC*)_raw; }
    CNPC* adj() const { return (CNPC*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

