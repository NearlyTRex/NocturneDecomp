#pragma once

// Forward declarations
struct CBattery;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBattery_ptr_344
// 32-bit pointer to CBattery
struct CBattery_ptr_344 {
    void *_raw;
    CBattery_ptr_344() : _raw(0) {}
    template<typename T> CBattery_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBattery_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBattery* operator->() const { return (CBattery*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

