#pragma once

// Forward declarations
struct CMarquee;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMarquee.h"
// Adjusted pointer: CMarquee_ptr_420
// Points to CMarquee at offset 0x1a4 in CMarquee
// 32-bit pointer to CMarquee
struct CMarquee_ptr_420 {
    void *_raw;
    typedef CMarquee base_type;
    CMarquee_ptr_420() : _raw(0) {}
    template<typename T> CMarquee_ptr_420(T* p) : _raw((void*)p) {}
    template<typename T> CMarquee_ptr_420& operator=(T* p) { _raw = (void*)p; return *this; }
    CMarquee* operator->() const { return (CMarquee*)_raw; }
    CMarquee* adj() const { return (CMarquee*)((char*)_raw - offsetof(CMarquee, course.loop)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

