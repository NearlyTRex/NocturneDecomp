// Name: core_djien.cpp_CDjien_processDamage_FUN_004613b0
// Address: 004613b0
// Address Range: [[004613b0, 00461521]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_processDamage_FUN_004613b0(CDjien *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_processDamage_FUN_004613b0(CDjien *this_ptr,SDamageInfo *damage_info)

{
  CHero_full_vtable *pCVar1;
  SMotion *pSVar2;
  int iVar3;
  float fVar4;
  CDeformableModelInstance *pCVar5;
  int iVar6;
  
  pCVar5 = &(this_ptr->base).base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar5->base);
  iVar3 = pSVar2->state_index;
  if (this_ptr->is_alert == 0) {
    if ((this_ptr->base).attack_cooldown <= 0.0) {
      pCVar1 = (this_ptr->base).base.base.vtable._uh;
      (this_ptr->base).attack_cooldown = _DAT_005fea28;
      (*(pCVar1->_uh).isWeaponDrawn)((CHero *)this_ptr);
      if (((iVar3 != 0xb) && (iVar3 != 0xc)) && (iVar3 != 0xd)) {
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar5->base,iVar3 + 0xb,iVar6);
        return;
      }
      pCVar5 = &(this_ptr->base).base.model;
      fVar4 = core_motion_cpp_FUN_00525020(&pCVar5->base);
      if ((float)_DAT_005d8ed8 < fVar4) {
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar5->base,iVar3 + 0xb,iVar6);
        return;
      }
    }
  }
  else {
    if (iVar3 == 0x12) {
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(damage_info->attacker,&DAT_005d8e6c);
      if (iVar3 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithPistol");
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(damage_info->attacker,"CRifle");
      if (iVar3 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithRifle");
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(damage_info->attacker,"CLightgun");
      if (iVar3 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"ShotDjienWithLightgun");
      }
    }
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"DjienInvulnerable");
  }
  return;
}
