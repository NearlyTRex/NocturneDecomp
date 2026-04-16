#pragma once

// Forward declarations
struct CCrater;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCrater_ptr_28
// Points to CVector3f at offset 0x1c in CCrater
// 32-bit pointer to CCrater
struct CVector3f;
struct CCrater_ptr_28 {
    void *_raw;
    typedef CCrater base_type;
    CCrater_ptr_28() : _raw(0) {}
    template<typename T> CCrater_ptr_28(T* p) : _raw((void*)p) {}
    template<typename T> CCrater_ptr_28& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CCrater* adj() const { return (CCrater*)((char*)_raw - 28); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

