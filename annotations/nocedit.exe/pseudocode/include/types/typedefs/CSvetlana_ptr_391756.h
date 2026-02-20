#pragma once

// Forward declarations
struct CSvetlana;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSvetlana_ptr_391756
// 32-bit pointer to CSvetlana
struct CSvetlana_ptr_391756 {
    void *_raw;
    CSvetlana_ptr_391756() : _raw(0) {}
    template<typename T> CSvetlana_ptr_391756(T* p) : _raw((void*)p) {}
    template<typename T> CSvetlana_ptr_391756& operator=(T* p) { _raw = (void*)p; return *this; }
    CSvetlana* operator->() const { return (CSvetlana*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

