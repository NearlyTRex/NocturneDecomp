// Name: core_pendulum.cpp_CPendulum_setup_FUN_004f2d40
// Address: 004f2d40
// Address Range: [[004f2d40, 004f2e59]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_setup_FUN_004f2d40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_pendulum_cpp_CPendulum_setup_FUN_004f2d40(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  byte local_34 [36];
  float afStack_10 [3];
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_34);
  if (&fStack_4c != pfVar3) {
    fStack_4c = *pfVar3;
    fStack_48 = pfVar3[1];
    fStack_44 = pfVar3[2];
  }
  if (&fStack_40 != pfVar3 + 3) {
    fStack_40 = pfVar3[3];
    fStack_3c = pfVar3[4];
    fStack_38 = pfVar3[5];
  }
  *(float *)(param_1 + 0x39c) =
       SQRT((fStack_3c - fStack_48) * (float)_DAT_0058d008) * (float)_DAT_0058d010;
  fVar1 = (fStack_48 + fStack_3c) * _DAT_0058d018;
  fVar2 = (fStack_44 + fStack_38) * _DAT_0058d018;
  if ((float *)(param_1 + 0x408) == afStack_10) {
    *(float *)(param_1 + 0x40c) = fStack_48;
    return;
  }
  *(float *)(param_1 + 0x408) = (fStack_4c + fStack_40) * _DAT_0058d018;
  *(float *)(param_1 + 0x40c) = fVar1;
  *(float *)(param_1 + 0x410) = fVar2;
  *(float *)(param_1 + 0x40c) = fStack_48;
  return;
}
