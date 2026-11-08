// Name: FUN_00484170
// Address: 00484170
// Address Range: [[00484170, 0048417e]]
// Convention: unknown
// Signature: void FUN_00484170(int param_1,int param_2)

#include "nocturne.h"

void FUN_00484170(int param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = param_2 << 0x18;
  return;
}
