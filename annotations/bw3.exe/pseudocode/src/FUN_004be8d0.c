// Name: FUN_004be8d0
// Address: 004be8d0
// Address Range: [[004be8d0, 004beb7c]]
// Convention: unknown
// Signature: void FUN_004be8d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be8d0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_320 [516];
  char local_11c [260];
  uint local_18;
  uint local_14;
  
  iVar3 = FUN_004659c0(&DAT_005c37de,"blairhero.pod",&DAT_005c37cd);
  if (iVar3 != 0) {
    FUN_005a3a90(iVar3);
  }
  *(uint *)(param_1 + 0x274) = 0;
  *(uint *)(param_1 + 0x27c) = 0;
  *(uint *)(param_1 + 0x270) = 0;
  *(uint *)(param_1 + 0x278) = 0;
  *(uint *)(param_1 + 0x294) = 0xbf800000;
  FUN_004c4d10(param_1);
  uVar2 = _DAT_01c5b0e0;
  _DAT_01c5b0e0 = _DAT_01549aa8;
  *(uint *)(param_1 + 600) = 0;
  iVar3 = FUN_005a43ec("pod.ini",&DAT_005c37df);
  if (iVar3 != 0) {
    FUN_005a3a90(iVar3);
  }
  FUN_004d8a20(local_320,"system\\bw3.ini",&DAT_005c37ea);
  local_18 = 0;
  FUN_004d8c30(local_320,"Act1Code",&local_18);
  FUN_00508960("The Rustin Parr Investigation");
  local_14 = 0xffffffff;
  if (param_2 == 1 || iVar3 != 0) {
    iVar3 = FUN_0047db70(0x01C5B0E4,"Select mission to play","world",
                         "*.msn",local_11c,0);
    if (iVar3 == 0) goto LAB_004beb21;
    DAT_01d229f0 = 0;
    _DAT_01d22af4 = 0;
    _DAT_01d22af0 = 0;
  }
  else {
    pcVar6 = "town_act1.msn";
    pcVar5 = local_11c;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  FUN_004ab7a0(0x01D1A05C);
  FUN_00494880(0x01C6E360);
  uVar4 = 1;
  iVar3 = FUN_005a3260(&DAT_01d225c8,local_11c);
  if (iVar3 != 0) {
    pcVar5 = local_11c;
    pcVar6 = &DAT_01d225c8;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    uVar4 = 0;
  }
  FUN_004dfc50(0x01D70AB8,10,0,local_14);
  FUN_004f5bc0(0x01D81080,local_11c,uVar4);
  iVar3 = FUN_004f7880(0x01D81080,0);
  if (iVar3 != 0) {
    FUN_004f7590(0x01D81080);
    FUN_004f72a0(0x01D81080);
    if (*(int *)(param_1 + 0xa78) != 0) {
      *(uint *)(param_1 + 0xa78) = 0;
      FUN_004bdfb0(param_1,param_1 + 0xa7c,1);
    }
  }
LAB_004beb21:
  _DAT_01c5b0e0 = uVar2;
  FUN_004d8a50(local_320,0);
  return;
}
