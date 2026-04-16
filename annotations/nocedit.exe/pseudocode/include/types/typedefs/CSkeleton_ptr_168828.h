#pragma once

// Forward declarations
struct CSkeleton;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSkeleton_ptr_168828
// Points to CVector3f at offset 0x2937c in CSkeleton
// 32-bit pointer to CSkeleton
struct CVector3f;
struct CSkeleton_ptr_168828 {
    void *_raw;
    typedef CSkeleton base_type;
    CSkeleton_ptr_168828() : _raw(0) {}
    template<typename T> CSkeleton_ptr_168828(T* p) : _raw((void*)p) {}
    template<typename T> CSkeleton_ptr_168828& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CSkeleton* adj() const { return (CSkeleton*)((char*)_raw - 168828); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

