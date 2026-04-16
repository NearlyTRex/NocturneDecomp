#pragma once

// Forward declarations
struct CTrash;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTrash_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CTrash
// 32-bit pointer to CTrash
struct CKeyFramedModelInstance;
struct CTrash_ptr_344 {
    void *_raw;
    typedef CTrash base_type;
    CTrash_ptr_344() : _raw(0) {}
    template<typename T> CTrash_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CTrash_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CTrash* adj() const { return (CTrash*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

