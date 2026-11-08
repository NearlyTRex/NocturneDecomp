// Name: FUN_00534640
// Address: 00534640
// Address Range: [[00534640, 00534676]]
// Convention: unknown
// Signature: void FUN_00534640(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00534640(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x14c + param_2 * 0x1a4) = param_3;
  if (param_2 != *(int *)(param_1 + 0x15aeb8)) {
    return;
  }
  FUN_00441e80(0x1fc7838,param_3);
  return;
}
