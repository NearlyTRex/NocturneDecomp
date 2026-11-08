// Name: FUN_00502450
// Address: 00502450
// Address Range: [[00502450, 0050249e]]
// Convention: unknown
// Signature: void FUN_00502450(int *param_1)

#include "nocturne.h"

void FUN_00502450(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_0040d540(0x1d1c7b8);
  iVar1 = 0x1d1c7cc;
  FUN_0040d540(0x1d1cda8);
  do {
    FUN_0040d540(iVar1);
    iVar1 = iVar1 + 0x14;
  } while (iVar1 != 0x1d1cda8);
  *param_1 = 0;
  return;
}
