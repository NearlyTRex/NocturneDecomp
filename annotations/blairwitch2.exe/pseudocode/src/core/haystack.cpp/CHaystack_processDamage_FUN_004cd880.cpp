// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004cd880
// Address: 004cd880
// Address Range: [[004cd880, 004cd99e]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004cd880(CHaystack *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004cd880(CHaystack *this_ptr,SDamageInfo *damage_info)

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
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar2 + 0x24) != 9) {
      iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar2 + 0x24) != 8) {
        *(uint *)&this_ptr->field_0x276c = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if (this_ptr->guns_drawn == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,iVar2,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
