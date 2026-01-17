// Name: core_sentinel.cpp_FUN_00568b70
// Address: 00568b70
// Address Range: [[00568b70, 00568c6d]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568b70()

#include "nocturne.h"

/* Signature: byte actors_enemy_sentinel.cpp_FUN_00568b70(uint param_1, uint
   param_2) */

uint core_sentinel_cpp_FUN_00568b70(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (in_stack_00000008 == 0) {
    return 0;
  }
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_10,&g_ZeroVector,
                      (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03114210 * 4].z);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_34,&g_ZeroVector,
                      (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03114214 * 4].z);
  local_1c.x = (pCVar2->x + pCVar1->x) * 0.5f;
  local_1c.y = (pCVar2->y + pCVar1->y) * 0.5f;
  local_1c.z = (pCVar2->z + pCVar1->z) * 0.5f + -0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_28,&local_1c);
  local_28.y = local_28.y + -4.0f;
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x60))();
  return 1;
}
