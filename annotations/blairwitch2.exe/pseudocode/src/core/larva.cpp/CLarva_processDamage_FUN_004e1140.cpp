// Name: core_larva.cpp_CLarva_processDamage_FUN_004e1140
// Address: 004e1140
// Address Range: [[004e1140, 004e1338]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_processDamage_FUN_004e1140(CLarva *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_larva_cpp_CLarva_processDamage_FUN_004e1140(CLarva *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1010 [957];
  char acStack_f0 [100];
  char acStack_8c [100];
  float fStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  
  bVar4 = 0;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
    if (iVar2 == 0) {
      _sprintf(acStack_f0,"l%s-shot?.wav");
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,acStack_f0);
      this_ptr->sfx_handles[0] = uVar3;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,3,1);
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    _sprintf(acStack_8c,"l%s-die?.wav");
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,acStack_8c);
    this_ptr->sfx_handles[0] = uVar3;
  }
  core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
  CStack_1c.x = fStack_28;
  *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) = afStack_24[(uint)bVar4 * -2];
  *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
            (g_CGorePtr,&CStack_1c,(CVector3f *)0x0,10,(this_ptr->base).base.blood_type);
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
