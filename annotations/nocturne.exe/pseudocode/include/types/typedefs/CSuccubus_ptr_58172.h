#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSuccubus.h"
// Adjusted pointer: CSuccubus_ptr_58172
// Points to CSuccubus at offset 0xe33c in CSuccubus
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_58172 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_58172() : _raw(0) {}
    template<typename T> CSuccubus_ptr_58172(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_58172& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)((char*)_raw - offsetof(CSuccubus, morph.models[0].textures[4].textures[0].texture_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

