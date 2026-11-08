// Name: FUN_00521d50
// Address: 00521d50
// Address Range: [[00521d50, 00521dc6]]
// Convention: unknown
// Signature: void FUN_00521d50(int *param_1)

#include "nocturne.h"

void FUN_00521d50(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_0040d1c0(0x1d33ce4);
    iVar1 = 0x1d33cf8;
    FUN_0040d1c0(0x1d33f50);
    do {
      FUN_0040d1c0(iVar1);
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != 0x1d33f50);
    *param_1 = 0;
  }
  FUN_00467160(param_1 + 2);
  FUN_00467160(param_1 + 0xe8);
  FUN_00467160(param_1 + 0x1ce);
  return;
}
