#pragma once

// Forward declarations
struct CMorphModel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMorphModel_ptr_842948
// Points to CMorphModel at offset 0xcdcc4 in CMorphModel
// 32-bit pointer to CMorphModel
struct CMorphModel_ptr_842948 {
    void *_raw;
    typedef CMorphModel base_type;
    CMorphModel_ptr_842948() : _raw(0) {}
    template<typename T> CMorphModel_ptr_842948(T* p) : _raw((void*)p) {}
    template<typename T> CMorphModel_ptr_842948& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorphModel* operator->() const { return (CMorphModel*)_raw; }
    CMorphModel* adj() const { return (CMorphModel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

