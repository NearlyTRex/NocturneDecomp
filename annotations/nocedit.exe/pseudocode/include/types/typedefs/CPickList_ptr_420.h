#pragma once

// Forward declarations
struct CPickList;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPickList.h"
// Adjusted pointer: CPickList_ptr_420
// Points to CEdScrollBar at offset 0x1a4 in CPickList
// 32-bit pointer to CPickList
struct CEdScrollBar;
struct CPickList_ptr_420 {
    void *_raw;
    typedef CPickList base_type;
    CPickList_ptr_420() : _raw(0) {}
    template<typename T> CPickList_ptr_420(T* p) : _raw((void*)p) {}
    template<typename T> CPickList_ptr_420& operator=(T* p) { _raw = (void*)p; return *this; }
    CEdScrollBar* operator->() const { return (CEdScrollBar*)_raw; }
    CPickList* adj() const { return (CPickList*)((char*)_raw - offsetof(CPickList, scrollbar)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

