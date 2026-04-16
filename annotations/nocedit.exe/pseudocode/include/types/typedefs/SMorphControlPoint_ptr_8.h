#pragma once

// Forward declarations
struct SMorphControlPoint;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SMorphControlPoint_ptr_8
// Points to CVector3f at offset 0x8 in SMorphControlPoint
// 32-bit pointer to SMorphControlPoint
struct CVector3f;
struct SMorphControlPoint_ptr_8 {
    void *_raw;
    typedef SMorphControlPoint base_type;
    SMorphControlPoint_ptr_8() : _raw(0) {}
    template<typename T> SMorphControlPoint_ptr_8(T* p) : _raw((void*)p) {}
    template<typename T> SMorphControlPoint_ptr_8& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    SMorphControlPoint* adj() const { return (SMorphControlPoint*)((char*)_raw - 8); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

