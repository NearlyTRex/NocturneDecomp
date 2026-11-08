// Name: FUN_0050da60
// Address: 0050da60
// Address Range: [[0050da60, 0050dc9c]]
// Convention: unknown
// Signature: void FUN_0050da60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050da60(uint param_1)

{
  int *piVar1;
  int iVar2;
  byte uVar3;
  uint uVar4;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  ushort local_84;
  ushort local_82;
  short local_80;
  short local_7e;
  byte local_47;
  short local_46;
  ushort local_44;
  short local_42;
  short local_40;
  
  if (DAT_005fba20 == 0x10) {
    FUN_0050d6f0(param_1);
    return;
  }
  if (DAT_005fba20 == 0x20) {
    FUN_0050d8b0(param_1);
    return;
  }
  FUN_005a28f0(&local_88,0,0x80);
  local_88 = 10;
  local_87 = 5;
  local_85 = 8;
  local_44 = 1;
  local_80 = (short)DAT_005fba18 + -1;
  local_86 = 1;
  local_47 = 1;
  local_7e = (short)DAT_005fba1c + -1;
  local_84 = 0;
  local_46 = (short)DAT_005fba18;
  local_42 = (short)DAT_005fba18;
  local_82 = 0;
  local_40 = (short)DAT_005fba1c;
  if ((DAT_005fba18 == 0x280) && (DAT_005fba1c == 0xf0)) {
    local_40 = 0x1e0;
    local_7e = 0x1df;
  }
  piVar1 = (int *)FUN_005a43ec(param_1,&DAT_005cba90);
  if (piVar1 == (int *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0xed;
    FUN_004e4330("Cannot write .PCX");
  }
  iVar2 = 0;
  FUN_005a48e0(&local_88,1,0x80,piVar1);
  if (0 < DAT_005fba1c) {
    do {
      FUN_0050d620(iVar2,piVar1);
      if ((DAT_005fba18 == 0x280) && (DAT_005fba1c == 0xf0)) {
        FUN_0050d620(iVar2,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005fba1c);
  }
  if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
    *(byte *)*piVar1 = 0xc;
    if (*(char *)*piVar1 != '\n') {
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
      goto LAB_0050dbce;
    }
    uVar4 = 10;
  }
  else {
    uVar4 = 0xc;
  }
  FUN_005a5d70(uVar4,piVar1);
LAB_0050dbce:
  iVar2 = 0;
  do {
    if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
      *(byte *)*piVar1 = (&DAT_01c6af98)[iVar2];
      if (*(char *)*piVar1 == '\n') {
        uVar3 = 10;
        goto LAB_0050dbe4;
      }
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
    }
    else {
      uVar3 = (&DAT_01c6af98)[iVar2];
LAB_0050dbe4:
      FUN_005a5d70(uVar3,piVar1);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      FUN_005a3a90(piVar1);
      return;
    }
  } while( true );
}
