// Name: core_cloth.cpp_CClothList_ctor_FUN_0043f8c0
// Address: 0043f8c0
// Address Range: [[0043f8c0, 0043f8f4]]
// Convention: __cdecl
// Signature: CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_0043f8c0(CClothList *this_ptr)

#include "nocturne.h"

CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_0043f8c0(CClothList *this_ptr)

{
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return this_ptr;
}
