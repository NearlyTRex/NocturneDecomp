#pragma once

// Forward declarations
struct CFilmProjector;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFilmProjector_ptr_500
// Points to CKeyFramedModelInstance at offset 0x1f4 in CFilmProjector
// 32-bit pointer to CFilmProjector
struct CKeyFramedModelInstance;
struct CFilmProjector_ptr_500 {
    void *_raw;
    typedef CFilmProjector base_type;
    CFilmProjector_ptr_500() : _raw(0) {}
    template<typename T> CFilmProjector_ptr_500(T* p) : _raw((void*)p) {}
    template<typename T> CFilmProjector_ptr_500& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CFilmProjector* adj() const { return (CFilmProjector*)((char*)_raw - 500); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

