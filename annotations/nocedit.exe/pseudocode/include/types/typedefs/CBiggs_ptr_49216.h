#pragma once

// Forward declarations
struct CBiggs;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBiggs.h"
// Adjusted pointer: CBiggs_ptr_49216
// Points to CMorph at offset 0xc040 in CBiggs
// 32-bit pointer to CBiggs
struct CMorph;
struct CBiggs_ptr_49216 {
    void *_raw;
    typedef CBiggs base_type;
    CBiggs_ptr_49216() : _raw(0) {}
    template<typename T> CBiggs_ptr_49216(T* p) : _raw((void*)p) {}
    template<typename T> CBiggs_ptr_49216& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorph* operator->() const { return (CMorph*)_raw; }
    CBiggs* adj() const { return (CBiggs*)((char*)_raw - offsetof(CBiggs, morph)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

