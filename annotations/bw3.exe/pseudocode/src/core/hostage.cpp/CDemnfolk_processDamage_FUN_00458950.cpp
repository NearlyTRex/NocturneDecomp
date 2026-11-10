// Name: core_hostage.cpp_CDemnfolk_processDamage_FUN_00458950
// Address: 00458950
// Address Range: [[00458950, 00458b91]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CDemnfolk_processDamage_FUN_00458950(CDemnfolk *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CDemnfolk_processDamage_FUN_00458950(CDemnfolk *this_ptr,SDamageInfo *damage_info)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(int *)&this_ptr->field_0x27b0 == 0) {
    unkafter_demnfolk_cpp_FUN_00458680((CZombie *)this_ptr,damage_info);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf8))(this_ptr);
    *(float *)&this_ptr->field_0x2538 =
         *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd12c * 4) == 0) {
      *(uint *)&this_ptr->field_0x2538 = 0;
    }
    *(uint *)&this_ptr->field_0xcde0 = 0x3f99999a;
    if (0.0 < *(float *)&this_ptr->field_0x2538) {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar2 = iVar2 + 0xe;
      if (iVar2 == 0x11) {
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        if (iVar3 != 1) {
          iVar2 = 0xe;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
      if (*(float *)&this_ptr->field_0xd130 <= 0.0) {
        *(uint *)&this_ptr->field_0xd130 = 0x40000000;
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd138);
        if (iVar2 == 0) {
          if (*(int *)&this_ptr->field_0xd0e4 != 0) {
            uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"demn_taunt?_???.wav");
            *(uint *)&this_ptr->field_0xd138 = uVar4;
            core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
            return;
          }
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"demn_taunt_???.wav");
          *(uint *)&this_ptr->field_0xd138 = uVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
          return;
        }
      }
    }
    else {
      *(uint *)&this_ptr->field_0x2538 = 0;
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)&this_ptr->field_0x158);
      if ((*(int *)(pSVar1 + 0x24) != 0x19) && (*(int *)(pSVar1 + 0x24) != 0x18)) {
        unkafter_demnfolk_cpp_FUN_00458180(this_ptr);
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        iVar2 = iVar2 + 0x13;
        if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd12c * 4) == 0) &&
           (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd128 * 4) != 0)) {
          iVar2 = 0x1e;
        }
        iVar3 = _stricmp(&this_ptr->field_0x24a8,"D_SHERIFF.dfm")
        ;
        if (iVar3 == 0) {
          iVar2 = 0x17;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd138);
        if (*(int *)&this_ptr->field_0xd0e4 == 0) {
          pcVar5 = "demn_die_???.wav";
        }
        else {
          pcVar5 = "demn_die_???.wav";
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar5);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  }
  else {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@ShotInvulnerable" + 1);
  }
  return;
}
