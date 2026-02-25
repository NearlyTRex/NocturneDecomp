#pragma once

// Forward declarations
struct CDemonSet;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonSet_ptr_1420992
// Points to SRoom at offset 0x15aec0 in CDemonSet
// 32-bit pointer to CDemonSet
struct SRoom;
struct CDemonSet_ptr_1420992 {
    void *_raw;
    typedef CDemonSet base_type;
    CDemonSet_ptr_1420992() : _raw(0) {}
    template<typename T> CDemonSet_ptr_1420992(T* p) : _raw((void*)p) {}
    template<typename T> CDemonSet_ptr_1420992& operator=(T* p) { _raw = (void*)p; return *this; }
    SRoom* operator->() const { return (SRoom*)_raw; }
    CDemonSet* adj() const { return (CDemonSet*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

