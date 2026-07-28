#pragma once

// Forward declarations
struct CLever;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CLever.h"
// Adjusted pointer: CLever_ptr_344
// Points to CLever at offset 0x158 in CLever
// 32-bit pointer to CLever
struct CLever_ptr_344 {
    void *_raw;
    typedef CLever base_type;
    CLever_ptr_344() : _raw(0) {}
    template<typename T> CLever_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CLever_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CLever* operator->() const { return (CLever*)_raw; }
    CLever* adj() const { return (CLever*)((char*)_raw - offsetof(CLever, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

