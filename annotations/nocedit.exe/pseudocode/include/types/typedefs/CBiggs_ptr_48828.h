#pragma once

// Forward declarations
struct CBiggs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBiggs_ptr_48828
// 32-bit pointer to CBiggs
struct CBiggs_ptr_48828 {
    void *_raw;
    CBiggs_ptr_48828() : _raw(0) {}
    template<typename T> CBiggs_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CBiggs_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CBiggs* operator->() const { return (CBiggs*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

