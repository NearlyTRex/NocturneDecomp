#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_344
// Points to CVampireBoss at offset 0x158 in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CVampireBoss_ptr_344 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_344() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CVampireBoss* operator->() const { return (CVampireBoss*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

