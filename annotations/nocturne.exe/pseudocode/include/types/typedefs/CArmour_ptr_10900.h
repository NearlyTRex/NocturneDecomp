#pragma once

// Forward declarations
struct CArmour;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CArmour.h"
// Adjusted pointer: CArmour_ptr_10900
// Points to CArmour at offset 0x2a94 in CArmour
// 32-bit pointer to CArmour
struct CArmour_ptr_10900 {
    void *_raw;
    typedef CArmour base_type;
    CArmour_ptr_10900() : _raw(0) {}
    template<typename T> CArmour_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CArmour_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CArmour* operator->() const { return (CArmour*)_raw; }
    CArmour* adj() const { return (CArmour*)((char*)_raw - offsetof(CArmour, base.base.cloth_list)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

