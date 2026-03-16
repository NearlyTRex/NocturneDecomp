#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMimic_ptr_13260
// Points to CMimic at offset 0x33cc in CMimic
// 32-bit pointer to CMimic
struct CMimic_ptr_13260 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_13260() : _raw(0) {}
    template<typename T> CMimic_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CMimic* operator->() const { return (CMimic*)_raw; }
    CMimic* adj() const { return (CMimic*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

