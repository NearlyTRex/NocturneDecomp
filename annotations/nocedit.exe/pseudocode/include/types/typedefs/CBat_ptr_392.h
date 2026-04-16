#pragma once

// Forward declarations
struct CBat;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBat_ptr_392
// Points to CKeyFramedModelInstance at offset 0x188 in CBat
// 32-bit pointer to CBat
struct CKeyFramedModelInstance;
struct CBat_ptr_392 {
    void *_raw;
    typedef CBat base_type;
    CBat_ptr_392() : _raw(0) {}
    template<typename T> CBat_ptr_392(T* p) : _raw((void*)p) {}
    template<typename T> CBat_ptr_392& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CBat* adj() const { return (CBat*)((char*)_raw - 392); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

