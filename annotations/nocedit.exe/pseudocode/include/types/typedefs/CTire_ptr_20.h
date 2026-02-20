#pragma once

// Forward declarations
struct CTire;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTire_ptr_20
// 32-bit pointer to CTire
struct CTire_ptr_20 {
    void *_raw;
    CTire_ptr_20() : _raw(0) {}
    template<typename T> CTire_ptr_20(T* p) : _raw((void*)p) {}
    template<typename T> CTire_ptr_20& operator=(T* p) { _raw = (void*)p; return *this; }
    CTire* operator->() const { return (CTire*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

