#pragma once

// Forward declarations
struct CVehicle;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CVehicle.h"
// Adjusted pointer: CVehicle_ptr_2364
// Points to CVehicle at offset 0x93c in CVehicle
// 32-bit pointer to CVehicle
struct CVehicle_ptr_2364 {
    void *_raw;
    typedef CVehicle base_type;
    CVehicle_ptr_2364() : _raw(0) {}
    template<typename T> CVehicle_ptr_2364(T* p) : _raw((void*)p) {}
    template<typename T> CVehicle_ptr_2364& operator=(T* p) { _raw = (void*)p; return *this; }
    CVehicle* operator->() const { return (CVehicle*)_raw; }
    CVehicle* adj() const { return (CVehicle*)((char*)_raw - offsetof(CVehicle, tires[0].static_bpos.z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

