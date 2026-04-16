#pragma once

// Forward declarations
struct CImp;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CImp_ptr_10900
// Points to CImp at offset 0x2a94 in CImp
// 32-bit pointer to CImp
struct CImp_ptr_10900 {
    void *_raw;
    typedef CImp base_type;
    CImp_ptr_10900() : _raw(0) {}
    template<typename T> CImp_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CImp_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CImp* operator->() const { return (CImp*)_raw; }
    CImp* adj() const { return (CImp*)((char*)_raw - 10900); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

