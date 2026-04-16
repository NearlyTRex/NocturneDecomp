#pragma once

// Forward declarations
struct CSvetlana;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSvetlana_ptr_391756
// Points to CCloth at offset 0x5fa4c in CSvetlana
// 32-bit pointer to CSvetlana
struct CCloth;
struct CSvetlana_ptr_391756 {
    void *_raw;
    typedef CSvetlana base_type;
    CSvetlana_ptr_391756() : _raw(0) {}
    template<typename T> CSvetlana_ptr_391756(T* p) : _raw((void*)p) {}
    template<typename T> CSvetlana_ptr_391756& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CSvetlana* adj() const { return (CSvetlana*)((char*)_raw - 391756); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

