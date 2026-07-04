#pragma once

// Forward declarations
struct CVampireBoss;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CVampireBoss.h"
// Adjusted pointer: CVampireBoss_ptr_319456
// Points to CCloth at offset 0x4dfe0 in CVampireBoss
// 32-bit pointer to CVampireBoss
struct CCloth;
struct CVampireBoss_ptr_319456 {
    void *_raw;
    typedef CVampireBoss base_type;
    CVampireBoss_ptr_319456() : _raw(0) {}
    template<typename T> CVampireBoss_ptr_319456(T* p) : _raw((void*)p) {}
    template<typename T> CVampireBoss_ptr_319456& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CVampireBoss* adj() const { return (CVampireBoss*)((char*)_raw - offsetof(CVampireBoss, cape_cloth)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

