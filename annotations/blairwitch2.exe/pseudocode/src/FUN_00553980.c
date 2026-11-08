// Name: FUN_00553980
// Address: 00553980
// Address Range: [[00553980, 00553b5a]]
// Convention: unknown
// Signature: undefined4 FUN_00553980(int param_1)

#include "nocturne.h"

uint FUN_00553980(int param_1)

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
  puVar4 = &DAT_0061bde0;
  pcVar6 = local_184;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if ((-1 < DAT_0061bcac) && (iVar3 = FUN_00552890(), DAT_0061bcac < iVar3)) {
    FUN_00552920(DAT_0061bcac,local_29c);
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
  FUN_00552790(&uStack_18,&uStack_20,&uStack_1c);
  FUN_004d8b80(param_1,&DAT_005e934c,uStack_18);
  FUN_004d8b80(param_1,"Channels",uStack_20);
  FUN_004d8b80(param_1,&DAT_005e935a,uStack_1c);
  uVar2 = FUN_00552b40();
  FUN_004d8b80(param_1,"AccelEnabled",uVar2);
  uStack_14 = FUN_00553600();
  FUN_004d8c30(param_1,"MaxSwLatency",uStack_14);
  uVar2 = FUN_00550bc0();
  iVar3 = 0;
  uVar2 = FUN_004d8b80(param_1,&DAT_005e9377,uVar2);
  if (0 < DAT_0061bc94) {
    do {
      FUN_005b7790(auStack_84,"SfxChannel%dEnabled",iVar3);
      uVar2 = FUN_005512a0(iVar3);
      FUN_004d8b80(param_1,auStack_84,uVar2);
      FUN_005b7790(auStack_84,"SfxChannel%dVol",iVar3);
      uStack_14 = FUN_00551190(iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = FUN_004d8c30(param_1,auStack_84,uStack_14);
    } while (iVar3 < DAT_0061bc94);
  }
  return uVar2;
}
