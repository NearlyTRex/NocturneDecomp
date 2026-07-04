#pragma once

// Forward declarations
struct CDeformableModelInstance;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDeformableModelInstance.h"
// Adjusted pointer: CDeformableModelInstance_ptr_88
// Points to CVector3f at offset 0x58 in CDeformableModelInstance
// 32-bit pointer to CDeformableModelInstance
struct CVector3f;
struct CDeformableModelInstance_ptr_88 {
    void *_raw;
    typedef CDeformableModelInstance base_type;
    CDeformableModelInstance_ptr_88() : _raw(0) {}
    template<typename T> CDeformableModelInstance_ptr_88(T* p) : _raw((void*)p) {}
    template<typename T> CDeformableModelInstance_ptr_88& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CDeformableModelInstance* adj() const { return (CDeformableModelInstance*)((char*)_raw - offsetof(CDeformableModelInstance, transformed_vertices)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

