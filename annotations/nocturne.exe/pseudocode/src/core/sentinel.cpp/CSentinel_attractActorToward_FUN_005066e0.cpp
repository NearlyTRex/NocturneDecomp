// Name: core_sentinel.cpp_CSentinel_attractActorToward_FUN_005066e0
// Address: 005066e0
// Address Range: [[005066e0, 005067dd]]
// Convention: unknown
// Signature: undefined4 core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(CDemonActor *param_1,int param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (&local_10,(CVector3f *)&DAT_02dd1184,
                      (CMatrix3x4f *)(param_1[0xc].actor_name + _DAT_01e5721c * 0x30 + 0x10));
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (&local_34,(CVector3f *)&DAT_02dd1184,
                      (CMatrix3x4f *)(param_1[0xc].actor_name + _DAT_01e57220 * 0x30 + 0x10));
  local_1c.x = (pCVar2->x + pCVar1->x) * 0.5f;
  local_1c.y = (pCVar2->y + pCVar1->y) * 0.5f;
  local_1c.z = (pCVar2->z + pCVar1->z) * 0.5f + -0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_28,&local_1c);
  local_28.y = local_28.y + -4.0f;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x60))(param_2,&local_28,param_2 + 0x30);
  return 1;
}
