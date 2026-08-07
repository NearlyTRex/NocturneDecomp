// Name: core_dlight.cpp_FUN_0044ed50
// Address: 0044ed50
// Address Range: [[0044ed50, 0044ed7c]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044ed50(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_dlight_cpp_FUN_0044ed50(int param_1,int param_2,int param_3)

{
  *(int *)((int)g_ScreenBufferArray[param_2] + param_1 * 4) = param_3 * 0x10101;
  return;
}
