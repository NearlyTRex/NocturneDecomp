#pragma once

// Forward declarations
struct CAnvil;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CAnvil_ptr_344
// 32-bit pointer to CAnvil
struct CAnvil_ptr_344 {
    void *_raw;
    CAnvil_ptr_344() : _raw(0) {}
    template<typename T> CAnvil_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAnvil_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CAnvil* operator->() const { return (CAnvil*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

