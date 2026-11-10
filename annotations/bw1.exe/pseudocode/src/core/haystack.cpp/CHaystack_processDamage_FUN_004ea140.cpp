// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004ea140
// Address: 004ea140
// Address Range: [[004ea140, 004ea25e]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004ea140(CHaystack *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004ea140(CHaystack *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int desired_state_index;
  
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
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if (this_ptr->guns_drawn == 0) {
      desired_state_index = 4;
    }
    else {
      desired_state_index = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_00,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
