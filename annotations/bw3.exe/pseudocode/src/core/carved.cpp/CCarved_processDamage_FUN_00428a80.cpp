// Name: core_carved.cpp_CCarved_processDamage_FUN_00428a80
// Address: 00428a80
// Address Range: [[00428a80, 00428c9a]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_processDamage_FUN_00428a80(CCarved *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_processDamage_FUN_00428a80(CCarved *this_ptr,SDamageInfo *damage_info)

{
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@ShotInvulnerable" + 1);
    return;
  }
  core_carved_cpp_FUN_00428810(this_ptr,damage_info);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf8))(this_ptr);
  *(float *)&this_ptr->field_0x2538 =
       *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0bc * 4) == 0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
  }
  *(uint *)&this_ptr->field_0xcde0 = 0x3f99999a;
  if (0.0 < *(float *)&this_ptr->field_0x2538) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0xd,1);
    if (*(float *)&this_ptr->field_0xd0c0 <= 0.0) {
      *(uint *)&this_ptr->field_0xd0c0 = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0c8);
      if (iVar2 == 0) {
        if (*(int *)&this_ptr->field_0xd074 != 0) {
          uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"demn_taunt?_???.wav");
          *(uint *)&this_ptr->field_0xd0c8 = uVar3;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
          return;
        }
        uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"demn_taunt_???.wav");
        *(uint *)&this_ptr->field_0xd0c8 = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    iVar2 = *(int *)(pSVar1 + 0x24);
    if (((iVar2 == 0x16) || (iVar2 == 0x13)) && ((iVar2 == 0x17 || (iVar2 == 0x14)))) {
      if (iVar2 == 0x18) goto LAB_00428b93;
      if (iVar2 == 0x15) {
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
    core_carved_cpp_FUN_00428600(this_ptr);
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0x13,1);
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0c8);
    if (*(int *)&this_ptr->field_0xd074 == 0) {
      pcVar4 = "demn_die_???.wav";
    }
    else {
      pcVar4 = "demn_die_???.wav";
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar4);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
  }
LAB_00428b93:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
