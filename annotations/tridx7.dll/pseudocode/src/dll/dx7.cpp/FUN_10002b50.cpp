// Name: dll_dx7.cpp_FUN_10002b50
// Address: 10002b50
// Address Range: [[10002b50, 10002ba0]]
// Convention: unknown
// Signature: undefined4 dll_dx7_cpp_FUN_10002b50(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

uint dll_dx7_cpp_FUN_10002b50(uint *param_1,uint *param_2)

{
  int iVar1;
  
  if (param_1[1] == 0x400) {
    if (g_ScreenBitDepth != 0x20) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *param_1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      return 0;
    }
    if ((uint)param_2[3] < (uint)param_1[3]) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *param_1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
  }
  return 1;
}
