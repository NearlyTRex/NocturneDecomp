// Name: core_cloth.cpp_CClothList_ctor_FUN_0043bf40
// Address: 0043bf40
// MANUAL RECONSTRUCTION
// Address Range: [[0043bf40, 0043bf74]]
// Convention: __cdecl
// Signature: CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_0043bf40(CClothList *this_ptr)

#include "nocturne.h"

CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_0043bf40(CClothList *this_ptr)

{
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,sizeof(this_ptr->filenames));
  memset(this_ptr->cloths,0,sizeof(this_ptr->cloths));
  return this_ptr;
}
