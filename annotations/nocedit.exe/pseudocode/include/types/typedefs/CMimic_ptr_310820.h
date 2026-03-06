#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMimic_ptr_310820
// Points to CMorph at offset 0x4be24 in CMimic
// 32-bit pointer to CMimic
struct CMorph;
struct CMimic_ptr_310820 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_310820() : _raw(0) {}
    template<typename T> CMimic_ptr_310820(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_310820& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorph* operator->() const { return (CMorph*)_raw; }
    CMimic* adj() const { return (CMimic*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

