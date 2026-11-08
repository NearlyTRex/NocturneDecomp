// Name: FUN_004018b0
// Address: 004018b0
// Address Range: [[004018b0, 00401901]]
// Convention: unknown
// Signature: int FUN_004018b0(byte *param_1)

#include "nocturne.h"

int FUN_004018b0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar4 = 0;
  iVar5 = 0;
  pbVar3 = param_1;
  do {
    uVar2 = 0xffffffff;
    pbVar6 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    if (~uVar2 - 1 <= uVar4) {
      return iVar5;
    }
    bVar1 = *pbVar3;
    if ((0x1f < bVar1) && (bVar1 < 0x100)) {
      iVar5 = iVar5 + (byte)(&DAT_005e8840)[(bVar1 - 0x20) * 0x91] + 1;
    }
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while( true );
}
