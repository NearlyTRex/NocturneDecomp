// Name: core_boxactor.cpp_FUN_0041f6e0
// Address: 0041f6e0
// Address Range: [[0041f6e0, 0041f9ed]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041f6e0(int param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041f6e0(int param_1)

{
  CKeyFramedModelInstance *this_ptr;
  uint uVar1;
  float fVar2;
  int iVar3;
  CDemonFilter *this_ptr_00;
  char acStack_d0 [40];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  uVar1 = *(uint *)(param_1 + 0x664);
  if (uVar1 != 0) {
    local_18 = param_1 + 0x668;
    this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x150);
    if (uVar1 < 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                (this_ptr,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(this_ptr);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_90);
      fVar2 = 0.5f;
      *(float *)(param_1 + 0x3614) = (local_90 + fStack_84) * 0.5f;
      *(float *)(param_1 + 0x3618) = (fStack_8c + fStack_80) * fVar2;
      *(float *)(param_1 + 0x361c) = fStack_7c + (float)0.10000000000000001;
      *(uint *)(param_1 + 0x3628) = 0;
      *(uint *)(param_1 + 0x3624) = *(uint *)(param_1 + 0x3628);
      *(uint *)(param_1 + 0x3620) = *(uint *)(param_1 + 0x3624);
      *(uint *)(param_1 + 0x231c) = 0;
      *(uint *)(local_18 + 0x138) = 0x42600000;
      *(uint *)(param_1 + 0x768) = 0x42000000;
      *(uint *)(param_1 + 0x30c) = 3;
      return;
    }
    if (uVar1 == 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                (this_ptr,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(this_ptr);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_a8);
      fStack_4c = 0.5f;
      fStack_48 = local_a8 + fStack_9c;
      fStack_3c = fStack_48 * 0.5f;
      fStack_44 = fStack_a4 + fStack_98;
      fStack_40 = fStack_a0 + fStack_94;
      fStack_38 = fStack_44 * 0.5f;
      fStack_34 = fStack_40 * 0.5f;
      *(float *)(param_1 + 0x3614) = fStack_3c;
      fStack_6c = local_a8 + fStack_9c;
      fStack_54 = fStack_6c * fStack_4c;
      fStack_68 = fStack_a4 + fStack_98;
      fStack_64 = fStack_a0 + fStack_94;
      fStack_50 = fStack_68 * fStack_4c;
      fStack_4c = fStack_64 * fStack_4c;
      *(float *)(param_1 + 0x3618) = fStack_50;
      *(float *)(param_1 + 0x361c) = fStack_94;
      *(uint *)(param_1 + 0x3628) = 0;
      *(uint *)(param_1 + 0x3624) = *(uint *)(param_1 + 0x3628);
      *(uint *)(param_1 + 0x3620) = *(uint *)(param_1 + 0x3624);
      *(uint *)(param_1 + 0x3620) = 0x3e860a92;
      *(uint *)(param_1 + 0x231c) = 0;
      *(uint *)(local_18 + 0x138) = 0x42600000;
      *(uint *)(param_1 + 0x768) = 0x42000000;
      iVar3 = DAT_007647fc;
      *(uint *)(param_1 + 0x30c) = 3;
      if (iVar3 == 0) {
        this_ptr_00 = (CDemonFilter *)&DAT_0076483c;
        iVar3 = 0;
        do {
          _sprintf(acStack_d0,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(this_ptr_00,acStack_d0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar3 < 8);
        DAT_007647fc = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
                ((CDemonLight *)(param_1 + 0x668),(CDemonFilter *)&DAT_0076483c,0,0,0);
      return;
    }
  }
  return;
}
