#pragma once

// Forward declarations
struct CDoor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDoor_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CDoor
// 32-bit pointer to CDoor
struct CKeyFramedModelInstance;
struct CDoor_ptr_344 {
    void *_raw;
    typedef CDoor base_type;
    CDoor_ptr_344() : _raw(0) {}
    template<typename T> CDoor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDoor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CDoor* adj() const { return (CDoor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

