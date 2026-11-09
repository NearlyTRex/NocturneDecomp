// Name: core_tbplayer.cpp_FUN_005947b0
// Address: 005947b0
// Address Range: [[005947b0, 00594814]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_005947b0(int param_1)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005947b0(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_npc_cpp_FUN_00531720(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  *(int *)(param_1 + 0x1fab8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x25ac) = 0;
  *(int *)(param_1 + 0x1fabc) = iVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0x1fab8);
  return;
}
