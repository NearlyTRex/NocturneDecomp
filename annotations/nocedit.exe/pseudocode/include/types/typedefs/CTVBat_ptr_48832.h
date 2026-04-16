#pragma once

// Forward declarations
struct CTVBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTVBat_ptr_48832
// Points to CKeyFramedModelInstance at offset 0xbec0 in CTVBat
// 32-bit pointer to CTVBat
struct CKeyFramedModelInstance;
struct CTVBat_ptr_48832 {
    void *_raw;
    typedef CTVBat base_type;
    CTVBat_ptr_48832() : _raw(0) {}
    template<typename T> CTVBat_ptr_48832(T* p) : _raw((void*)p) {}
    template<typename T> CTVBat_ptr_48832& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CTVBat* adj() const { return (CTVBat*)((char*)_raw - 48832); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

