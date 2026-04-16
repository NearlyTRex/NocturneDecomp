#pragma once

// Forward declarations
struct CMouse;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMouse_ptr_160
// Points to CAlphaBitmap at offset 0xa0 in CMouse
// 32-bit pointer to CMouse
struct CAlphaBitmap;
struct CMouse_ptr_160 {
    void *_raw;
    typedef CMouse base_type;
    CMouse_ptr_160() : _raw(0) {}
    template<typename T> CMouse_ptr_160(T* p) : _raw((void*)p) {}
    template<typename T> CMouse_ptr_160& operator=(T* p) { _raw = (void*)p; return *this; }
    CAlphaBitmap* operator->() const { return (CAlphaBitmap*)_raw; }
    CMouse* adj() const { return (CMouse*)((char*)_raw - 160); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

