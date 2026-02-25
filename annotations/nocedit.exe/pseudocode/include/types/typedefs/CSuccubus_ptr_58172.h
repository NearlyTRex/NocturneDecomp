#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSuccubus_ptr_58172
// Points to CMorph at offset 0xe33c in CSuccubus
// 32-bit pointer to CSuccubus
struct CMorph;
struct CSuccubus_ptr_58172 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_58172() : _raw(0) {}
    template<typename T> CSuccubus_ptr_58172(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_58172& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorph* operator->() const { return (CMorph*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

