// Name: FUN_00402090
// Address: 00402090
// Address Range: [[00402090, 004020e0]]
// Convention: unknown
// Signature: void FUN_00402090(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00402090(byte *param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  uVar3 = 0xffffffff;
  pbVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  iVar4 = 0;
  if (0 < (int)(~uVar3 - 1)) {
    do {
      bVar1 = *param_1;
      if ((0x1f < bVar1) && (bVar1 < 0x100)) {
        iVar2 = FUN_00401a20((uint)bVar1,param_2,param_3,param_4);
        param_2 = param_2 + iVar2;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return;
}
