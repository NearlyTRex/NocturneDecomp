#pragma once

// Forward declarations
struct CPassenger;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPassenger_ptr_10900
// Points to CPassenger at offset 0x2a94 in CPassenger
// 32-bit pointer to CPassenger
struct CPassenger_ptr_10900 {
    void *_raw;
    typedef CPassenger base_type;
    CPassenger_ptr_10900() : _raw(0) {}
    template<typename T> CPassenger_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CPassenger_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CPassenger* operator->() const { return (CPassenger*)_raw; }
    CPassenger* adj() const { return (CPassenger*)((char*)_raw - 10900); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

