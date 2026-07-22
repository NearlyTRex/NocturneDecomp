#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMimic.h"
// Adjusted pointer: CMimic_ptr_311332
// Points to CMimic at offset 0x4c024 in CMimic
// 32-bit pointer to CMimic
struct CMimic_ptr_311332 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_311332() : _raw(0) {}
    template<typename T> CMimic_ptr_311332(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_311332& operator=(T* p) { _raw = (void*)p; return *this; }
    CMimic* operator->() const { return (CMimic*)_raw; }
    CMimic* adj() const { return (CMimic*)((char*)_raw - offsetof(CMimic, morph.models[0].textures[5].textures[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

