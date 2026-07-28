#pragma once

// Forward declarations
struct CMobster;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMobster.h"
// Adjusted pointer: CMobster_ptr_10900
// Points to CMobster at offset 0x2a94 in CMobster
// 32-bit pointer to CMobster
struct CMobster_ptr_10900 {
    void *_raw;
    typedef CMobster base_type;
    CMobster_ptr_10900() : _raw(0) {}
    template<typename T> CMobster_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CMobster_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CMobster* operator->() const { return (CMobster*)_raw; }
    CMobster* adj() const { return (CMobster*)((char*)_raw - offsetof(CMobster, base.base.cloth_list.filenames[0][4])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

