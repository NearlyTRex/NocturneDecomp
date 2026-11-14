// Name: core_cloth.cpp_CClothList_ctor_FUN_00441c60
// Address: 00441c60
// Address Range: [[00441c60, 00441c94]]
// Convention: __cdecl
// Signature: CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00441c60(CClothList *this_ptr)

#include "nocturne.h"

CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00441c60(CClothList *this_ptr)

{
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return this_ptr;
}
