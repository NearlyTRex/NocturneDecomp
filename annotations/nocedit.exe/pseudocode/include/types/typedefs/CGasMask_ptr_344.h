#pragma once

// Forward declarations
struct CGasMask;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGasMask_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CGasMask
// 32-bit pointer to CGasMask
struct CKeyFramedModelInstance;
struct CGasMask_ptr_344 {
    void *_raw;
    typedef CGasMask base_type;
    CGasMask_ptr_344() : _raw(0) {}
    template<typename T> CGasMask_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CGasMask_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CGasMask* adj() const { return (CGasMask*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

