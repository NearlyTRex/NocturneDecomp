#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNPC_ptr_48676
// Points to CPathMap at offset 0xbe24 in CNPC
// 32-bit pointer to CNPC
struct CPathMap;
struct CNPC_ptr_48676 {
    void *_raw;
    typedef CNPC base_type;
    CNPC_ptr_48676() : _raw(0) {}
    template<typename T> CNPC_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CPathMap* operator->() const { return (CPathMap*)_raw; }
    CNPC* adj() const { return (CNPC*)((char*)_raw - 48676); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

