// Name: core_scat.cpp_CScat_processDamage_FUN_00541c70
// Address: 00541c70
// Address Range: [[00541c70, 00541dbf]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_processDamage_FUN_00541c70(CScat *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_processDamage_FUN_00541c70(CScat *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if ((*(uint *)&this_ptr->field_0xc1d0 & 0x7fffffff) != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  *(uint *)&this_ptr->field_0xc1d0 = 0x3F000000;
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(damage_info + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
      return;
    }
    iVar3 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_00,iVar3,1);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
    return;
  }
  *(uint *)&this_ptr->field_0x2538 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_00);
  if (*(int *)(pSVar2 + 0x24) != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr_00);
    if (*(int *)(pSVar2 + 0x24) != 4) {
      *(uint *)&this_ptr->field_0x26fc = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr_00,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"?scat-die-?.wav" + 1);
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
