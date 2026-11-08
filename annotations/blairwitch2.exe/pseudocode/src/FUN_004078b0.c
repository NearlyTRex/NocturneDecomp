// Name: FUN_004078b0
// Address: 004078b0
// Address Range: [[004078b0, 004078e0]]
// Convention: unknown
// Signature: void FUN_004078b0(int *param_1)

#include "nocturne.h"

void FUN_004078b0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    while( true ) {
      iVar1 = *param_1;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      param_1 = (int *)(*(code *)(&PTR_FUN_006093c4)[iVar1])(param_1);
    }
    DAT_006141e0 = 1;
  }
  return;
}
