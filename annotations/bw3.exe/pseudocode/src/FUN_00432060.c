// Name: FUN_00432060
// Address: 00432060
// Address Range: [[00432060, 0043208f]]
// Convention: unknown
// Signature: undefined4 FUN_00432060(int param_1)

#include "nocturne.h"

uint FUN_00432060(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x25b0);
  iVar2 = 0;
  while( true ) {
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    iVar1 = *(int *)(param_1 + 0x2628);
    param_1 = param_1 + 0x78;
  }
  return 0;
}
