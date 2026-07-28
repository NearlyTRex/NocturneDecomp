#pragma once

// Forward declarations
struct CFlameCan;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CFlameCan.h"
// Adjusted pointer: CFlameCan_ptr_832
// Points to CFlameCan at offset 0x340 in CFlameCan
// 32-bit pointer to CFlameCan
struct CFlameCan_ptr_832 {
    void *_raw;
    typedef CFlameCan base_type;
    CFlameCan_ptr_832() : _raw(0) {}
    template<typename T> CFlameCan_ptr_832(T* p) : _raw((void*)p) {}
    template<typename T> CFlameCan_ptr_832& operator=(T* p) { _raw = (void*)p; return *this; }
    CFlameCan* operator->() const { return (CFlameCan*)_raw; }
    CFlameCan* adj() const { return (CFlameCan*)((char*)_raw - offsetof(CFlameCan, flame.base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

