#pragma once

// Forward declarations
struct CSvetlana;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSvetlana.h"
// Adjusted pointer: CSvetlana_ptr_391756
// Points to CSvetlana at offset 0x5fa4c in CSvetlana
// 32-bit pointer to CSvetlana
struct CSvetlana_ptr_391756 {
    void *_raw;
    typedef CSvetlana base_type;
    CSvetlana_ptr_391756() : _raw(0) {}
    template<typename T> CSvetlana_ptr_391756(T* p) : _raw((void*)p) {}
    template<typename T> CSvetlana_ptr_391756& operator=(T* p) { _raw = (void*)p; return *this; }
    CSvetlana* operator->() const { return (CSvetlana*)_raw; }
    CSvetlana* adj() const { return (CSvetlana*)((char*)_raw - offsetof(CSvetlana, hair_cloth.model.texture_list[1].textures[1].texture_name[12])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

