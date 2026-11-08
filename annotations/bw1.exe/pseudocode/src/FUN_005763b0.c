// Name: FUN_005763b0
// Address: 005763b0
// Address Range: [[005763b0, 0057658a]]
// Convention: unknown
// Signature: undefined4 FUN_005763b0(int param_1)

#include "nocturne.h"

uint FUN_005763b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  char local_29c [280];
  char local_184 [256];
  byte auStack_84 [100];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  pcVar5 = local_29c;
  puVar4 = &DAT_00623430;
  pcVar6 = local_184;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if ((-1 < DAT_006232fc) && (iVar3 = FUN_005752c0(), DAT_006232fc < iVar3)) {
    FUN_00575350(DAT_006232fc,local_29c);
    pcVar6 = local_184;
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
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,"DeviceName",local_184);
  FUN_005751c0(&uStack_18,&uStack_20,&uStack_1c);
  FUN_004f4d70(param_1,&DAT_005f4546,uStack_18);
  FUN_004f4d70(param_1,"Channels",uStack_20);
  FUN_004f4d70(param_1,&DAT_005f4554,uStack_1c);
  uVar2 = FUN_00575570();
  FUN_004f4d70(param_1,"AccelEnabled",uVar2);
  uStack_14 = FUN_00576030();
  FUN_004f4e20(param_1,"MaxSwLatency",uStack_14);
  uVar2 = FUN_005735f0();
  iVar3 = 0;
  uVar2 = FUN_004f4d70(param_1,&DAT_005f4571,uVar2);
  if (0 < DAT_006232e4) {
    do {
      FUN_005bfb40(auStack_84,"SfxChannel%dEnabled",iVar3);
      uVar2 = FUN_00573cd0(iVar3);
      FUN_004f4d70(param_1,auStack_84,uVar2);
      FUN_005bfb40(auStack_84,"SfxChannel%dVol",iVar3);
      uStack_14 = FUN_00573bc0(iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = FUN_004f4e20(param_1,auStack_84,uStack_14);
    } while (iVar3 < DAT_006232e4);
  }
  return uVar2;
}
