#pragma once

// Forward declarations
struct CTire;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CTire.h"
// Adjusted pointer: CTire_ptr_20
// Points to CKeyFramedModelInstance at offset 0x14 in CTire
// 32-bit pointer to CTire
struct CKeyFramedModelInstance;
struct CTire_ptr_20 {
    void *_raw;
    typedef CTire base_type;
    CTire_ptr_20() : _raw(0) {}
    template<typename T> CTire_ptr_20(T* p) : _raw((void*)p) {}
    template<typename T> CTire_ptr_20& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CTire* adj() const { return (CTire*)((char*)_raw - offsetof(CTire, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

