#pragma once

// Forward declarations
struct CTrap;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CTrap.h"
// Adjusted pointer: CTrap_ptr_344
// Points to CTrap at offset 0x158 in CTrap
// 32-bit pointer to CTrap
struct CTrap_ptr_344 {
    void *_raw;
    typedef CTrap base_type;
    CTrap_ptr_344() : _raw(0) {}
    template<typename T> CTrap_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CTrap_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CTrap* operator->() const { return (CTrap*)_raw; }
    CTrap* adj() const { return (CTrap*)((char*)_raw - offsetof(CTrap, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

