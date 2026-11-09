// Name: core_npc.cpp_FUN_00509020
// Address: 00509020
// Address Range: [[00509020, 00509115]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_00509020(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_npc_cpp_FUN_00509020(int param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  float10 fVar2;
  
  core_charactr_cpp_FUN_0042b0e0(param_1);
  iVar1 = _stricmp((char *)(param_1 + 0x24a8),"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x27a0) = 2;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  _DAT_01dd6a3c = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Hand",0);
  _DAT_01dd6a40 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Hand",0);
  iVar1 = _DAT_01dd6a3c;
  *(int *)(param_1 + 0x2620) = _DAT_01dd6a40;
  *(int *)(param_1 + 0x25a8) = iVar1;
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  fVar2 = (float10)*(int *)(param_1 + 0x206bc) * (float10)_DAT_005cb558 * (float10)_DAT_005cb560;
  round();
  if ((int)ROUND(fVar2) == 0x10000) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0x206b8) = 0xfffffffe;
  *(uint *)(param_1 + 0x206c0) = 0;
  *(uint *)(param_1 + 0xfc) = 1;
  *(int *)(param_1 + 0x206b4) = (int)ROUND(fVar2);
  return;
}
