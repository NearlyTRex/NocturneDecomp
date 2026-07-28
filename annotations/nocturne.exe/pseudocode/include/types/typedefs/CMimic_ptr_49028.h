#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMimic.h"
// Adjusted pointer: CMimic_ptr_49028
// Points to CMimic at offset 0xbf84 in CMimic
// 32-bit pointer to CMimic
struct CMimic_ptr_49028 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_49028() : _raw(0) {}
    template<typename T> CMimic_ptr_49028(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_49028& operator=(T* p) { _raw = (void*)p; return *this; }
    CMimic* operator->() const { return (CMimic*)_raw; }
    CMimic* adj() const { return (CMimic*)((char*)_raw - offsetof(CMimic, cloth.model.texture_list[1].textures[1].texture_name[12])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

