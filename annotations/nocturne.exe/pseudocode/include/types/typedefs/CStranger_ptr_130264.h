#pragma once

// Forward declarations
struct CStranger;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CStranger_ptr_130264
// Points to CStranger at offset 0x1fcd8 in CStranger
// 32-bit pointer to CStranger
struct CStranger_ptr_130264 {
    void *_raw;
    typedef CStranger base_type;
    CStranger_ptr_130264() : _raw(0) {}
    template<typename T> CStranger_ptr_130264(T* p) : _raw((void*)p) {}
    template<typename T> CStranger_ptr_130264& operator=(T* p) { _raw = (void*)p; return *this; }
    CStranger* operator->() const { return (CStranger*)_raw; }
    CStranger* adj() const { return (CStranger*)((char*)_raw - 130264 /* FIXME(64bit): unresolved field path, 32-bit-only offset */); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

