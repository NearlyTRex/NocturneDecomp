// Name: core_scat.cpp_CScat_processDamage_FUN_0051fb40
// Address: 0051fb40
// Address Range: [[0051fb40, 0051fc8f]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_processDamage_FUN_0051fb40(CScat *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_processDamage_FUN_0051fb40(CScat *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  
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
  fVar1 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x2b4;
  *(float *)&this_ptr->field_0x25a8 = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(damage_info + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
      return;
    }
    iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
    if (iVar2 == 0) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,iVar2,1);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
    return;
  }
  *(uint *)&this_ptr->field_0x25a8 = 0;
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  if (*(int *)(iVar2 + 0x24) != 5) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar2 + 0x24) != 4) {
      *(uint *)&this_ptr->field_0x276c = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"?scat-die-?.wav" + 1);
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
