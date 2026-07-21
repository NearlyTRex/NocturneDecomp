// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0
// Address: 0041e5e0
// Address Range: [[0041e5e0, 0041e9fd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float10 fVar4;
  float fVar5;
  byte auStack_e0 [4];
  float fStack_dc;
  int iStack_ac;
  int iStack_a8;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  byte auStack_44 [12];
  float fStack_38;
  float local_34;
  float local_30;
  ulonglong local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530();
  iVar1 = *(int *)(iVar1 + 0x100);
  fVar5 = *(float *)(param_1 + 0x304) + *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x308) = fVar5;
  local_28 = (double)floor((double)fVar5);
  fVar4 = (float10)round((float10)local_28);
  local_20 = (int)ROUND(fVar4);
  local_28._4_4_ = *(float *)(param_1 + 0x308) - (float)local_20;
  if (local_20 < 0) {
    local_20 = iVar1 - -local_20 % iVar1;
  }
  else {
    local_20 = local_20 % iVar1;
  }
  local_1c = local_20;
  *(float *)(param_1 + 0x308) = (float)local_20 + local_28._4_4_;
  if ((float)iVar1 <= *(float *)(param_1 + 0x308)) {
    *(uint *)(param_1 + 0x308) = 0;
  }
  fStack_38 = *(float *)(param_1 + 0x2f8) * param_2;
  local_34 = *(float *)(param_1 + 0x2fc) * param_2;
  fStack_8c = fStack_38 * _DAT_0057980d;
  local_30 = *(float *)(param_1 + 0x300) * param_2;
  local_88 = local_34 * _DAT_0057980d;
  local_84 = local_30 * _DAT_0057980d;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_8c;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_88;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + local_84;
  local_18 = (float)iVar1;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(param_1 + 0x30));
  *(float *)(param_1 + 0x30) = local_18;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(param_1 + 0x38));
  *(float *)(param_1 + 0x38) = local_18;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) = local_18;
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0();
    if (iVar1 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000,2);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_18);
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))();
      *(uint *)(param_1 + 0x2f4) = uVar2;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  if ((*(int *)(param_1 + 0x310) == 0) && (0.0 < *(float *)(param_1 + 0x388))) {
    uStack_74 = *(uint *)(param_1 + 0x20);
    local_70 = *(uint *)(param_1 + 0x24);
    local_6c = *(uint *)(param_1 + 0x28);
    core_box_cpp_CBox_process_FUN_0041acb0();
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x398)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x398);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x39c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3a0);
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))();
    fStack_50 = *pfVar3 + pfVar3[3];
    fStack_4c = pfVar3[1] + pfVar3[4];
    local_68 = fStack_50 * _DAT_00579811;
    fStack_48 = pfVar3[2] + pfVar3[5];
    fStack_64 = fStack_4c * _DAT_00579811;
    fStack_60 = fStack_48 * _DAT_00579811;
    local_80 = -local_68;
    fStack_7c = -fStack_64;
    fStack_78 = -fStack_60;
    pfVar3 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,auStack_44,&local_80);
    fStack_5c = *(float *)(param_1 + 0x38c) + *pfVar3;
    fStack_58 = *(float *)(param_1 + 0x390) + pfVar3[1];
    fStack_54 = *(float *)(param_1 + 0x394) + pfVar3[2];
    *(float *)(param_1 + 0x20) = fStack_5c;
    *(float *)(param_1 + 0x24) = fStack_58;
    *(float *)(param_1 + 0x28) = fStack_54;
    fVar5 = SQRT(*(float *)(param_1 + 0x3d4) * *(float *)(param_1 + 0x3d4) +
                 *(float *)(param_1 + 0x3cc) * *(float *)(param_1 + 0x3cc) +
                 *(float *)(param_1 + 0x3d0) * *(float *)(param_1 + 0x3d0));
    if ((float)_DAT_00579815 < fVar5) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_e0,fVar5);
      fStack_dc = fVar5 * *(float *)(param_1 + 0x388) * _DAT_0057981d;
      iStack_ac = param_1;
      iStack_a8 = param_1;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                (0x01E57284,&uStack_74,(float *)(param_1 + 0x20),auStack_e0);
      return;
    }
  }
  return;
}
