#pragma once

// Forward declarations
struct CKeyActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CKeyActor_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CKeyActor
// 32-bit pointer to CKeyActor
struct CKeyFramedModelInstance;
struct CKeyActor_ptr_344 {
    void *_raw;
    typedef CKeyActor base_type;
    CKeyActor_ptr_344() : _raw(0) {}
    template<typename T> CKeyActor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CKeyActor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CKeyActor* adj() const { return (CKeyActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

