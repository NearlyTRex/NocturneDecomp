// Name: core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0
// Address: 004e57d0
// Address Range: [[004e57d0, 004e5923]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_unk3(uint param_1, uint
   param_2) */

void __cdecl core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0(void)

{
  CDeformableModelInstance *this_ptr;
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)in_stack_00000004,(CVector3f *)&stack0xffffffe4,
             &in_stack_00000008->impact_direction);
  do {
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
  } while (iVar3 < 3);
  this_ptr = &(in_stack_00000004->base).model;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  if (pSVar1->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530();
    fVar2 = (float)(in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
    (in_stack_00000004->base).hit_points = (int)fVar2;
    if (0.0 < fVar2) {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        ((uint)in_stack_00000004[1].base.base.orient_matrix.m[1].x);
      if (iVar3 == 0) {
        fVar2 = (float)(*((in_stack_00000004->base).base.vtable._ub)->playSound)
                                 ((CDemonActor *)in_stack_00000004,"gargoyle-hurt?.wav");
        in_stack_00000004[1].base.base.orient_matrix.m[1].x = fVar2;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
        return;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_005a9c40
                ((uint)in_stack_00000004[1].base.base.orient_matrix.m[1].x);
      (in_stack_00000004->base).hit_points = 0;
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar1->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,8,1);
        (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)in_stack_00000004,"gargoyle-shatter.wav");
        core_charactr_cpp_CCharacter_FUN_0042b9e0(&in_stack_00000004->base);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  in_stack_00000008->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
