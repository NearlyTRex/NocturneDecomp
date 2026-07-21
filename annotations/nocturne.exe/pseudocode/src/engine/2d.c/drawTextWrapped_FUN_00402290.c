// Name: engine_2d.c_drawTextWrapped_FUN_00402290
// Address: 00402290
// Address Range: [[00402290, 00402310]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextWrapped_FUN_00402290(byte *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextWrapped_FUN_00402290(byte *param_1,int param_2,int param_3,int param_4,int param_5)

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
        iVar2 = engine_2d_c_drawCharacter_FUN_00401c40((uint)bVar1,iVar5,param_3);
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
