#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPlatform.h"
// Adjusted pointer: CPlatform_ptr_784
// Points to CCourse at offset 0x310 in CPlatform
// 32-bit pointer to CPlatform
struct CCourse;
struct CPlatform_ptr_784 {
    void *_raw;
    typedef CPlatform base_type;
    CPlatform_ptr_784() : _raw(0) {}
    template<typename T> CPlatform_ptr_784(T* p) : _raw((void*)p) {}
    template<typename T> CPlatform_ptr_784& operator=(T* p) { _raw = (void*)p; return *this; }
    CCourse* operator->() const { return (CCourse*)_raw; }
    CPlatform* adj() const { return (CPlatform*)((char*)_raw - offsetof(CPlatform, course)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

