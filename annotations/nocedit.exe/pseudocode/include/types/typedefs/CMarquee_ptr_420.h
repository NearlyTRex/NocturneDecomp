#pragma once

// Forward declarations
struct CMarquee;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMarquee_ptr_420
// Points to CCourse at offset 0x1a4 in CMarquee
// 32-bit pointer to CMarquee
struct CCourse;
struct CMarquee_ptr_420 {
    void *_raw;
    typedef CMarquee base_type;
    CMarquee_ptr_420() : _raw(0) {}
    template<typename T> CMarquee_ptr_420(T* p) : _raw((void*)p) {}
    template<typename T> CMarquee_ptr_420& operator=(T* p) { _raw = (void*)p; return *this; }
    CCourse* operator->() const { return (CCourse*)_raw; }
    CMarquee* adj() const { return (CMarquee*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

