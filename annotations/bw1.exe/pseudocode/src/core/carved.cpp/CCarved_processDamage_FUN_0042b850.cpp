// Name: core_carved.cpp_CCarved_processDamage_FUN_0042b850
// Address: 0042b850
// Address Range: [[0042b850, 0042ba27]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_processDamage_FUN_0042b850(CCarved *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_processDamage_FUN_0042b850(CCarved *this_ptr,SDamageInfo *damage_info)

{
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  core_carved_cpp_FUN_0042b580(this_ptr,damage_info);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf8))(this_ptr);
  *(float *)&this_ptr->field_0x2538 =
       *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc2d0 * 4) == 0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
  }
  *(uint *)&this_ptr->field_0xc1e4 = 0x3f99999a;
  if (0.0 < *(float *)&this_ptr->field_0x2538) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0xd,1);
    if (*(float *)&this_ptr->field_0xc2d4 <= 0.0) {
      *(uint *)&this_ptr->field_0xc2d4 = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc2dc);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"carved-damage?.wav");
        *(uint *)&this_ptr->field_0xc2dc = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    iVar2 = *(int *)(pSVar1 + 0x24);
    if (((iVar2 == 0x16) || (iVar2 == 0x13)) && ((iVar2 == 0x17 || (iVar2 == 0x14)))) {
      if (iVar2 == 0x18) goto LAB_0042b956;
      if (iVar2 == 0x15) {
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
    core_carved_cpp_FUN_0042b370(this_ptr);
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0x13,1);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc2dc);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"carved-die?.wav");
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
  }
LAB_0042b956:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
  return;
}
