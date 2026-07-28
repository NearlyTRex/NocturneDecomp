#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBoneGuy.h"
// Adjusted pointer: CBoneGuy_ptr_48956
// Points to CBoneGuy at offset 0xbf3c in CBoneGuy
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_48956 {
    void *_raw;
    typedef CBoneGuy base_type;
    CBoneGuy_ptr_48956() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_48956(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_48956& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    CBoneGuy* adj() const { return (CBoneGuy*)((char*)_raw - offsetof(CBoneGuy, boxes[5].start_orient.y)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

