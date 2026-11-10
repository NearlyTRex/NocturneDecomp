// Name: core_hino.cpp_CHino_processDamage_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d404]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_processDamage_FUN_0059d360(CHino *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hino_cpp_CHino_processDamage_FUN_0059d360(CHino *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (*(int *)(damage_info + 0x30) == 0x6a) {
    return;
  }
  this_ptr_00 = &this_ptr->field_0x158;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd054);
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar3 == 0) goto LAB_0059d3d8;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
              ((CMotionController *)this_ptr_00);
    iVar3 = 6;
  }
  else {
    *(uint *)&this_ptr->field_0x2540 = 0;
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar2 + 0x24) == 7) || (*(int *)(pSVar2 + 0x24) == 8)) goto LAB_0059d3d8;
    iVar3 = 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)this_ptr_00,iVar3,1);
LAB_0059d3d8:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
