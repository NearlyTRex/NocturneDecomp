#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCryptVessel.h"
// Adjusted pointer: CCryptVessel_ptr_1644
// Points to CCryptVessel at offset 0x66c in CCryptVessel
// 32-bit pointer to CCryptVessel
struct CCryptVessel_ptr_1644 {
    void *_raw;
    typedef CCryptVessel base_type;
    CCryptVessel_ptr_1644() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_1644(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_1644& operator=(T* p) { _raw = (void*)p; return *this; }
    CCryptVessel* operator->() const { return (CCryptVessel*)_raw; }
    CCryptVessel* adj() const { return (CCryptVessel*)((char*)_raw - offsetof(CCryptVessel, orb_model.part_visibility_flags[4])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

