#pragma once

// Forward declarations
struct CMoloch;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMoloch_ptr_130004
// Points to CDeformableModelInstance at offset 0x1fbd4 in CMoloch
// 32-bit pointer to CMoloch
struct CDeformableModelInstance;
struct CMoloch_ptr_130004 {
    void *_raw;
    typedef CMoloch base_type;
    CMoloch_ptr_130004() : _raw(0) {}
    template<typename T> CMoloch_ptr_130004(T* p) : _raw((void*)p) {}
    template<typename T> CMoloch_ptr_130004& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModelInstance* operator->() const { return (CDeformableModelInstance*)_raw; }
    CMoloch* adj() const { return (CMoloch*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

