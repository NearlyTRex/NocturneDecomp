#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSuccubus_ptr_48828
// Points to CDeformableModelInstance at offset 0xbebc in CSuccubus
// 32-bit pointer to CSuccubus
struct CDeformableModelInstance;
struct CSuccubus_ptr_48828 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_48828() : _raw(0) {}
    template<typename T> CSuccubus_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModelInstance* operator->() const { return (CDeformableModelInstance*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)((char*)_raw - 48828); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

