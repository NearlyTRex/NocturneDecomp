// Name: FUN_00414780
// Address: 00414780
// Address Range: [[00414780, 004147a8]]
// Convention: unknown
// Signature: void FUN_00414780(int param_1)

#include "nocturne.h"

void FUN_00414780(int param_1)

{
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x430) = 0;
  return;
}
