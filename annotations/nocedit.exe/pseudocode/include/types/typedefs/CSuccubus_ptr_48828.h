#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSuccubus_ptr_48828
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_48828 {
    void *_raw;
    CSuccubus_ptr_48828() : _raw(0) {}
    template<typename T> CSuccubus_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

