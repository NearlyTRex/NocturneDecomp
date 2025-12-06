// Name: core_smiley.cpp_FUN_005a3160
// Address: 005a3160
// Address Range: [[005a3160, 005a3212]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3160()

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a3160(uint param_1, uint
   param_2) */

uint core_smiley_cpp_FUN_005a3160(void)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  SCollisionInfo *in_stack_ffffffe0;
  CVector3f CStack_18;
  
  if (in_stack_00000008 == 0) {
    return 0;
  }
  iVar1 = (*in_stack_00000004->vtable[1].hasCollision)(in_stack_00000004,in_stack_ffffffe0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x104))();
    return 1;
  }
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 ((CVector3f *)&stack0xfffffff4,&g_ZeroVector,
                  (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03f48fa8 * 4].z);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_18,input_local_point);
  CStack_18.y = CStack_18.y + -4f;
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x60))();
  return 1;
}
