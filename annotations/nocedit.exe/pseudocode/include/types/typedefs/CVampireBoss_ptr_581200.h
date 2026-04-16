#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_581200
// Points to CCloth at offset 0x8de50 in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CCloth;
struct CVampireBoss_ptr_581200 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_581200() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_581200(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_581200& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)((char*)_raw - 581200); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

