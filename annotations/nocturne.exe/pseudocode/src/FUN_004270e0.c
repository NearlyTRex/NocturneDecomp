// Name: FUN_004270e0
// Address: 004270e0
// Address Range: [[004270e0, 0042725f]]
// Convention: unknown
// Signature: void FUN_004270e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004270e0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte local_1aac [6816];
  
  FUN_00461000(DAT_005ae704,1);
  FUN_00461010(DAT_005ae704,0xc000);
  if (param_1 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    fVar4 = (float10)DAT_007658dc +
            (float10)*(float *)(0x01C775EC + 0x264) * (float10)_DAT_0057a00a;
    FUN_00563a30();
    DAT_007658dc = (int)ROUND(fVar4);
  }
  iVar2 = FUN_0056488c();
  _DAT_007658e0 = iVar2 % 6;
  DAT_005ae704[8] = 1;
  FUN_00545920(&DAT_005ad140 + (iVar2 % 6) * 0x18);
  iVar2 = param_1 + 0x150;
  FUN_0051ed90(iVar2,local_1aac);
  FUN_0051d970(iVar2,0x3f8ccccd,0xffffffff);
  FUN_0051d3c0(iVar2);
  uVar3 = FUN_0051e020(iVar2,param_1 + 0x2388);
  uVar3 = FUN_0051a700(uVar3);
  FUN_0051dad0(iVar2,uVar3);
  FUN_0051f080(iVar2,DAT_007658dc,0);
  iVar2 = 0;
  do {
    piVar1 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*piVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*piVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  FUN_0051dbc0(param_1 + 0x150,0x267,1);
  DAT_005ae704[8] = 0;
  FUN_0051ee60(param_1 + 0x150,local_1aac);
  FUN_00461000(DAT_005ae704,0);
  return;
}
