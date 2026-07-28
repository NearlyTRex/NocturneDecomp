#pragma once

// Forward declarations
struct CMansionPuzzleCircle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMansionPuzzleCircle.h"
// Adjusted pointer: CMansionPuzzleCircle_ptr_2720
// Points to CMansionPuzzleCircle at offset 0xaa0 in CMansionPuzzleCircle
// 32-bit pointer to CMansionPuzzleCircle
struct CMansionPuzzleCircle_ptr_2720 {
    void *_raw;
    typedef CMansionPuzzleCircle base_type;
    CMansionPuzzleCircle_ptr_2720() : _raw(0) {}
    template<typename T> CMansionPuzzleCircle_ptr_2720(T* p) : _raw((void*)p) {}
    template<typename T> CMansionPuzzleCircle_ptr_2720& operator=(T* p) { _raw = (void*)p; return *this; }
    CMansionPuzzleCircle* operator->() const { return (CMansionPuzzleCircle*)_raw; }
    CMansionPuzzleCircle* adj() const { return (CMansionPuzzleCircle*)((char*)_raw - offsetof(CMansionPuzzleCircle, gems[0].color.b)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

