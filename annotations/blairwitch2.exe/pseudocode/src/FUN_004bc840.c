// Name: FUN_004bc840
// Address: 004bc840
// Address Range: [[004bc840, 004bcb4a]]
// Convention: unknown
// Signature: void FUN_004bc840(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc840(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_324 [516];
  char local_120 [260];
  uint local_1c;
  char *local_18;
  uint local_14;
  
  iVar3 = FUN_00460c70(&DAT_005d8690,"blairhero.pod",&DAT_005d867f);
  if (iVar3 != 0) {
    FUN_005b89c0(iVar3);
  }
  *(uint *)(param_1 + 0x26c) = 0;
  *(uint *)(param_1 + 0x274) = 0;
  *(uint *)(param_1 + 0x268) = 0;
  uVar2 = _DAT_01c25590;
  *(uint *)(param_1 + 0x270) = 0;
  _DAT_01c25590 = _DAT_01511cc0;
  *(uint *)(param_1 + 0x250) = 0;
  iVar3 = FUN_005b910c("pod.ini",&DAT_005d8691);
  if (iVar3 != 0) {
    FUN_005b89c0(iVar3);
  }
  FUN_004d8910(local_324,"system\\nocturne.ini",&DAT_005d869c);
  local_1c = 0;
  FUN_004d8b20(local_324,"Act1Code",&local_1c);
  local_18 = (char *)FUN_0050fe80("Coffin Rock");
  local_14 = 0xffffffff;
  if (param_2 == 1 || iVar3 != 0) {
    iVar3 = FUN_0047c970(0x01C25594,"Select mission to play","world",
                         "*.msn",local_120,0);
    if (iVar3 == 0) goto LAB_004bca85;
    DAT_01cb7f78 = 0;
    _DAT_01cb8078 = 0;
  }
  else {
    pcVar5 = local_120;
    local_14 = 0;
    pcVar6 = PTR_s_awakening_msn_005d8aee_006165a8;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar3 = FUN_00460c70("world",local_120,&DAT_005d86ca);
    if (iVar3 == 0) goto LAB_004bca85;
    pcVar6 = &DAT_01cb7f78;
    FUN_005b89c0(iVar3);
    _DAT_01cb8078 = 0x00000795;
    pcVar5 = local_18;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  _DAT_01cb807c = 0;
  FUN_004a50b0(0x01CAF56C);
  FUN_004910b0(0x01C38BC0);
  uVar4 = 1;
  iVar3 = FUN_005b8130(&DAT_01cb7b50,local_120);
  if (iVar3 != 0) {
    pcVar5 = local_120;
    pcVar6 = &DAT_01cb7b50;
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
  FUN_004e1480(0x01D03000,10,0,local_14);
  FUN_004fb490(0x01D182F0,local_120,uVar4);
  iVar3 = FUN_004fd0e0(0x01D182F0,0);
  if (iVar3 != 0) {
    FUN_004fce00(0x01D182F0);
    FUN_004fcb00(0x01D182F0);
    if (*(int *)(param_1 + 0x9e8) != 0) {
      *(uint *)(param_1 + 0x9e8) = 0;
      FUN_004bbf70(param_1,param_1 + 0x9ec,1);
    }
  }
LAB_004bca85:
  _DAT_01c25590 = uVar2;
  FUN_004d8940(local_324,0);
  return;
}
