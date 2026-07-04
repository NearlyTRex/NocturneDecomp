#pragma once

// Forward declarations
struct CMansionPuzzleCircle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMansionPuzzleCircle.h"
// Adjusted pointer: CMansionPuzzleCircle_ptr_1104
// Points to CKeyFramedModelInstance at offset 0x450 in CMansionPuzzleCircle
// 32-bit pointer to CMansionPuzzleCircle
struct CKeyFramedModelInstance;
struct CMansionPuzzleCircle_ptr_1104 {
    void *_raw;
    typedef CMansionPuzzleCircle base_type;
    CMansionPuzzleCircle_ptr_1104() : _raw(0) {}
    template<typename T> CMansionPuzzleCircle_ptr_1104(T* p) : _raw((void*)p) {}
    template<typename T> CMansionPuzzleCircle_ptr_1104& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CMansionPuzzleCircle* adj() const { return (CMansionPuzzleCircle*)((char*)_raw - offsetof(CMansionPuzzleCircle, reflector_model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

