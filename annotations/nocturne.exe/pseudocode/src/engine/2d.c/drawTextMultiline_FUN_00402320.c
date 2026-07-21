// Name: engine_2d.c_drawTextMultiline_FUN_00402320
// Address: 00402320
// Address Range: [[00402320, 004023aa]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextMultiline_FUN_00402320(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextMultiline_FUN_00402320(byte *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  uVar2 = 0xffffffff;
  pbVar5 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  iVar6 = 0;
  iVar4 = param_2;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      if ((*param_1 == 10) && (param_3 = param_3 + 0xb, iVar4 = param_2, param_5 < param_3)) {
        return;
      }
      uVar3 = (uint)*param_1;
      if ((0x1f < *param_1) && (uVar3 < 0x100)) {
        engine_2d_c_drawCharacter_FUN_00401c40(uVar3,iVar4,param_3);
        iVar4 = iVar4 + (byte)(&DAT_005a4b80)[(uVar3 - 0x20) * 0x91] + 1;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 1;
    } while (iVar6 < (int)(~uVar2 - 1));
  }
  return;
}
