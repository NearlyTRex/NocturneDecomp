#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CVampireBoss.h"
// Adjusted pointer: CVampireBoss_ptr_48828
// Points to CVampireBoss at offset 0xbebc in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CVampireBoss_ptr_48828 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_48828() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CVampireBoss* operator->() const { return (CVampireBoss*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)((char*)_raw - offsetof(CVampireBoss, model.transformed_vertices[26].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

