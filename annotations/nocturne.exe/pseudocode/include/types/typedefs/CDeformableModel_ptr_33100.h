#pragma once

// Forward declarations
struct CDeformableModel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDeformableModel.h"
// Adjusted pointer: CDeformableModel_ptr_33100
// Points to CDeformableModel at offset 0x814c in CDeformableModel
// 32-bit pointer to CDeformableModel
struct CDeformableModel_ptr_33100 {
    void *_raw;
    typedef CDeformableModel base_type;
    CDeformableModel_ptr_33100() : _raw(0) {}
    template<typename T> CDeformableModel_ptr_33100(T* p) : _raw((void*)p) {}
    template<typename T> CDeformableModel_ptr_33100& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModel* operator->() const { return (CDeformableModel*)_raw; }
    CDeformableModel* adj() const { return (CDeformableModel*)((char*)_raw - offsetof(CDeformableModel, bbox_pool[0].max)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

