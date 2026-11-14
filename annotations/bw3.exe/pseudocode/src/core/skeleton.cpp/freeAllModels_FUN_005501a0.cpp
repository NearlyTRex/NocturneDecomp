// Name: core_skeleton.cpp_freeAllModels_FUN_005501a0
// Address: 005501a0
// Address Range: [[005501a0, 005501d6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllModels_FUN_005501a0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllModels_FUN_005501a0(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_DeformableModelPool;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_00548370(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&DAT_02802f5c);
  memset(&DAT_02802f5c,0,0x100);
  return;
}
