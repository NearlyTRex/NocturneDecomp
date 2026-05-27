#pragma once

// Forward declarations
struct CMansionPuzzleCircle;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMansionPuzzleCircle_ptr_4928
// Points to SReflector at offset 0x1340 in CMansionPuzzleCircle
// 32-bit pointer to CMansionPuzzleCircle
struct SReflector;
struct CMansionPuzzleCircle_ptr_4928 {
    void *_raw;
    typedef CMansionPuzzleCircle base_type;
    CMansionPuzzleCircle_ptr_4928() : _raw(0) {}
    template<typename T> CMansionPuzzleCircle_ptr_4928(T* p) : _raw((void*)p) {}
    template<typename T> CMansionPuzzleCircle_ptr_4928& operator=(T* p) { _raw = (void*)p; return *this; }
    SReflector* operator->() const { return (SReflector*)_raw; }
    CMansionPuzzleCircle* adj() const { return (CMansionPuzzleCircle*)((char*)_raw - 4928); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

