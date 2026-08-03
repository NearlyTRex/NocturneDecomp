#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDemonSet.h"
// Adjusted pointer: CDemonSet_ptr_105008
// Points to CDemonSet at offset 0x19a30 in CDemonSet
// 32-bit pointer to CDemonSet
struct CDemonSet_ptr_105008 {
    void *_raw;
    typedef CDemonSet base_type;
    CDemonSet_ptr_105008() : _raw(0) {}
    template<typename T> CDemonSet_ptr_105008(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_105008& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonSet* operator->() const { return (CDemonSet*)_raw; }
    CDemonSet* adj() const { return (CDemonSet*)((char*)_raw - offsetof(CDemonSet, lights[0].camera_light_bounds[28].x_max)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

