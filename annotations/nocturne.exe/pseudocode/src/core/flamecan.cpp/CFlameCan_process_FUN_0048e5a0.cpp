// Name: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
// Address: 0048e5a0
// Address Range: [[0048e5a0, 0048e6cd]]
// Convention: unknown
// Signature: void core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(int param_1,float param_2)

{
  int iVar1;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x2d4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2cc) == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(param_1);
    if (*(int *)(param_1 + 0x2cc) == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0(param_1 + 0x338,param_2);
  param_2 = *(float *)(param_1 + 0x2d0) - param_2;
  *(float *)(param_1 + 0x2d0) = param_2;
  if (0.0 < param_2) {
    return;
  }
  FUN_004d9110(0x01CC9450,param_1,1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_40);
  fStack_10 = fStack_34 - local_40;
  fStack_1c = fStack_10 * _DAT_00581657;
  fStack_c = fStack_30 - fStack_3c;
  fStack_8 = fStack_2c - fStack_38;
  fStack_18 = fStack_c * _DAT_00581657;
  fStack_14 = fStack_8 * _DAT_00581657;
  fStack_28 = *(float *)(param_1 + 0x20) + fStack_1c;
  fStack_24 = *(float *)(param_1 + 0x24) + fStack_18;
  fStack_20 = *(float *)(param_1 + 0x28) + fStack_14;
  FUN_0048c0d0(0x01C08D04,param_1 + 0x358,0x41800000,0x44bb8000,0x40800000);
  return;
}
