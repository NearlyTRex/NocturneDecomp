// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004d4390
// Address: 004d4390
// Address Range: [[004d4390, 004d4557]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d4390(CHotDemon *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d4390(CHotDemon *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1010 [1009];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [4];
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if (*(int *)(damage_info + 0x28) == 8) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005da6b1;
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    iVar2 = 0;
    CStack_28.x = fStack_1c;
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) = auStack_18[(uint)bVar4 * -2];
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 10)) && (iVar2 != 0xb)) {
      if (iVar2 < 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-die.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) < 6) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      iVar2 = 3;
    }
    else {
      iVar2 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar2,1);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar2 == 0) {
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
