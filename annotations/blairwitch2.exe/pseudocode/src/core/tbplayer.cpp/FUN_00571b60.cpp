// Name: core_tbplayer.cpp_FUN_00571b60
// Address: 00571b60
// Address Range: [[00571b60, 00571bc4]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00571b60(int param_1)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00571b60(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_npc_cpp_FUN_00510510(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  *(int *)(param_1 + 0x24348) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x261c) = 0;
  *(int *)(param_1 + 0x2434c) = iVar1;
  *(uint *)(param_1 + 0x2618) = *(uint *)(param_1 + 0x24348);
  return;
}
