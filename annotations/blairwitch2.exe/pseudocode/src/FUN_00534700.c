// Name: FUN_00534700
// Address: 00534700
// Address Range: [[00534700, 00534716]]
// Convention: unknown
// Signature: void FUN_00534700(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00534700(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a4 + param_1 + 0x1a4) = param_3;
  return;
}
