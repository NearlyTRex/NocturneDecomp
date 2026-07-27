// Name: core_actor.cpp_FUN_0040db50
// Address: 0040db50
// Address Range: [[0040db50, 0040dd1c]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040db50(int param_1,float *param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040db50(int param_1,float *param_2,int param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  byte local_8c [100];
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = _DAT_01fb860c;
  local_24 = _DAT_01fb8610;
  local_20 = _DAT_01fb8614;
  if (5.8789082188252795e-39._0_4_ <
      (param_2[2] - _DAT_01fb8614) * (param_2[2] - _DAT_01fb8614) +
      (param_2[1] - _DAT_01fb8610) * (param_2[1] - _DAT_01fb8610) +
      (*param_2 - _DAT_01fb860c) * (*param_2 - _DAT_01fb860c)) {
    return 0;
  }
  iVar1 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(0x01E57284,param_2);
  if (iVar1 != 0) {
    param_3 = 6;
  }
  iVar1 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
                    (INT_005b96c4,param_2,param_1 + 0x118);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x114) < 1) {
      if (param_3 == 3) {
        core_gore_cpp_CGore_createFootstep_FUN_004b06b0
                  (INT_005b96c4,param_2,param_1 + 0x30,3,0x4000,0);
      }
      goto LAB_0040dc41;
    }
  }
  else {
    *(uint *)(param_1 + 0x114) = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004b06b0
            (INT_005b96c4,param_2,param_1 + 0x30,0xb,*(uint *)(param_1 + 0x114),
             *(uint *)(param_1 + 0x118));
  iVar1 = *(int *)(param_1 + 0x114) + -0x2000;
  *(int *)(param_1 + 0x114) = iVar1;
  if (iVar1 < 0) {
    *(uint *)(param_1 + 0x114) = 0;
  }
LAB_0040dc41:
  if (param_1 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    switch(param_3) {
    default:
      xxx_unk_c_FUN_004940d0();
      break;
    case 1:
    case 6:
    case 9:
    case 0xb:
      break;
    case 3:
    case 4:
    case 5:
      xxx_unk_c_FUN_004940d0();
      break;
    case 7:
    case 10:
      xxx_unk_c_FUN_004940d0();
    }
  }
  uVar2 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(param_3,(double)param_4);
  _sprintf(local_8c,"footstep-%s-!-%s-?.wav @ %f",param_1 + 0x11c,uVar2);
  uVar2 = core_sound_cpp_CSound_playActorSound_FUN_0052ea60(0x02DC9450,param_1,local_8c,param_2);
  return uVar2;
}
