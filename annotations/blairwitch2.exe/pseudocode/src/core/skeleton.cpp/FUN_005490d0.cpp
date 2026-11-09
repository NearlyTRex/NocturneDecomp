// Name: core_skeleton.cpp_FUN_005490d0
// Address: 005490d0
// Address Range: [[005490d0, 00549179]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_005490d0(char *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_005490d0(char *output_buffer)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CSkeleton *this_ptr;
  char *pcVar4;
  int iVar5;
  int local_18;
  int local_14;
  
  this_ptr = g_SkeletonPool;
  iVar3 = 0;
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar1 = core_skeleton_cpp_FUN_00541000(this_ptr);
    iVar3 = iVar3 + iVar1;
    if (g_SkeletonPool[iVar2].field_0x1d1a8 != '\0') {
      iVar5 = iVar5 + 1;
    }
    iVar2 = iVar2 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar2 < 0x28);
  iVar2 = 0;
  local_14 = 0;
  pcVar4 = &g_DeformableModelPool[0].field_0x2a70;
  local_18 = 0;
  do {
    iVar1 = core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_00544c70
                      (g_DeformableModelPool + iVar2);
    local_14 = local_14 + iVar1;
    if (*pcVar4 != '\0') {
      local_18 = local_18 + 1;
    }
    iVar2 = iVar2 + 1;
    pcVar4 = pcVar4 + 0x2ac0;
  } while (iVar2 < 0x40);
  FUN_005b7790
            (output_buffer,"%d skeletons, %d bytes, %d models, %d bytes",iVar5,iVar3,local_18,local_14);
  return;
}
