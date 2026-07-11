// Name: FUN_004294f0
// Address: 004294f0
// Address Range: [[004294f0, 0042951f]]
// Convention: unknown
// Signature: undefined4 FUN_004294f0(int param_1)

#include "nocturne.h"

uint FUN_004294f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24ac);
  iVar2 = 0;
  while( true ) {
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    iVar1 = *(int *)(param_1 + 0x24f0);
    param_1 = param_1 + 0x44;
  }
  return 0;
}
