// Name: FUN_00413780
// Address: 00413780
// Address Range: [[00413780, 004137b6]]
// Convention: unknown
// Signature: void FUN_00413780(int param_1)

#include "nocturne.h"

void FUN_00413780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040dea0(0x3f000000);
  if (iVar1 != 0) {
    FUN_004e16b0(param_1 + 0x150,1,1);
    return;
  }
  FUN_004e16b0(param_1 + 0x150,2,1);
  return;
}
