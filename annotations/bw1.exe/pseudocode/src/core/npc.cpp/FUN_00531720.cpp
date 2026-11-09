// Name: core_npc.cpp_FUN_00531720
// Address: 00531720
// Address Range: [[00531720, 005317bb]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_00531720(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_npc_cpp_FUN_00531720(CCharacter *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  core_charactr_cpp_FUN_0042c510(param_1);
  iVar1 = _stricmp(&param_1->field_0x24a8,"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x27a0 = 2;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  _DAT_01d81364 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",0);
  _DAT_01d81368 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",0);
  iVar1 = _DAT_01d81364;
  *(int *)&param_1->field_0x2620 = _DAT_01d81368;
  *(int *)&param_1->field_0x25a8 = iVar1;
  if (*(int *)&param_1->field_0x27a8 == 0) {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
