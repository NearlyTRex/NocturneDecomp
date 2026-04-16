#pragma once

// Forward declarations
struct CMouse;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMouse_ptr_300
// Points to CAlphaBitmap at offset 0x12c in CMouse
// 32-bit pointer to CMouse
struct CAlphaBitmap;
struct CMouse_ptr_300 {
    void *_raw;
    typedef CMouse base_type;
    CMouse_ptr_300() : _raw(0) {}
    template<typename T> CMouse_ptr_300(T* p) : _raw((void*)p) {}
    template<typename T> CMouse_ptr_300& operator=(T* p) { _raw = (void*)p; return *this; }
    CAlphaBitmap* operator->() const { return (CAlphaBitmap*)_raw; }
    CMouse* adj() const { return (CMouse*)((char*)_raw - 300); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

