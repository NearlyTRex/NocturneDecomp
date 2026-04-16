#pragma once

// Forward declarations
struct CBoxActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBoxActor_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CBoxActor
// 32-bit pointer to CBoxActor
struct CKeyFramedModelInstance;
struct CBoxActor_ptr_344 {
    void *_raw;
    typedef CBoxActor base_type;
    CBoxActor_ptr_344() : _raw(0) {}
    template<typename T> CBoxActor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBoxActor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CBoxActor* adj() const { return (CBoxActor*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

