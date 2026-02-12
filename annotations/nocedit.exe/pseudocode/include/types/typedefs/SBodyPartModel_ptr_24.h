#pragma once

// Forward declarations
struct SBodyPartModel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SBodyPartModel_ptr_24
// 32-bit pointer to SBodyPartModel
struct SBodyPartModel_ptr_24 {
    void *_raw;
    SBodyPartModel_ptr_24() : _raw(0) {}
    template<typename T> SBodyPartModel_ptr_24(T* p) : _raw((void*)p) {}
    template<typename T> SBodyPartModel_ptr_24& operator=(T* p) { _raw = (void*)p; return *this; }
    SBodyPartModel* operator->() const { return (SBodyPartModel*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

