#pragma once

// Forward declarations
struct CCrossbow;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCrossbow_ptr_1404
// 32-bit pointer to CCrossbow
struct CCrossbow_ptr_1404 {
    void *_raw;
    CCrossbow_ptr_1404() : _raw(0) {}
    template<typename T> CCrossbow_ptr_1404(T* p) : _raw((void*)p) {}
    template<typename T> CCrossbow_ptr_1404& operator=(T* p) { _raw = (void*)p; return *this; }
    CCrossbow* operator->() const { return (CCrossbow*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

