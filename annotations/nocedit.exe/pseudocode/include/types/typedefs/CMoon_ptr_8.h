#pragma once

// Forward declarations
struct CMoon;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMoon_ptr_8
// Points to CKeyFramedModel at offset 0x8 in CMoon
// 32-bit pointer to CMoon
struct CKeyFramedModel;
struct CMoon_ptr_8 {
    void *_raw;
    typedef CMoon base_type;
    CMoon_ptr_8() : _raw(0) {}
    template<typename T> CMoon_ptr_8(T* p) : _raw((void*)p) {}
    template<typename T> CMoon_ptr_8& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModel* operator->() const { return (CKeyFramedModel*)_raw; }
    CMoon* adj() const { return (CMoon*)((char*)_raw - 8); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

