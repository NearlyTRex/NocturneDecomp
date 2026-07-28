// Name: core_cloth.cpp_CClothList_ctor_FUN_00438210
// Address: 00438210
// Address Range: [[00438210, 00438244]]
// Convention: __cdecl
// Signature: CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00438210(CClothList *this_ptr)

#include "nocturne.h"

CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00438210(CClothList *this_ptr)

{
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return this_ptr;
}
