#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPlatform_ptr_784
// 32-bit pointer to CPlatform
struct CPlatform_ptr_784 {
    void *_raw;
    CPlatform_ptr_784() : _raw(0) {}
    template<typename T> CPlatform_ptr_784(T* p) : _raw((void*)p) {}
    template<typename T> CPlatform_ptr_784& operator=(T* p) { _raw = (void*)p; return *this; }
    CPlatform* operator->() const { return (CPlatform*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

