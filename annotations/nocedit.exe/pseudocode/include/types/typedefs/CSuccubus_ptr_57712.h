#pragma once

// Forward declarations
struct CSuccubus;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSuccubus.h"
// Adjusted pointer: CSuccubus_ptr_57712
// Points to CClothList at offset 0xe170 in CSuccubus
// 32-bit pointer to CSuccubus
struct CClothList;
struct CSuccubus_ptr_57712 {
    void *_raw;
    typedef CSuccubus base_type;
    CSuccubus_ptr_57712() : _raw(0) {}
    template<typename T> CSuccubus_ptr_57712(T* p) : _raw((void*)p) {}
    template<typename T> CSuccubus_ptr_57712& operator=(T* p) { _raw = (void*)p; return *this; }
    CClothList* operator->() const { return (CClothList*)_raw; }
    CSuccubus* adj() const { return (CSuccubus*)((char*)_raw - offsetof(CSuccubus, hotdemon_cloth_list)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

