#pragma once

// Forward declarations
struct CDeformableModel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDeformableModel_ptr_33100
// 32-bit pointer to CDeformableModel
struct CDeformableModel_ptr_33100 {
    void *_raw;
    CDeformableModel_ptr_33100() : _raw(0) {}
    template<typename T> CDeformableModel_ptr_33100(T* p) : _raw((void*)p) {}
    template<typename T> CDeformableModel_ptr_33100& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModel* operator->() const { return (CDeformableModel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

