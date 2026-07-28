#pragma once

// Forward declarations
struct CFilmReel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CFilmReel.h"
// Adjusted pointer: CFilmReel_ptr_344
// Points to CFilmReel at offset 0x158 in CFilmReel
// 32-bit pointer to CFilmReel
struct CFilmReel_ptr_344 {
    void *_raw;
    typedef CFilmReel base_type;
    CFilmReel_ptr_344() : _raw(0) {}
    template<typename T> CFilmReel_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CFilmReel_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CFilmReel* operator->() const { return (CFilmReel*)_raw; }
    CFilmReel* adj() const { return (CFilmReel*)((char*)_raw - offsetof(CFilmReel, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

