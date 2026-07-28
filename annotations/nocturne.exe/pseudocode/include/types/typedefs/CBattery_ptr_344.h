#pragma once

// Forward declarations
struct CBattery;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBattery.h"
// Adjusted pointer: CBattery_ptr_344
// Points to CBattery at offset 0x158 in CBattery
// 32-bit pointer to CBattery
struct CBattery_ptr_344 {
    void *_raw;
    typedef CBattery base_type;
    CBattery_ptr_344() : _raw(0) {}
    template<typename T> CBattery_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBattery_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBattery* operator->() const { return (CBattery*)_raw; }
    CBattery* adj() const { return (CBattery*)((char*)_raw - offsetof(CBattery, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

