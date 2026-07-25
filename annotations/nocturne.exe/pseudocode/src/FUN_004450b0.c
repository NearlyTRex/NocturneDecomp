// Name: FUN_004450b0
// Address: 004450b0
// Address Range: [[004450b0, 0044519b]]
// Convention: unknown
// Signature: bool FUN_004450b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004450b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (_DAT_014b845c == 0) {
    bVar7 = true;
  }
  else {
    if (param_3 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = (int)(0x7fffffff / (longlong)param_3);
    }
    iVar4 = _DAT_014b8468 - iVar1;
    iVar5 = iVar4 >> 0x1f;
    iVar6 = param_2 << 8;
    iVar3 = param_1 << 8;
    iVar2 = 0x10;
    do {
      if (*(int *)((iVar6 >> 8) * 0x500 + 0xac2af8 + (iVar3 >> 8) * 4) < iVar1 + -0x80) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + ((int)((iVar4 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4);
      iVar3 = iVar3 + (_DAT_014b8460 - param_1) * 0x10;
      iVar6 = iVar6 + (_DAT_014b8464 - param_2) * 0x10;
    } while (0 < iVar2);
    bVar7 = iVar2 == 0;
  }
  return bVar7;
}
