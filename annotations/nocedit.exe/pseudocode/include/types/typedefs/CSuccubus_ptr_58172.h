#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSuccubus_ptr_58172
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_58172 {
    void *_raw;
    CSuccubus_ptr_58172() : _raw(0) {}
    template<typename T> CSuccubus_ptr_58172(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_58172& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

