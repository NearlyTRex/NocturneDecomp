// Name: core_smiley.cpp_FUN_005a3580
// Address: 005a3580
// Address Range: [[005a3580, 005a3685]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_005a3580(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a3580(uint param_1, uint
   param_2) */

void __cdecl core_smiley_cpp_FUN_005a3580(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  if (in_stack_00000004[1].base.base.orient_matrix.m[1].x != 1.4013e-45) {
    in_stack_00000008->damage_type = 100;
    in_stack_00000008->damage_amount = 0.0;
    return;
  }
  iVar1 = in_stack_00000008->damage_type;
  if (iVar1 == 4) {
    in_stack_00000008->damage_type = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_005a35b4;
  in_stack_00000008->damage_amount = 0.0;
LAB_005a35b4:
  if (0.0 < in_stack_00000008->damage_amount) {
    core_smiley_cpp_FUN_005a32a0();
  }
  fVar2 = (in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  this_ptr = &(in_stack_00000004->base).model;
  (in_stack_00000004->base).hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (in_stack_00000004->base).hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar3->state_index != 8) && (pSVar3->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,7,1);
      (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
      (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                ((CDemonActor *)in_stack_00000004,"smiley_die??.wav");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
