// Name: core_npc.cpp_FUN_00510510
// Address: 00510510
// Address Range: [[00510510, 005105ab]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_00510510(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_npc_cpp_FUN_00510510(CCharacter *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  core_charactr_cpp_FUN_00422930(param_1);
  iVar1 = _stricmp(&param_1->field_0x2514,"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x280c = 2;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  _DAT_01d653fc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",0);
  _DAT_01d65400 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",0);
  iVar1 = _DAT_01d653fc;
  *(int *)&param_1->field_0x2690 = _DAT_01d65400;
  *(int *)&param_1->field_0x2618 = iVar1;
  if (*(int *)&param_1->field_0x2814 == 0) {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
