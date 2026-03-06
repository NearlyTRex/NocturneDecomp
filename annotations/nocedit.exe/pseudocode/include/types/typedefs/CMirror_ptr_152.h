#pragma once

// Forward declarations
struct CMirror;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMirror_ptr_152
// Points to SClipPlane at offset 0x98 in CMirror
// 32-bit pointer to CMirror
struct SClipPlane;
struct CMirror_ptr_152 {
    void *_raw;
    typedef CMirror base_type;
    CMirror_ptr_152() : _raw(0) {}
    template<typename T> CMirror_ptr_152(T* p) : _raw((void*)p) {}
    template<typename T> CMirror_ptr_152& operator=(T* p) { _raw = (void*)p; return *this; }
    SClipPlane* operator->() const { return (SClipPlane*)_raw; }
    CMirror* adj() const { return (CMirror*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

