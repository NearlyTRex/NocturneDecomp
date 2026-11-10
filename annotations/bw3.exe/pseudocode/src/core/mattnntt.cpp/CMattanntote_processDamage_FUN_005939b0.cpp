// Name: core_mattnntt.cpp_CMattanntote_processDamage_FUN_005939b0
// Address: 005939b0
// Address Range: [[005939b0, 00593a8e]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_processDamage_FUN_005939b0(CMattanntote *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_processDamage_FUN_005939b0(CMattanntote *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (0 < *(int *)&this_ptr->field_0x33a0) {
    return;
  }
  fVar1 = *(float *)(damage_info + 4);
  *(uint *)&this_ptr->field_0xcde0 = 0x3f99999a;
  fVar1 = *(float *)&this_ptr->field_0x2538 - fVar1;
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x2540 = 0;
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar3 + 0x24) != 9) && (*(int *)(pSVar3 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,8,1);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,7,1);
    }
    if (*(float *)&this_ptr->field_0xd054 <= 0.0) {
      *(uint *)&this_ptr->field_0xd054 = 0x40000000;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
