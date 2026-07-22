#pragma once

// Forward declarations
struct CToss;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CToss.h"
// Adjusted pointer: CToss_ptr_4
// Points to CKeyFramedModelInstance at offset 0x4 in CToss
// 32-bit pointer to CToss
struct CKeyFramedModelInstance;
struct CToss_ptr_4 {
    void *_raw;
    typedef CToss base_type;
    CToss_ptr_4() : _raw(0) {}
    template<typename T> CToss_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> CToss_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CToss* adj() const { return (CToss*)((char*)_raw - offsetof(CToss, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

