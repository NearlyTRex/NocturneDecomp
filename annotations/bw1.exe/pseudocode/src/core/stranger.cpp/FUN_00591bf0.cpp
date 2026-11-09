// Name: core_stranger.cpp_FUN_00591bf0
// Address: 00591bf0
// Address Range: [[00591bf0, 00591c2d]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00591bf0(int param_1,int param_2)

#include "nocturne.h"

void core_stranger_cpp_FUN_00591bf0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1ffac) = param_2;
  if ((param_2 == 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?flashlit.wav" + 1);
    return;
  }
  return;
}
