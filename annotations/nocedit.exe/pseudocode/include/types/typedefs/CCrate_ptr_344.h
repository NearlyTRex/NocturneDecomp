#pragma once

// Forward declarations
struct CCrate;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCrate_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CCrate
// 32-bit pointer to CCrate
struct CKeyFramedModelInstance;
struct CCrate_ptr_344 {
    void *_raw;
    typedef CCrate base_type;
    CCrate_ptr_344() : _raw(0) {}
    template<typename T> CCrate_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CCrate_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CCrate* adj() const { return (CCrate*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

