// Name: FUN_005bad20
// Address: 005bad20
// Address Range: [[005bad20, 005bad76]]
// Convention: unknown
// Signature: int FUN_005bad20(byte *param_1)

#include "nocturne.h"

int FUN_005bad20(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while (((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  bVar1 = *param_1;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    param_1 = param_1 + 1;
  }
  iVar3 = 0;
  while (((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 0x20) != 0) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  if (bVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}
