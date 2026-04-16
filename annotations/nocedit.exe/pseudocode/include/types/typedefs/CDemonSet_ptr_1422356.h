#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonSet_ptr_1422356
// Points to SVDBox at offset 0x15b414 in CDemonSet
// 32-bit pointer to CDemonSet
struct SVDBox;
struct CDemonSet_ptr_1422356 {
    void *_raw;
    typedef CDemonSet base_type;
    CDemonSet_ptr_1422356() : _raw(0) {}
    template<typename T> CDemonSet_ptr_1422356(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_1422356& operator=(T* p) { _raw = (void*)p; return *this; }
    SVDBox* operator->() const { return (SVDBox*)_raw; }
    CDemonSet* adj() const { return (CDemonSet*)((char*)_raw - 1422356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

