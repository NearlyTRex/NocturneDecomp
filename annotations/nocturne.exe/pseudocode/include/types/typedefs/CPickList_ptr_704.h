#pragma once

// Forward declarations
struct CPickList;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPickList.h"
// Adjusted pointer: CPickList_ptr_704
// Points to CEdButton at offset 0x2c0 in CPickList
// 32-bit pointer to CPickList
struct CEdButton;
struct CPickList_ptr_704 {
    void *_raw;
    typedef CPickList base_type;
    CPickList_ptr_704() : _raw(0) {}
    template<typename T> CPickList_ptr_704(T* p) : _raw((void*)p) {}
    template<typename T> CPickList_ptr_704& operator=(T* p) { _raw = (void*)p; return *this; }
    CEdButton* operator->() const { return (CEdButton*)_raw; }
    CPickList* adj() const { return (CPickList*)((char*)_raw - offsetof(CPickList, cancel_button)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

