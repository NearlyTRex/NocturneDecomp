#pragma once

// Forward declarations
struct CBodyPart;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBodyPart_ptr_656
// Points to SBodyPartModel at offset 0x290 in CBodyPart
// 32-bit pointer to CBodyPart
struct SBodyPartModel;
struct CBodyPart_ptr_656 {
    void *_raw;
    typedef CBodyPart base_type;
    CBodyPart_ptr_656() : _raw(0) {}
    template<typename T> CBodyPart_ptr_656(T* p) : _raw((void*)p) {}
    template<typename T> CBodyPart_ptr_656& operator=(T* p) { _raw = (void*)p; return *this; }
    SBodyPartModel* operator->() const { return (SBodyPartModel*)_raw; }
    CBodyPart* adj() const { return (CBodyPart*)((char*)_raw - 656); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

