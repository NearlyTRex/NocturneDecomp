#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_57712
// Points to CCloth at offset 0xe170 in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CCloth;
struct CVampireBoss_ptr_57712 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_57712() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_57712(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_57712& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

