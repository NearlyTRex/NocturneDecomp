#pragma once

// Forward declarations
struct CMimic;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMimic_ptr_49028
// Points to CCloth at offset 0xbf84 in CMimic
// 32-bit pointer to CMimic
struct CCloth;
struct CMimic_ptr_49028 {
    void *_raw;
    typedef CMimic base_type;
    CMimic_ptr_49028() : _raw(0) {}
    template<typename T> CMimic_ptr_49028(T* p) : _raw((void*)p) {}
    template<typename T> CMimic_ptr_49028& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CMimic* adj() const { return (CMimic*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

