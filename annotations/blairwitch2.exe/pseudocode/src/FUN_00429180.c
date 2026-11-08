// Name: FUN_00429180
// Address: 00429180
// Address Range: [[00429180, 004291af]]
// Convention: unknown
// Signature: undefined4 FUN_00429180(int param_1)

#include "nocturne.h"

uint FUN_00429180(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2620);
  iVar2 = 0;
  while( true ) {
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    iVar1 = *(int *)(param_1 + 0x2698);
    param_1 = param_1 + 0x78;
  }
  return 0;
}
