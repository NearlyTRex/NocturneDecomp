// Name: FUN_0056ed70
// Address: 0056ed70
// Address Range: [[0056ed70, 0056edbc]]
// Convention: unknown
// Signature: void FUN_0056ed70(int param_1,int param_2)

#include "nocturne.h"

void FUN_0056ed70(int param_1,int param_2)

{
  FUN_004096c0(param_1,param_2);
  if ((*(int *)(param_1 + 0x174) == 5) && (*(int *)(param_1 + 0x2f4) == *(int *)(param_2 + 8))) {
    *(uint *)(param_1 + 0x2f0) = 1;
  }
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x48) = 0x3f800000;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return;
}
