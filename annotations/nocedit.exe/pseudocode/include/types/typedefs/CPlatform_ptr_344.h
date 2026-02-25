#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPlatform_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CPlatform
// 32-bit pointer to CPlatform
struct CKeyFramedModelInstance;
struct CPlatform_ptr_344 {
    void *_raw;
    typedef CPlatform base_type;
    CPlatform_ptr_344() : _raw(0) {}
    template<typename T> CPlatform_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CPlatform_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CPlatform* adj() const { return (CPlatform*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

