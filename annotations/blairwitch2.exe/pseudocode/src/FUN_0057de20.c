// Name: FUN_0057de20
// Address: 0057de20
// Address Range: [[0057de20, 0057de3f]]
// Convention: unknown
// Signature: void FUN_0057de20(int *param_1,int param_2)

#include "nocturne.h"

void FUN_0057de20(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  param_1[1] = param_2;
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}
