// Name: core_bride.cpp_CBride_processDamage_FUN_0041ead0
// Address: 0041ead0
// Address Range: [[0041ead0, 0041ed11]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDamage_FUN_0041ead0(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_processDamage_FUN_0041ead0(CBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  byte bVar2;
  float afStackY_1048 [1011];
  CBride *this_ptr_01;
  CVector3f *position;
  int iVar3;
  int iVar4;
  float flame_scale;
  uint *puVar5;
  int include_hero;
  float fStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [5];
  uint uStack_30;
  CVector3f CStack_24;
  
  bVar2 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  if (*(int *)(damage_info + 0x28) == 7) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005cc8f9;
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    iVar3 = 0;
    CStack_24.x = fStack_60;
    *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar2 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
    puVar5 = &uStack_48;
    uStack_48 = uStack_30;
    afStack_44[(uint)bVar2 * -2] = afStack_44[(uint)bVar2 * -2 + 6];
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
    include_hero = 0;
    flame_scale = 10.0;
    iVar4 = 0;
    iVar3 = 0;
    position = &CStack_54;
    CStack_54.x = afStack_44[2];
    *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + 4) = afStack_44[(uint)bVar2 * -2 + 3];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_01,position,iVar3,iVar4,flame_scale,include_hero);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_0041e8a0(this_ptr,damage_info);
  iVar3 = this_ptr->part_indices[8];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar3 * 4) == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if (0.0 < (this_ptr->base).base.hit_points) {
    iVar4 = 1;
    iVar3 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,(iVar3 == 0) + 7,iVar4);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
    if (iVar3 == 0) {
      uVar1 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ub-hurt?.wav");
      this_ptr->sfx_handles[0] = uVar1;
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) != 0xe) && (*(int *)(iVar3 + 0x24) != 0xd)) {
      iVar4 = 1;
      iVar3 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,(iVar3 == 0) + 0xb,iVar4);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      uVar1 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ub-die?.wav");
      this_ptr->sfx_handles[0] = uVar1;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
