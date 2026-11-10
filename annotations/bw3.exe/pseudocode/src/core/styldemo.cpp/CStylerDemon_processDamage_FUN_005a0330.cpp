// Name: core_styldemo.cpp_CStylerDemon_processDamage_FUN_005a0330
// Address: 005a0330
// Address Range: [[005a0330, 005a0468]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_processDamage_FUN_005a0330(CStylerDemon *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styldemo_cpp_CStylerDemon_processDamage_FUN_005a0330(CStylerDemon *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd054);
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= (float)_DAT_005da536) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    *(uint *)&this_ptr->field_0x2540 = 0;
    if ((*(int *)(damage_info + 0x30) == 0x6f) &&
       (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"exorcism_death"), iVar2 == 0)) {
      core_event_cpp_FUN_004946f0(0x01C6E360,"exorcism_death",1);
    }
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 == 5) || (iVar2 == 6)) || (iVar2 == 0xe)) || (iVar2 == 0xf)) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)&this_ptr->field_0x158);
      iVar2 = *(int *)(pSVar3 + 0x24);
      if (((iVar2 == 0x12) || (iVar2 == 0xb)) || ((iVar2 == 0x14 || (iVar2 == 0x16)))) {
        iVar2 = 0xd;
      }
      else {
        iVar4 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
        if (iVar4 == 0) goto LAB_005a03d3;
        if ((iVar2 < 7) || (iVar2 == 8)) {
          iVar2 = 4;
        }
        else {
          iVar2 = 0xd;
        }
      }
    }
    else if (iVar2 < 7) {
      iVar2 = 5;
    }
    else {
      iVar2 = 0xe;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
  }
LAB_005a03d3:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
