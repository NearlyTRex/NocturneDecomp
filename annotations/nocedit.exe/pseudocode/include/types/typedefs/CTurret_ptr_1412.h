#pragma once

// Forward declarations
struct CTurret;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTurret_ptr_1412
// 32-bit pointer to CTurret
struct CTurret_ptr_1412 {
    void *_raw;
    CTurret_ptr_1412() : _raw(0) {}
    template<typename T> CTurret_ptr_1412(T* p) : _raw((void*)p) {}
    template<typename T> CTurret_ptr_1412& operator=(T* p) { _raw = (void*)p; return *this; }
    CTurret* operator->() const { return (CTurret*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

