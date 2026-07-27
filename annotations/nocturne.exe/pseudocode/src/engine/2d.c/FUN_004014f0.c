// Name: engine_2d.c_FUN_004014f0
// Address: 004014f0
// Address Range: [[004014f0, 00401525]]
// Convention: unknown
// Signature: int engine_2d_c_FUN_004014f0(byte *param_1)

#include "nocturne.h"

int engine_2d_c_FUN_004014f0(byte *param_1)

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
    pbVar3 = pbVar3 + 1;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + *(int *)(&DAT_006afa3c + (uint)bVar1 * 4);
  } while( true );
}
