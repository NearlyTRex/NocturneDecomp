// Name: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004c0ea0
// Address: 004c0ea0
// Address Range: [[004c0ea0, 004c0ffd]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004c0ea0(CGargoyle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004c0ea0(CGargoyle *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1010 [1011];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar4 = 0;
  core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
  iVar3 = 0;
  CStack_28.x = fStack_1c;
  *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) = auStack_18[(uint)bVar4 * -2];
  *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  do {
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
              (0x01C3DEB4,&CStack_28,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar3 < 3);
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  if (*(int *)(iVar3 + 0x24) != 5) {
    core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004c0c00(this_ptr,damage_info);
    fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
    (this_ptr->base).base.hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
      if (iVar3 == 0) {
        uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gargoyle-hurt?.wav");
        this_ptr->sfx_handles[0] = uVar2;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      (this_ptr->base).base.hit_points = 0.0;
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar3 + 0x24) != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,8,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"@gargoyle-shatter.wav" + 1);
        core_charactr_cpp_CCharacter_dismember_FUN_00427360
                  ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  *(uint *)(damage_info + 4) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
