// Name: FUN_004076e0
// Address: 004076e0
// Address Range: [[004076e0, 00407714]]
// Convention: unknown
// Signature: void FUN_004076e0(int *param_1)

#include "nocturne.h"

void FUN_004076e0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      param_1 = (int *)(*(code *)(&PTR_FUN_006104f4)[iVar1])(param_1);
    } while (param_1 != (int *)0x0);
    DAT_0061b4c0 = 1;
  }
  return;
}
