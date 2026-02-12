#pragma once

// Forward declarations
struct CFilmReel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFilmReel_ptr_344
// 32-bit pointer to CFilmReel
struct CFilmReel_ptr_344 {
    void *_raw;
    CFilmReel_ptr_344() : _raw(0) {}
    template<typename T> CFilmReel_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CFilmReel_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CFilmReel* operator->() const { return (CFilmReel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

