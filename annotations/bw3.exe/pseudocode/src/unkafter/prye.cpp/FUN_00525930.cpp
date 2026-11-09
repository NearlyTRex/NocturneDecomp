// Name: unkafter_prye.cpp_FUN_00525930
// Address: 00525930
// Address Range: [[00525930, 005259b4]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00525930(int param_1)

#include "nocturne.h"

void unkafter_prye_cpp_FUN_00525930(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20b64) == 0) {
    if (*(int *)(param_1 + 0xcde0) == 0) {
      if (*(int *)(param_1 + 0xcde4) == 0) {
        return;
      }
    }
    else {
      iVar1 = unkafter_prye_cpp_FUN_005262f0(param_1);
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0xcde4) == 0) {
        return;
      }
    }
    iVar1 = core_hero_cpp_FUN_004d4900(param_1,0);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x158))(param_1);
      return;
    }
    iVar1 = core_prye_cpp_FUN_00521880(param_1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xcde0) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x20bcc) == 0) {
      *(uint *)(param_1 + 0xcde0) = 0;
      return;
    }
  }
  return;
}
