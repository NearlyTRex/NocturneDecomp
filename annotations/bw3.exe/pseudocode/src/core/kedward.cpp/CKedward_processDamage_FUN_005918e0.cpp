// Name: core_kedward.cpp_CKedward_processDamage_FUN_005918e0
// Address: 005918e0
// Address Range: [[005918e0, 00591999]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_processDamage_FUN_005918e0(CKedward *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_processDamage_FUN_005918e0(CKedward *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  fVar1 = *(float *)(damage_info + 4);
  *(uint *)&this_ptr->field_0xcde0 = 0x3f99999a;
  fVar1 = *(float *)&this_ptr->field_0x2538 - fVar1;
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,6,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
      return;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2540 = 0;
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar2 + 0x24) != 8) && (*(int *)(pSVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,7,1);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
