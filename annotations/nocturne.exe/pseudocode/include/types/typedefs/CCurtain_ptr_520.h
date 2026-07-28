#pragma once

// Forward declarations
struct CCurtain;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCurtain.h"
// Adjusted pointer: CCurtain_ptr_520
// Points to CCurtain at offset 0x208 in CCurtain
// 32-bit pointer to CCurtain
struct CCurtain_ptr_520 {
    void *_raw;
    typedef CCurtain base_type;
    CCurtain_ptr_520() : _raw(0) {}
    template<typename T> CCurtain_ptr_520(T* p) : _raw((void*)p) {}
    template<typename T> CCurtain_ptr_520& operator=(T* p) { _raw = (void*)p; return *this; }
    CCurtain* operator->() const { return (CCurtain*)_raw; }
    CCurtain* adj() const { return (CCurtain*)((char*)_raw - offsetof(CCurtain, vertices[0].local_position.z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

