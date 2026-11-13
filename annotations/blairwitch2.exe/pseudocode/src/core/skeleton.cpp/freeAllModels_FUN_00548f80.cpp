// Name: core_skeleton.cpp_freeAllModels_FUN_00548f80
// Address: 00548f80
// Address Range: [[00548f80, 00548fb6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllModels_FUN_00548f80(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllModels_FUN_00548f80(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_DeformableModelPool;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_00541160(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&DAT_02177ff4);
  memset(&DAT_02177ff4,0,0x100);
  return;
}
