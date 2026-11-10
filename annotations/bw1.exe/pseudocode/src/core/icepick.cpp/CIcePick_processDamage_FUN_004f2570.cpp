// Name: core_icepick.cpp_CIcePick_processDamage_FUN_004f2570
// Address: 004f2570
// Address Range: [[004f2570, 004f271d]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004f2570(CIcePick *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004f2570(CIcePick *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if ((*(uint *)&this_ptr->field_0xc1d0 & 0x7fffffff) != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  *(uint *)&this_ptr->field_0xc1d0 = 0x40400000;
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr_00);
    if (*(int *)(pSVar2 + 0x24) != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr_00);
      if (*(int *)(pSVar2 + 0x24) != 8) {
        *(uint *)&this_ptr->field_0x26fc = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,8,1);
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if (this_ptr->guns_drawn == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_00,iVar4,1);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                        (this_ptr,"icepick_injured??.wav");
      this_ptr->sfx_handles[1] = uVar3;
      core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
