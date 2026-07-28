#pragma once

// Forward declarations
struct CPassenger;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPassenger.h"
// Adjusted pointer: CPassenger_ptr_129044
// Points to CPassenger at offset 0x1f814 in CPassenger
// 32-bit pointer to CPassenger
struct CPassenger_ptr_129044 {
    void *_raw;
    typedef CPassenger base_type;
    CPassenger_ptr_129044() : _raw(0) {}
    template<typename T> CPassenger_ptr_129044(T* p) : _raw((void*)p) {}
    template<typename T> CPassenger_ptr_129044& operator=(T* p) { _raw = (void*)p; return *this; }
    CPassenger* operator->() const { return (CPassenger*)_raw; }
    CPassenger* adj() const { return (CPassenger*)((char*)_raw - offsetof(CPassenger, morph.models[0].textures[4].textures[0].texture_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

