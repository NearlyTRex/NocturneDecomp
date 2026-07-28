#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSuccubus.h"
// Adjusted pointer: CSuccubus_ptr_48828
// Points to CSuccubus at offset 0xbebc in CSuccubus
// 32-bit pointer to CSuccubus
struct CSuccubus_ptr_48828 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_48828() : _raw(0) {}
    template<typename T> CSuccubus_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CSuccubus* operator->() const { return (CSuccubus*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)((char*)_raw - offsetof(CSuccubus, hotdemon_model.transformed_vertices[26].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

