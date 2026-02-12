#pragma once

// Forward declarations
struct CFilmProjector;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFilmProjector_ptr_500
// 32-bit pointer to CFilmProjector
struct CFilmProjector_ptr_500 {
    void *_raw;
    CFilmProjector_ptr_500() : _raw(0) {}
    template<typename T> CFilmProjector_ptr_500(T* p) : _raw((void*)p) {}
    template<typename T> CFilmProjector_ptr_500& operator=(T* p) { _raw = (void*)p; return *this; }
    CFilmProjector* operator->() const { return (CFilmProjector*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

