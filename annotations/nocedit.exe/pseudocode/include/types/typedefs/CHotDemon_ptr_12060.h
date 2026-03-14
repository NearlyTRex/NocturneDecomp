#pragma once

// Forward declarations
struct CHotDemon;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHotDemon_ptr_12060
// Points to CHotDemon at offset 0x2f1c in CHotDemon
// 32-bit pointer to CHotDemon
struct CHotDemon_ptr_12060 {
    void *_raw;
    typedef CHotDemon base_type;
    CHotDemon_ptr_12060() : _raw(0) {}
    template<typename T> CHotDemon_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CHotDemon_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CHotDemon* operator->() const { return (CHotDemon*)_raw; }
    CHotDemon* adj() const { return (CHotDemon*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

