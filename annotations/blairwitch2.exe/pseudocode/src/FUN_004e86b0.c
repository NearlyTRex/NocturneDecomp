// Name: FUN_004e86b0
// Address: 004e86b0
// Address Range: [[004e86b0, 004e86e8]]
// Convention: unknown
// Signature: int FUN_004e86b0(uint param_1)

#include "nocturne.h"

int FUN_004e86b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (int)param_1 >> 8 & 0xff;
  iVar1 = *(int *)(uVar2 * 4 + 0x1d047b0);
  iVar3 = (*(int *)(uVar2 * 4 + 0x1d047b4) - iVar1) * (param_1 & 0xff);
  iVar4 = iVar3 >> 0x1f;
  return ((int)((iVar3 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8) + iVar1;
}
