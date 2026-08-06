// Name: engine_2d.c_FUN_004014a0
// Address: 004014a0
// Address Range: [[004014a0, 004014e4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_004014a0(byte *param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl engine_2d_c_FUN_004014a0(byte *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
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
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 1;
      iVar2 = engine_2d_c_FUN_004013d0
                        ((uint)bVar1,param_2,param_3,param_4,unaff_EBP,unaff_EDI,(byte)unaff_ESI);
      param_2 = param_2 + iVar2;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return;
}
