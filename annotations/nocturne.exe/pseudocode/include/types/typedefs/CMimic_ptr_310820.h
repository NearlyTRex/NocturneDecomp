#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMimic_ptr_310820
// Points to CMimic at offset 0x4be24 in CMimic
// 32-bit pointer to CMimic
struct CMimic_ptr_310820 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_310820() : _raw(0) {}
    template<typename T> CMimic_ptr_310820(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_310820& operator=(T* p) { _raw = (void*)p; return *this; }
    CMimic* operator->() const { return (CMimic*)_raw; }
    CMimic* adj() const { return (CMimic*)((char*)_raw - 310820 /* FIXME(64bit): unresolved field path, 32-bit-only offset */); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

