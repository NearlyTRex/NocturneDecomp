#pragma once

// Forward declarations
struct CArmour;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CArmour_ptr_13260
// Points to CArmour at offset 0x33cc in CArmour
// 32-bit pointer to CArmour
struct CArmour_ptr_13260 {
    void *_raw;
    typedef CArmour base_type;
    CArmour_ptr_13260() : _raw(0) {}
    template<typename T> CArmour_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CArmour_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CArmour* operator->() const { return (CArmour*)_raw; }
    CArmour* adj() const { return (CArmour*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

