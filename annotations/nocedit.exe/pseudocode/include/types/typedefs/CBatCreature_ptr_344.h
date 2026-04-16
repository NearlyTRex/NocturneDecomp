#pragma once

// Forward declarations
struct CBatCreature;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBatCreature_ptr_344
// Points to CBatCreature at offset 0x158 in CBatCreature
// 32-bit pointer to CBatCreature
struct CBatCreature_ptr_344 {
    void *_raw;
    typedef CBatCreature base_type;
    CBatCreature_ptr_344() : _raw(0) {}
    template<typename T> CBatCreature_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBatCreature_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatCreature* operator->() const { return (CBatCreature*)_raw; }
    CBatCreature* adj() const { return (CBatCreature*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

