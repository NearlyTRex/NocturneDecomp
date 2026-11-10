// Name: core_imp.cpp_CImp_processDamage_FUN_004f3f50
// Address: 004f3f50
// Address Range: [[004f3f50, 004f408c]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDamage_FUN_004f3f50(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_processDamage_FUN_004f3f50(CImp *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1010 [1009];
  char *sound_name;
  float fStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if (*(int *)(damage_info + 0x28) == 8) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e56da;
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    iVar4 = 0;
    CStack_1c.x = fStack_28;
    *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
    *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_1c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  core_imp_cpp_CImp_processDismemberment_FUN_004f3cb0(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,5,1);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 != 0) goto LAB_004f4052;
    sound_name = "imp-hurt?.wav";
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar2 + 0x24) == 6) || (*(int *)(pSVar2 + 0x24) == 7)) goto LAB_004f4052;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,6,1);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    sound_name = "imp-die?.wav";
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[1] = uVar3;
LAB_004f4052:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
