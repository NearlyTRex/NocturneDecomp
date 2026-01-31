// Name: core_larva.cpp_CLarva_processDamage_FUN_00503a20
// Address: 00503a20
// Address Range: [[00503a20, 00503bfe]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_processDamage_FUN_00503a20(CLarva *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_larva_cpp_CLarva_processDamage_FUN_00503a20(CLarva *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char local_e8 [100];
  char local_84 [116];
  
  fVar1 = (float)(this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = (int)fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x10));
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0xc));
    if (iVar5 == 0) {
      fVar1 = (this_ptr->base).base.size_scale;
      if ((float)0.29999999999999999 <= fVar1) {
        if (0.69999999999999996 <= (double)fVar1) {
          pcVar3 = "big";
        }
        else {
          pcVar3 = "med";
        }
      }
      else {
        pcVar3 = "sml";
      }
      sprintf(local_84,"l%s-shot?.wav",pcVar3);
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,local_84);
      *(uint *)(this_ptr->unk + 0xc) = uVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,3,1);
  }
  else {
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index != 5) && (pSVar2->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0xc));
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x10));
    fVar1 = (this_ptr->base).base.size_scale;
    if ((float)0.29999999999999999 <= fVar1) {
      if (0.69999999999999996 <= (double)fVar1) {
        pcVar3 = "big";
      }
      else {
        pcVar3 = "med";
      }
    }
    else {
      pcVar3 = "sml";
    }
    sprintf(local_e8,"l%s-die?.wav",pcVar3);
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_e8);
    *(uint *)(this_ptr->unk + 0xc) = uVar4;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)(local_84 + 0x6c),&damage_info->impact_direction);
  core_gore_cpp_FUN_004edbb0();
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
