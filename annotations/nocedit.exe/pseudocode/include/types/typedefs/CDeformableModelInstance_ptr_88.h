#pragma once

// Forward declarations
struct CDeformableModelInstance;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDeformableModelInstance_ptr_88
// 32-bit pointer to CDeformableModelInstance
struct CDeformableModelInstance_ptr_88 {
    void *_raw;
    CDeformableModelInstance_ptr_88() : _raw(0) {}
    template<typename T> CDeformableModelInstance_ptr_88(T* p) : _raw((void*)p) {}
    template<typename T> CDeformableModelInstance_ptr_88& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModelInstance* operator->() const { return (CDeformableModelInstance*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

