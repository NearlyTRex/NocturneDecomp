#pragma once

// Forward declarations
struct CGrave;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGrave_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CGrave
// 32-bit pointer to CGrave
struct CKeyFramedModelInstance;
struct CGrave_ptr_344 {
    void *_raw;
    typedef CGrave base_type;
    CGrave_ptr_344() : _raw(0) {}
    template<typename T> CGrave_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CGrave_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CGrave* adj() const { return (CGrave*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

