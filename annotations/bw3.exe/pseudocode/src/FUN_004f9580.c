// Name: FUN_004f9580
// Address: 004f9580
// Address Range: [[004f9580, 004f95f6]]
// Convention: unknown
// Signature: void FUN_004f9580(int *param_1)

#include "nocturne.h"

void FUN_004f9580(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_0040d400(0x1d883a8);
    iVar1 = 0x1d883bc;
    FUN_0040d400(0x1d88614);
    do {
      FUN_0040d400(iVar1);
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != 0x1d88614);
    *param_1 = 0;
  }
  FUN_00460e10(param_1 + 2);
  FUN_00460e10(param_1 + 0xe8);
  FUN_00460e10(param_1 + 0x1ce);
  return;
}
