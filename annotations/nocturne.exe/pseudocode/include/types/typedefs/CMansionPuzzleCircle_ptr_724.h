#pragma once

// Forward declarations
struct CMansionPuzzleCircle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMansionPuzzleCircle.h"
// Adjusted pointer: CMansionPuzzleCircle_ptr_724
// Points to CKeyFramedModelInstance at offset 0x2d4 in CMansionPuzzleCircle
// 32-bit pointer to CMansionPuzzleCircle
struct CKeyFramedModelInstance;
struct CMansionPuzzleCircle_ptr_724 {
    void *_raw;
    typedef CMansionPuzzleCircle base_type;
    CMansionPuzzleCircle_ptr_724() : _raw(0) {}
    template<typename T> CMansionPuzzleCircle_ptr_724(T* p) : _raw((void*)p) {}
    template<typename T> CMansionPuzzleCircle_ptr_724& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CMansionPuzzleCircle* adj() const { return (CMansionPuzzleCircle*)((char*)_raw - offsetof(CMansionPuzzleCircle, gem_model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

