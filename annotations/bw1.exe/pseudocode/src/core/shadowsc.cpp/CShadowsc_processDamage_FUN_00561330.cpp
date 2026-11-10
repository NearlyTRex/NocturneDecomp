// Name: core_shadowsc.cpp_CShadowsc_processDamage_FUN_00561330
// Address: 00561330
// Address Range: [[00561330, 00561454]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_processDamage_FUN_00561330(CShadowsc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_processDamage_FUN_00561330(CShadowsc *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (*(int *)&this_ptr->field_0xc28c == 0) {
    iVar1 = *(int *)(damage_info + 0x30);
    if (((((iVar1 == 100) || (iVar1 == 0x65)) || (iVar1 == 0x66)) ||
        ((iVar1 == 0x67 || (iVar1 == 0x68)))) ||
       ((iVar1 == 0x69 || ((iVar1 == 0x6a || (iVar1 == 0x6b)))))) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ShotShadowWithLead");
      *(uint *)(damage_info + 4) = 0;
      return;
    }
    if (iVar1 == 0x6c) {
      core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    }
    fVar2 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    *(float *)&this_ptr->field_0x2538 = fVar2;
    if (0.0 < fVar2) {
      core_shadowsc_cpp_FUN_00561060(this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
      return;
    }
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    if ((*(int *)(pSVar3 + 0x24) != 7) && (*(int *)(pSVar3 + 0x24) != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,6,1);
      core_shadowsc_cpp_FUN_005610a0(this_ptr);
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
  }
  return;
}
