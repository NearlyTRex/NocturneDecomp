#pragma once

// Forward declarations
struct CMansionPuzzleCircle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMansionPuzzleCircle_ptr_2720
// Points to SGem at offset 0xaa0 in CMansionPuzzleCircle
// 32-bit pointer to CMansionPuzzleCircle
struct SGem;
struct CMansionPuzzleCircle_ptr_2720 {
    void *_raw;
    typedef CMansionPuzzleCircle base_type;
    CMansionPuzzleCircle_ptr_2720() : _raw(0) {}
    template<typename T> CMansionPuzzleCircle_ptr_2720(T* p) : _raw((void*)p) {}
    template<typename T> CMansionPuzzleCircle_ptr_2720& operator=(T* p) { _raw = (void*)p; return *this; }
    SGem* operator->() const { return (SGem*)_raw; }
    CMansionPuzzleCircle* adj() const { return (CMansionPuzzleCircle*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

