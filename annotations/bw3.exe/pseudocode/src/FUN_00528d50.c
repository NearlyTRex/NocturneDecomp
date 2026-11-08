// Name: FUN_00528d50
// Address: 00528d50
// Address Range: [[00528d50, 00528d98]]
// Convention: unknown
// Signature: void FUN_00528d50(int param_1)

#include "nocturne.h"

void FUN_00528d50(int param_1)

{
  FUN_00482010(param_1 + 0x34);
  FUN_00528da0(param_1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
  }
  *(uint *)(param_1 + 0x20) = 0;
  FUN_00484f10(0x1ed7020);
  return;
}
