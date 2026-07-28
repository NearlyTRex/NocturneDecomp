#pragma once

// Forward declarations
struct CMoloch;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMoloch.h"
// Adjusted pointer: CMoloch_ptr_139100
// Points to CMoloch at offset 0x21f5c in CMoloch
// 32-bit pointer to CMoloch
struct CMoloch_ptr_139100 {
    void *_raw;
    typedef CMoloch base_type;
    CMoloch_ptr_139100() : _raw(0) {}
    template<typename T> CMoloch_ptr_139100(T* p) : _raw((void*)p) {}
    template<typename T> CMoloch_ptr_139100& operator=(T* p) { _raw = (void*)p; return *this; }
    CMoloch* operator->() const { return (CMoloch*)_raw; }
    CMoloch* adj() const { return (CMoloch*)((char*)_raw - offsetof(CMoloch, morph.models[0].textures[4].textures[0].texture_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

