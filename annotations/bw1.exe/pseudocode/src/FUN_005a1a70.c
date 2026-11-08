// Name: FUN_005a1a70
// Address: 005a1a70
// Address Range: [[005a1a70, 005a1a8f]]
// Convention: unknown
// Signature: void FUN_005a1a70(int *param_1,int param_2)

#include "nocturne.h"

void FUN_005a1a70(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  param_1[1] = param_2;
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}
