// Name: core_dcamera.cpp_FUN_004425d0
// Address: 004425d0
// Address Range: [[004425d0, 004425ed]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004425d0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void core_dcamera_cpp_FUN_004425d0(uint param_1,int param_2,int param_3)

{
  *(byte *)(*(int *)(&DAT_01bd2fa0 + param_3 * 4) + param_2) =
       g_LightTable[4][*(byte *)(*(int *)(&DAT_01bd2fa0 + param_3 * 4) + param_2)];
  return;
}
