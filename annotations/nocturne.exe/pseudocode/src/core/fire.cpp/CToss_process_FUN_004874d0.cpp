// Name: core_fire.cpp_CToss_process_FUN_004874d0
// Address: 004874d0
// Address Range: [[004874d0, 0048762b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [12];
  float local_c;
  
  if (0.0 < (float)param_1[0xf7]) {
    local_c = *(float *)(0x01C775EC + 0x264);
    fVar2 = (float)param_1[0xf7];
    pfVar1 = (float *)(param_1 + 0x60);
    param_1[0xf7] = (int)(fVar2 - local_c);
    if (0.0 < fVar2 - local_c) {
      core_box_cpp_CBox_process_FUN_0041acb0(pfVar1,local_c);
      if (*param_1 != 0) {
        return;
      }
      local_30 = _DAT_02dd1184;
      local_2c = _DAT_02dd1188;
      local_28 = _DAT_02dd118c;
      iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 1);
      local_28 = local_28 + *(float *)(iVar3 + 0x34c);
      pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (param_1 + 0x66,local_18,&local_30);
      local_24 = *pfVar1 + *pfVar4;
      local_20 = (float)param_1[0x61] + pfVar4[1];
      local_1c = (float)param_1[0x62] + pfVar4[2];
      if (&local_30 != &local_24) {
        local_30 = local_24;
        local_2c = local_20;
        local_28 = local_1c;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&local_30,0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (*param_1 == 0) {
      core_fire_cpp_FUN_0048c0d0(0x01C08D04,pfVar1,0x41800000,0x42c80000,0x40800000);
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1[0xf8]);
      return;
    }
  }
  return;
}
