// Name: engine_2d.c_drawString_FUN_004026b0
// Address: 004026b0
// Address Range: [[004026b0, 00402700]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawString_FUN_004026b0(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl engine_2d_c_drawString_FUN_004026b0(byte *param_1,int param_2,uint param_3,uint param_4)

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
        iVar2 = engine_2d_c_drawCharacterMaskedColor_FUN_00402040
                          ((uint)bVar1,param_2,param_3,param_4);
        param_2 = param_2 + iVar2;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return;
}
