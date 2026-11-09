// Name: support_trisock.cpp_FUN_0059de30
// Address: 0059de30
// Address Range: [[0059de30, 0059de8a]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_0059de30(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint support_trisock_cpp_FUN_0059de30(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x3bc) == 1) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  if (*(int *)(param_1 + 0x3bc) == 2) {
    puVar2 = (uint *)(param_1 + 0x104);
    for (iVar1 = 0xae; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      param_2 = param_2 + (uint)bVar3 * -2 + 1;
    }
    return *(uint *)(param_1 + 0x3bc);
  }
  memset(param_2,0,0x2b8);
  return *(uint *)(param_1 + 0x3bc);
}
