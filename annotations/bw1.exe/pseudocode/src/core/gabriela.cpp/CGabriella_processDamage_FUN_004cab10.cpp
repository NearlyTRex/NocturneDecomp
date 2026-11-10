// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004cab10
// Address: 004cab10
// Address Range: [[004cab10, 004cad10]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004cab10(CGabriella *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004cab10(CGabriella *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  
  if ((*(uint *)&this_ptr->field_0xc1d0 & 0x7fffffff) != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  *(uint *)&this_ptr->field_0xc1d0 = 0x3F000000;
  fVar2 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar2;
  if (0.0 < fVar2) {
    if (0.0 < *(float *)(damage_info + 4)) {
      if (*(int *)&this_ptr->field_0x1ff84 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,8,1);
      }
      if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
        iVar3 = *(int *)&this_ptr->field_0x154;
        fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.25,0.4);
        (**(code **)(iVar3 + 0x34))(this_ptr,"gb-hit[1,6].wav",fVar2);
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr_00);
    if (*(int *)(pSVar1 + 0x24) != 0xc) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr_00);
      if (*(int *)(pSVar1 + 0x24) != 0xb) {
        iVar3 = 1;
        *(uint *)&this_ptr->field_0x26fc = 0;
        fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,(fVar2 <= _DAT_005e122c) + 9,iVar3);
        if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
          iVar3 = *(int *)&this_ptr->field_0x154;
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.25,0.4);
          (**(code **)(iVar3 + 0x34))(this_ptr,"gb-die[1,6].wav",fVar2);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (*(float *)(damage_info + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
    return;
  }
  core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(g_CGamePtr);
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
