#pragma once

// Forward declarations
struct CWaterActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWaterActor_ptr_668
// 32-bit pointer to CWaterActor
struct CWaterActor_ptr_668 {
    void *_raw;
    CWaterActor_ptr_668() : _raw(0) {}
    template<typename T> CWaterActor_ptr_668(T* p) : _raw((void*)p) {}
    template<typename T> CWaterActor_ptr_668& operator=(T* p) { _raw = (void*)p; return *this; }
    CWaterActor* operator->() const { return (CWaterActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

