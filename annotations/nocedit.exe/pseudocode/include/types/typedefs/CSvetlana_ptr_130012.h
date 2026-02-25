#pragma once

// Forward declarations
struct CSvetlana;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSvetlana_ptr_130012
// Points to CCloth at offset 0x1fbdc in CSvetlana
// 32-bit pointer to CSvetlana
struct CCloth;
struct CSvetlana_ptr_130012 {
    void *_raw;
    typedef CSvetlana base_type;
    CSvetlana_ptr_130012() : _raw(0) {}
    template<typename T> CSvetlana_ptr_130012(T* p) : _raw((void*)p) {}
    template<typename T> CSvetlana_ptr_130012& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CSvetlana* adj() const { return (CSvetlana*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

