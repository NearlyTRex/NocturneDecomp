// Name: core_stranger.cpp_FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056efdd]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056efa0(int param_1,int param_2)

#include "nocturne.h"

void core_stranger_cpp_FUN_0056efa0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x25640) = param_2;
  if ((param_2 == 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"?flashlit.wav" + 1);
    return;
  }
  return;
}
