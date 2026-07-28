#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSuccubus.h"
// Adjusted pointer: CSuccubus_ptr_12060
// Points to CSuccubus at offset 0x2f1c in CSuccubus
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_12060 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_12060() : _raw(0) {}
    template<typename T> CSuccubus_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)((char*)_raw - offsetof(CSuccubus, base.base.fires[0].offset)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

