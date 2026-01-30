// Name: core_smiley.cpp_FUN_005a3160
// Address: 005a3160
// Address Range: [[005a3160, 005a3212]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_FUN_005a3160(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a3160(uint param_1, uint
   param_2) */

int __cdecl core_smiley_cpp_FUN_005a3160(void)

{
  int iVar1;
  CVector3f *input_local_point;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  CVector3f CStack_1c;
  
  if (in_stack_00000008 == 0) {
    return 0;
  }
  iVar1 = (*(((in_stack_00000004->base).vtable._uc)->_uc).isDamageable)(in_stack_00000004);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x104))();
    return 1;
  }
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 ((CVector3f *)&stack0xfffffff0,&g_ZeroVector,
                  (in_stack_00000004->model).bone_transform.bone_world_matrices + INT_03f48fa8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base,&CStack_1c,input_local_point);
  CStack_1c.y = CStack_1c.y + -4.0f;
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x60))();
  return 1;
}
