#pragma once

// Forward declarations
struct CVehicle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CVehicle.h"
// Adjusted pointer: CVehicle_ptr_4128
// Points to CCourse at offset 0x1020 in CVehicle
// 32-bit pointer to CVehicle
struct CCourse;
struct CVehicle_ptr_4128 {
    void *_raw;
    typedef CVehicle base_type;
    CVehicle_ptr_4128() : _raw(0) {}
    template<typename T> CVehicle_ptr_4128(T* p) : _raw((void*)p) {}
    template<typename T> CVehicle_ptr_4128& operator=(T* p) { _raw = (void*)p; return *this; }
    CCourse* operator->() const { return (CCourse*)_raw; }
    CVehicle* adj() const { return (CVehicle*)((char*)_raw - offsetof(CVehicle, course)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

