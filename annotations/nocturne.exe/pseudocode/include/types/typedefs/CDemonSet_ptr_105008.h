#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDemonSet.h"
// Adjusted pointer: CDemonSet_ptr_105008
// Points to C3DSLight at offset 0x19a30 in CDemonSet
// 32-bit pointer to CDemonSet
struct C3DSLight;
struct CDemonSet_ptr_105008 {
    void *_raw;
    typedef CDemonSet base_type;
    CDemonSet_ptr_105008() : _raw(0) {}
    template<typename T> CDemonSet_ptr_105008(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_105008& operator=(T* p) { _raw = (void*)p; return *this; }
    C3DSLight* operator->() const { return (C3DSLight*)_raw; }
    CDemonSet* adj() const { return (CDemonSet*)((char*)_raw - offsetof(CDemonSet, lights)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

