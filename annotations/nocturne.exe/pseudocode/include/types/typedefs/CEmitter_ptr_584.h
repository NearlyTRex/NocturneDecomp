#pragma once

// Forward declarations
struct CEmitter;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CEmitter.h"
// Adjusted pointer: CEmitter_ptr_584
// Points to CEmitter at offset 0x248 in CEmitter
// 32-bit pointer to CEmitter
struct CEmitter_ptr_584 {
    void *_raw;
    typedef CEmitter base_type;
    CEmitter_ptr_584() : _raw(0) {}
    template<typename T> CEmitter_ptr_584(T* p) : _raw((void*)p) {}
    template<typename T> CEmitter_ptr_584& operator=(T* p) { _raw = (void*)p; return *this; }
    CEmitter* operator->() const { return (CEmitter*)_raw; }
    CEmitter* adj() const { return (CEmitter*)((char*)_raw - offsetof(CEmitter, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

