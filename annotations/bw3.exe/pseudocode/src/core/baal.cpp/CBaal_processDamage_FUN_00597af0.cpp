// Name: core_baal.cpp_CBaal_processDamage_FUN_00597af0
// Address: 00597af0
// Address Range: [[00597af0, 00597bd5]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_processDamage_FUN_00597af0(CBaal *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_baal_cpp_CBaal_processDamage_FUN_00597af0(CBaal *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (*(int *)(damage_info + 0x30) != 0x70) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    this_ptr_00 = &this_ptr->field_0x158;
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x2540 = 0;
      *(uint *)&this_ptr->field_0x2538 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
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
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      if (0x5a < iVar2) {
        core_baal_cpp_FUN_00597be0(this_ptr,0);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  }
  return;
}
