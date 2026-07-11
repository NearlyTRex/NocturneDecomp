// Name: FUN_0050e490
// Address: 0050e490
// Address Range: [[0050e490, 0050e4bf]]
// Convention: unknown
// Signature: void FUN_0050e490(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0050e490(int param_1,uint param_2)

{
  if (*(int *)(DAT_005ae704 + 0x18) != 0) {
    FUN_004d7720(*(uint *)(param_1 + 0x161268),param_2);
    return;
  }
  FUN_0045f190(DAT_005ae704,param_2);
  return;
}
