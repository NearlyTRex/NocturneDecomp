// Name: FUN_005558f0
// Address: 005558f0
// Address Range: [[005558f0, 00555926]]
// Convention: unknown
// Signature: void FUN_005558f0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005558f0(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x14c + param_2 * 0x1a4) = param_3;
  if (param_2 != *(int *)(param_1 + 0x15aeb8)) {
    return;
  }
  FUN_00453540(0x1fe37ec,param_3);
  return;
}
