// Name: core_cloth.cpp_CClothList_ctor_FUN_005b1440
// Address: 005b1440
// Address Range: [[005b1440, 005b1474]]
// Convention: __cdecl
// Signature: CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_005b1440(CClothList *this_ptr)

#include "nocturne.h"

CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_005b1440(CClothList *this_ptr)

{
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return this_ptr;
}
