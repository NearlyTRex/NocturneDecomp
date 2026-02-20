#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPlatform_ptr_344
// 32-bit pointer to CPlatform
struct CPlatform_ptr_344 {
    void *_raw;
    CPlatform_ptr_344() : _raw(0) {}
    template<typename T> CPlatform_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CPlatform_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CPlatform* operator->() const { return (CPlatform*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

