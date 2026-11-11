// Name: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004dd630
// Address: 004dd630
// Address Range: [[004dd630, 004dd78d]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004dd630(CGargoyle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004dd630(CGargoyle *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1010 [1011];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar5 = 0;
  core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
  iVar4 = 0;
  CStack_28.x = fStack_1c;
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) = auStack_18[(uint)bVar5 * -2];
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,&CStack_28,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  if (pSVar2->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004dd390(this_ptr,damage_info);
    fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
      if (iVar4 == 0) {
        uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gargoyle-hurt?.wav");
        this_ptr->sfx_handles[0] = uVar3;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
      (this_ptr->base).base.hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
      if (pSVar2->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,8,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"@gargoyle-shatter.wav" + 1);
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
    return;
  }
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
