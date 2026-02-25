#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVampireBoss_ptr_842948
// Points to CMorph at offset 0xcdcc4 in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CMorph;
struct CVampireBoss_ptr_842948 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_842948() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_842948(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_842948& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorph* operator->() const { return (CMorph*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

