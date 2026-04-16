#pragma once

// Forward declarations
struct CStranger;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CStranger_ptr_130264
// Points to CKeyFramedModelInstance at offset 0x1fcd8 in CStranger
// 32-bit pointer to CStranger
struct CKeyFramedModelInstance;
struct CStranger_ptr_130264 {
    void *_raw;
    typedef CStranger base_type;
    CStranger_ptr_130264() : _raw(0) {}
    template<typename T> CStranger_ptr_130264(T* p) : _raw((void*)p) {}
    template<typename T> CStranger_ptr_130264& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CStranger* adj() const { return (CStranger*)((char*)_raw - 130264); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

