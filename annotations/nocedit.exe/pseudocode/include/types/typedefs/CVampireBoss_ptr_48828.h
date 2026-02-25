#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_48828
// Points to CDeformableModelInstance at offset 0xbebc in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CDeformableModelInstance;
struct CVampireBoss_ptr_48828 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_48828() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModelInstance* operator->() const { return (CDeformableModelInstance*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

