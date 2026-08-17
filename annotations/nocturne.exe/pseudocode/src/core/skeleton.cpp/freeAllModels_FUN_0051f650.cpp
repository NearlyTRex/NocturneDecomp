// Name: core_skeleton.cpp_freeAllModels_FUN_0051f650
// Address: 0051f650
// Address Range: [[0051f650, 0051f67a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllModels_FUN_0051f650(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_freeAllModels_FUN_0051f650(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_CDeformableModel_ARRAY_0268cef4;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&DAT_02737ef4);
  _DAT_0268cef0 = 0;
  return;
}
