// Name: core_icepick.cpp_FUN_004d6370
// Address: 004d6370
// Address Range: [[004d6370, 004d651d]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d6370(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_icepick_cpp_FUN_004d6370(CCharacter *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x4188);
  if ((*(uint *)(param_1 + 1) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 1) = 0x40400000;
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)&param_1->field_0x276c = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,8,1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
        core_gore_cpp_FUN_004c9cc0(g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x418c);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)&param_1[2].field_0x4180 == 0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,iVar3,1);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[2].field_0x418c);
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                        (param_1,"icepick_injured??.wav");
      *(uint *)&param_1[2].field_0x418c = uVar2;
      core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  return;
}
