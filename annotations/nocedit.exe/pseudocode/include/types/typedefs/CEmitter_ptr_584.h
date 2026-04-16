#pragma once

// Forward declarations
struct CEmitter;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CEmitter_ptr_584
// Points to CKeyFramedModelInstance at offset 0x248 in CEmitter
// 32-bit pointer to CEmitter
struct CKeyFramedModelInstance;
struct CEmitter_ptr_584 {
    void *_raw;
    typedef CEmitter base_type;
    CEmitter_ptr_584() : _raw(0) {}
    template<typename T> CEmitter_ptr_584(T* p) : _raw((void*)p) {}
    template<typename T> CEmitter_ptr_584& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CEmitter* adj() const { return (CEmitter*)((char*)_raw - 584); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

