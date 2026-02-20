#pragma once

// Forward declarations
struct CSpike;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSpike_ptr_344
// 32-bit pointer to CSpike
struct CSpike_ptr_344 {
    void *_raw;
    CSpike_ptr_344() : _raw(0) {}
    template<typename T> CSpike_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CSpike_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CSpike* operator->() const { return (CSpike*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

