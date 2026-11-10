// Name: core_tawiscar.cpp_CTawiscara_processDamage_FUN_00595f90
// Address: 00595f90
// Address Range: [[00595f90, 005962c2]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscar_cpp_CTawiscara_processDamage_FUN_00595f90(CTawiscara *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tawiscar_cpp_CTawiscara_processDamage_FUN_00595f90(CTawiscara *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1018 [1009];
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd070);
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    unkafter_tawiscar_cpp_FUN_00595710(this_ptr);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
    return;
  }
  if (*(int *)(damage_info + 0x28) == 3) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d9451;
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    iVar4 = 0;
    CStack_30.x = fStack_24;
    *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) = auStack_20[(uint)bVar5 * -2];
    *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_30,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x2540 = 0;
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar2 + 0x24) != 0xd) && (*(int *)(pSVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,0xc,1);
      if ((*(int *)&this_ptr->field_0xd054 == 0) && (g_CDemonSetPtr->last_switch_area_invalid != 0))
      {
        if (*(float *)&this_ptr->field_0x20 <= (float)_DAT_005d9459) {
          if ((double)*(float *)&this_ptr->field_0x20 < _DAT_005d9461) {
            *(uint *)&this_ptr->field_0x34 = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)&this_ptr->field_0x34 = 0xbfc90fdb;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                        (this_ptr,"werewolf-die?.wav");
      *(uint *)&this_ptr->field_0xd078 = uVar3;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
    }
    goto LAB_005960bd;
  }
  if (*(int *)&this_ptr->field_0xd054 != 2) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    iVar4 = *(int *)(pSVar2 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,10,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0xb;
LAB_005961f5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,iVar4,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,0x11,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0x12;
        goto LAB_005961f5;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd078);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                      (this_ptr,"werewolf-hurt?.wav");
    *(uint *)&this_ptr->field_0xd078 = uVar3;
  }
LAB_005960bd:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
