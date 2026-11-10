// Name: core_gabriela.cpp_CGabriella_processDamage_FUN_004b1bf0
// Address: 004b1bf0
// Address Range: [[004b1bf0, 004b1df0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004b1bf0(CGabriella *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004b1bf0(CGabriella *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  int iVar1;
  float fVar2;
  
  if ((*(uint *)&this_ptr->field_0x10a60 & 0x7fffffff) != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  *(uint *)&this_ptr->field_0x10a60 = 0x3F000000;
  fVar2 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x2b4;
  *(float *)&this_ptr->field_0x25a8 = fVar2;
  if (0.0 < fVar2) {
    if (0.0 < *(float *)(damage_info + 4)) {
      if (*(int *)&this_ptr->field_0x25614 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,8,1);
      }
      if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
        iVar1 = *(int *)&this_ptr->field_0x2b0;
        fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.25,0.4);
        (**(code **)(iVar1 + 0x3c))(this_ptr,"gb-hit[1,6].wav",fVar2);
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x25a8 = 0;
    iVar1 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar1 + 0x24) != 0xc) {
      iVar1 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar1 + 0x24) != 0xb) {
        iVar1 = 1;
        *(uint *)&this_ptr->field_0x276c = 0;
        fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,(fVar2 <= _DAT_005d71b3) + 9,iVar1);
        if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
          iVar1 = *(int *)&this_ptr->field_0x2b0;
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.25,0.4);
          (**(code **)(iVar1 + 0x3c))(this_ptr,"gb-die[1,6].wav",fVar2);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (*(float *)(damage_info + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
    return;
  }
  core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(g_CGamePtr);
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
