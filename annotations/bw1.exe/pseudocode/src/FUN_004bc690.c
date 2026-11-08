// Name: FUN_004bc690
// Address: 004bc690
// Address Range: [[004bc690, 004bc6e6]]
// Convention: unknown
// Signature: void FUN_004bc690(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004bc690(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  if ((((-1 < param_2) && (-1 < param_3)) && (param_2 < *(int *)(param_1 + 0x94))) &&
     ((param_3 < *(int *)(param_1 + 0x98) &&
      (pbVar1 = (byte *)(param_3 * *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x8c) + param_2),
      (int)(uint)*pbVar1 < param_4)))) {
    *pbVar1 = (byte)param_4;
    *(uint *)(param_1 + 0x96c) = 1;
    return;
  }
  return;
}
