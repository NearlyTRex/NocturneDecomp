#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHero_ptr_128824
// Points to CInventory at offset 0x1f738 in CHero
// 32-bit pointer to CHero
struct CInventory;
struct CHero_ptr_128824 {
    void *_raw;
    typedef CHero base_type;
    CHero_ptr_128824() : _raw(0) {}
    template<typename T> CHero_ptr_128824(T* p) : _raw((void*)p) {}
    template<typename T> CHero_ptr_128824& operator=(T* p) { _raw = (void*)p; return *this; }
    CInventory* operator->() const { return (CInventory*)_raw; }
    CHero* adj() const { return (CHero*)((char*)_raw - 128824); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

