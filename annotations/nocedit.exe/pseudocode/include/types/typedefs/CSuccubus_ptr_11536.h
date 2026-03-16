#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSuccubus_ptr_11536
// Points to CSuccubus at offset 0x2d10 in CSuccubus
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_11536 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_11536() : _raw(0) {}
    template<typename T> CSuccubus_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

