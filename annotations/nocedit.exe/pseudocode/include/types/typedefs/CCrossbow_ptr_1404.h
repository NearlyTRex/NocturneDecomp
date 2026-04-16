#pragma once

// Forward declarations
struct CCrossbow;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCrossbow_ptr_1404
// Points to CFlame at offset 0x57c in CCrossbow
// 32-bit pointer to CCrossbow
struct CFlame;
struct CCrossbow_ptr_1404 {
    void *_raw;
    typedef CCrossbow base_type;
    CCrossbow_ptr_1404() : _raw(0) {}
    template<typename T> CCrossbow_ptr_1404(T* p) : _raw((void*)p) {}
    template<typename T> CCrossbow_ptr_1404& operator=(T* p) { _raw = (void*)p; return *this; }
    CFlame* operator->() const { return (CFlame*)_raw; }
    CCrossbow* adj() const { return (CCrossbow*)((char*)_raw - 1404); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

