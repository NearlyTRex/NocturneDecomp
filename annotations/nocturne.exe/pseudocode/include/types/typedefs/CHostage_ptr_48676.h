#pragma once

// Forward declarations
struct CHostage;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHostage.h"
// Adjusted pointer: CHostage_ptr_48676
// Points to CHostage at offset 0xbe24 in CHostage
// 32-bit pointer to CHostage
struct CHostage_ptr_48676 {
    void *_raw;
    typedef CHostage base_type;
    CHostage_ptr_48676() : _raw(0) {}
    template<typename T> CHostage_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CHostage_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CHostage* operator->() const { return (CHostage*)_raw; }
    CHostage* adj() const { return (CHostage*)((char*)_raw - offsetof(CHostage, base.path_map.height_cache[0][90])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

