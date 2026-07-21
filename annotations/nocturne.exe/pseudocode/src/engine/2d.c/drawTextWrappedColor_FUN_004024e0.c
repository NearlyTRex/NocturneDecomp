// Name: engine_2d.c_drawTextWrappedColor_FUN_004024e0
// Address: 004024e0
// Address Range: [[004024e0, 00402565]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextWrappedColor_FUN_004024e0(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  uVar3 = 0xffffffff;
  pbVar7 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  iVar4 = 0;
  iVar5 = param_2;
  if (0 < (int)(~uVar3 - 1)) {
    do {
      if ((*param_1 == 10) && (param_3 = param_3 + 0xb, iVar5 = param_2, param_5 < param_3)) {
        return;
      }
      bVar1 = *param_1;
      iVar6 = iVar5;
      if ((0x1f < bVar1) && (bVar1 < 0x100)) {
        iVar2 = engine_2d_c_drawCharacterMaskedColor_FUN_00402040((uint)bVar1,iVar5,param_3,param_6)
        ;
        iVar6 = iVar5 + iVar2;
        if ((param_4 < iVar5 + iVar2) &&
           (param_3 = param_3 + 0xb, iVar6 = param_2, param_5 < param_3)) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      iVar5 = iVar6;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return;
}
