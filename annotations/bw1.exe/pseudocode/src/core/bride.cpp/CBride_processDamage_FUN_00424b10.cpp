// Name: core_bride.cpp_CBride_processDamage_FUN_00424b10
// Address: 00424b10
// Address Range: [[00424b10, 00424d51]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424b10(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424b10(CBride *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_1048 [1011];
  CBride *this_ptr_01;
  CVector3f *position;
  int iVar4;
  int iVar5;
  float flame_scale;
  float *pfVar6;
  int include_hero;
  float fStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [5];
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  if (damage_info->ammo_type == AMMO_TYPE_LITHIUM) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005d4fe8;
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    iVar4 = 0;
    CStack_24.x = fStack_60;
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,0,&CStack_30);
    pfVar6 = &fStack_48;
    fStack_48 = CStack_30.x;
    afStack_44[(uint)bVar3 * -2] = *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + 4);
    afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar6);
    include_hero = 0;
    flame_scale = 10.0;
    iVar5 = 0;
    iVar4 = 0;
    position = &CStack_54;
    CStack_54.x = afStack_44[2];
    *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + 4) = afStack_44[(uint)bVar3 * -2 + 3];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,position,iVar4,iVar5,flame_scale,include_hero);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_004248e0(this_ptr,damage_info);
  iVar4 = this_ptr->part_indices[8];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar4] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if (0.0 < (this_ptr->base).base.hit_points) {
    iVar5 = 1;
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&this_ptr_00->base,(iVar4 == 0) + 7,iVar5);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
    if (iVar4 == 0) {
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ub-hurt?.wav");
      this_ptr->sfx_handles[0] = uVar2;
    }
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar1->state_index != 0xe) && (pSVar1->state_index != 0xd)) {
      iVar5 = 1;
      iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&this_ptr_00->base,(iVar4 == 0) + 0xb,iVar5);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ub-die?.wav");
      this_ptr->sfx_handles[0] = uVar2;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
