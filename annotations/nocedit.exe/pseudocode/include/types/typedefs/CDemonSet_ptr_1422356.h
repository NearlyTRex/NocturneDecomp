#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonSet_ptr_1422356
// 32-bit pointer to CDemonSet
struct CDemonSet_ptr_1422356 {
    void *_raw;
    CDemonSet_ptr_1422356() : _raw(0) {}
    template<typename T> CDemonSet_ptr_1422356(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_1422356& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonSet* operator->() const { return (CDemonSet*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

