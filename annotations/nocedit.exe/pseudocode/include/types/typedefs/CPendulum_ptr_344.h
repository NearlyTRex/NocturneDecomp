#pragma once

// Forward declarations
struct CPendulum;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPendulum_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CPendulum
// 32-bit pointer to CPendulum
struct CKeyFramedModelInstance;
struct CPendulum_ptr_344 {
    void *_raw;
    typedef CPendulum base_type;
    CPendulum_ptr_344() : _raw(0) {}
    template<typename T> CPendulum_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CPendulum_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CPendulum* adj() const { return (CPendulum*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

