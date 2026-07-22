#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CNPC.h"
// Adjusted pointer: CNPC_ptr_12060
// Points to CNPC at offset 0x2f1c in CNPC
// 32-bit pointer to CNPC
struct CNPC_ptr_12060 {
    void *_raw;
    typedef CNPC base_type;
    CNPC_ptr_12060() : _raw(0) {}
    template<typename T> CNPC_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CNPC* operator->() const { return (CNPC*)_raw; }
    CNPC* adj() const { return (CNPC*)((char*)_raw - offsetof(CNPC, base.fires)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

