#pragma once

// Forward declarations
struct CVehicle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CVehicle_ptr_724
// 32-bit pointer to CVehicle
struct CVehicle_ptr_724 {
    void *_raw;
    CVehicle_ptr_724() : _raw(0) {}
    template<typename T> CVehicle_ptr_724(T* p) : _raw((void*)p) {}
    template<typename T> CVehicle_ptr_724& operator=(T* p) { _raw = (void*)p; return *this; }
    CVehicle* operator->() const { return (CVehicle*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

