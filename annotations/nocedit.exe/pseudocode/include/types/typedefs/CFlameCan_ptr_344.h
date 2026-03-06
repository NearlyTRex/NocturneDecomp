#pragma once

// Forward declarations
struct CFlameCan;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFlameCan_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CFlameCan
// 32-bit pointer to CFlameCan
struct CKeyFramedModelInstance;
struct CFlameCan_ptr_344 {
    void *_raw;
    typedef CFlameCan base_type;
    CFlameCan_ptr_344() : _raw(0) {}
    template<typename T> CFlameCan_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CFlameCan_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CFlameCan* adj() const { return (CFlameCan*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

