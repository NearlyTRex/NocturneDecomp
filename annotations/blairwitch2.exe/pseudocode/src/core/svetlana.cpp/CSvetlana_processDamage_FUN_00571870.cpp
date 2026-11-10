// Name: core_svetlana.cpp_CSvetlana_processDamage_FUN_00571870
// Address: 00571870
// Address Range: [[00571870, 005719fa]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_00571870(CSvetlana *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_00571870(CSvetlana *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)&this_ptr->field_0x10a60 & 0x7fffffff) != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  *(uint *)&this_ptr->field_0x10a60 = 0x40400000;
  fVar1 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x2b4;
  *(float *)&this_ptr->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)&this_ptr->field_0x276c = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
        uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                          (this_ptr,"svet-die.wav");
        this_ptr->sfx_handle = uVar2;
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(damage_info + 4)) {
    if (this_ptr->blades_drawn == 0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,iVar3,1);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                        (this_ptr,"svet-hurt?.wav");
      this_ptr->sfx_handle = uVar2;
      core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
