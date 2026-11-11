// Name: core_imp.cpp_CImp_processDamage_FUN_004d7d50
// Address: 004d7d50
// Address Range: [[004d7d50, 004d7e8c]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDamage_FUN_004d7d50(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_processDamage_FUN_004d7d50(CImp *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1010 [1009];
  char *sound_name;
  float fStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if (damage_info->ammo_type == AMMO_TYPE_MERCURY) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005dab79;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    iVar3 = 0;
    CStack_1c.x = fStack_28;
    *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_1c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  core_imp_cpp_CImp_processDismemberment_FUN_004d7ab0(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar3 != 0) goto LAB_004d7e52;
    sound_name = "imp-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) == 6) || (*(int *)(iVar3 + 0x24) == 7)) goto LAB_004d7e52;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,6,1);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    sound_name = "@imp-die?.wav" + 1;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[1] = uVar2;
LAB_004d7e52:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
