#pragma once

// Forward declarations
struct CDeformableModel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDeformableModel_ptr_31888
// Points to CVector3f at offset 0x7c90 in CDeformableModel
// 32-bit pointer to CDeformableModel
struct CVector3f;
struct CDeformableModel_ptr_31888 {
    void *_raw;
    typedef CDeformableModel base_type;
    CDeformableModel_ptr_31888() : _raw(0) {}
    template<typename T> CDeformableModel_ptr_31888(T* p) : _raw((void*)p) {}
    template<typename T> CDeformableModel_ptr_31888& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CDeformableModel* adj() const { return (CDeformableModel*)((char*)_raw - 31888); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

