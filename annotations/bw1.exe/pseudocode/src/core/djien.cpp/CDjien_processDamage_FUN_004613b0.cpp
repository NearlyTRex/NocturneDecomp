// Name: core_djien.cpp_CDjien_processDamage_FUN_004613b0
// Address: 004613b0
// Address Range: [[004613b0, 00461521]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_processDamage_FUN_004613b0(CDjien *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_processDamage_FUN_004613b0(CDjien *this_ptr,SDamageInfo *damage_info)

{
  SMotion *pSVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar2 = *(int *)(pSVar1 + 0x24);
  if (*(int *)&this_ptr->field_0xc9c0 == 0) {
    if (*(float *)&this_ptr->field_0xc1e4 <= 0.0) {
      *(uint *)&this_ptr->field_0xc1e4 = _DAT_005fea28;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,damage_info);
      if (((iVar2 != 0xb) && (iVar2 != 0xc)) && (iVar2 != 0xd)) {
        iVar4 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0xb,iVar4);
        return;
      }
      fVar3 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if ((float)_DAT_005d8ed8 < fVar3) {
        iVar4 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,iVar2 + 0xb,iVar4);
        return;
      }
    }
  }
  else {
    if (iVar2 == 0x12) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                        (*(CDemonActor **)(damage_info + 0x34),&DAT_005d8e6c);
      if (iVar2 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithPistol");
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                        (*(CDemonActor **)(damage_info + 0x34),"CRifle");
      if (iVar2 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithRifle");
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                        (*(CDemonActor **)(damage_info + 0x34),"CLightgun");
      if (iVar2 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithLightgun");
      }
    }
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"DjienInvulnerable");
  }
  return;
}
