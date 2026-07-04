#pragma once

// Forward declarations
struct CToss;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CToss.h"
// Adjusted pointer: CToss_ptr_384
// Points to CBox at offset 0x180 in CToss
// 32-bit pointer to CToss
struct CBox;
struct CToss_ptr_384 {
    void *_raw;
    typedef CToss base_type;
    CToss_ptr_384() : _raw(0) {}
    template<typename T> CToss_ptr_384(T* p) : _raw((void*)p) {}
    template<typename T> CToss_ptr_384& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    CToss* adj() const { return (CToss*)((char*)_raw - offsetof(CToss, physics_box)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

