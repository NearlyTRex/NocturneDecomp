// Name: FUN_00574a60
// Address: 00574a60
// Address Range: [[00574a60, 00574a7f]]
// Convention: unknown
// Signature: void FUN_00574a60(int *param_1,int param_2)

#include "nocturne.h"

void FUN_00574a60(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  param_1[1] = param_2;
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}
