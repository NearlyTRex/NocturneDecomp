#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNPC_ptr_13260
// Points to CNPC at offset 0x33cc in CNPC
// 32-bit pointer to CNPC
struct CNPC_ptr_13260 {
    void *_raw;
    typedef CNPC base_type;
    CNPC_ptr_13260() : _raw(0) {}
    template<typename T> CNPC_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CNPC* operator->() const { return (CNPC*)_raw; }
    CNPC* adj() const { return (CNPC*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

