// Name: core_larva.cpp_CLarva_processDamage_FUN_004fe510
// Address: 004fe510
// Address Range: [[004fe510, 004fe708]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_processDamage_FUN_004fe510(CLarva *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_larva_cpp_CLarva_processDamage_FUN_004fe510(CLarva *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1010 [957];
  char acStack_f0 [100];
  char acStack_8c [100];
  float fStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  
  bVar5 = 0;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
    if (iVar4 == 0) {
      _sprintf(acStack_f0,"l%s-shot?.wav");
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,acStack_f0);
      this_ptr->sfx_handles[0] = uVar3;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,3,1);
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar2->state_index != 5) && (pSVar2->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    _sprintf(acStack_8c,"l%s-die?.wav");
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,acStack_8c);
    this_ptr->sfx_handles[0] = uVar3;
  }
  core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
  CStack_1c.x = fStack_28;
  *(float *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) = afStack_24[(uint)bVar5 * -2];
  *(float *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
            (g_CGorePtr,&CStack_1c,(CVector3f *)0x0,10,(this_ptr->base).base.blood_type);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
