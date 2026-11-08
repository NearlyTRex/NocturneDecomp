// Name: FUN_00553680
// Address: 00553680
// Address Range: [[00553680, 0055397a]]
// Convention: unknown
// Signature: int FUN_00553680(int param_1)

#include "nocturne.h"

int FUN_00553680(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte auStack_3b4 [280];
  byte auStack_29c [264];
  uint local_194 [64];
  byte auStack_94 [100];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  puVar3 = &DAT_0061bce0;
  puVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,"@DeviceName" + 1,local_194,0x100);
  FUN_00552c40();
  for (iVar2 = 0; iVar1 = FUN_00552890(), iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_00552920(iVar2,auStack_3b4);
    iVar1 = FUN_005b8130(auStack_3b4,local_194);
    if (iVar1 == 0) {
      FUN_00552aa0(iVar2);
      break;
    }
  }
  local_194[0]._0_1_ = 0;
  (**(code **)(*(int *)(param_1 + 0x200) + 4))
            (param_1,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  FUN_00552f10();
  do {
    iVar1 = FUN_00552d00();
    if (iVar1 <= iVar2) {
LAB_0055377a:
      uStack_30 = FUN_00552b40();
      FUN_004d8b20(param_1,"AccelEnabled",&uStack_30);
      FUN_00552b50(uStack_30);
      uStack_2c = FUN_00553600();
      uStack_14 = uStack_2c;
      FUN_004d8bc0(param_1,"MaxSwLatency",&uStack_2c);
      FUN_00553610(uStack_2c);
      FUN_00552790(&uStack_28,&uStack_24,&uStack_20);
      FUN_004d8b20(param_1,&DAT_005e9307,&uStack_28);
      FUN_004d8b20(param_1,"Channels",&uStack_24);
      FUN_004d8b20(param_1,&DAT_005e9315,&uStack_20);
      FUN_005526f0(uStack_28,uStack_24,uStack_20);
      uStack_30 = FUN_00550bc0();
      FUN_004d8b20(param_1,&DAT_005e9318,&uStack_30);
      iVar1 = 0;
      FUN_00550bd0(uStack_30);
      iVar2 = DAT_0061bc94;
      if (0 < DAT_0061bc94) {
        do {
          FUN_005b7790(auStack_94,"SfxChannel%dEnabled",iVar1);
          uStack_1c = FUN_005512a0(iVar1);
          FUN_004d8b20(param_1,auStack_94,&uStack_1c);
          FUN_00551220(iVar1,uStack_1c);
          FUN_005b7790(auStack_94,"SfxChannel%dVol",iVar1);
          uStack_18 = FUN_00551190(iVar1);
          uStack_14 = uStack_18;
          FUN_004d8bc0(param_1,auStack_94,&uStack_18);
          iVar2 = FUN_00551100(iVar1,uStack_18);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_0061bc94);
      }
      return iVar2;
    }
    FUN_00552d60(iVar2,auStack_29c);
    iVar1 = FUN_005b8130(auStack_29c,local_194);
    if (iVar1 == 0) {
      FUN_00552e40(iVar2);
      goto LAB_0055377a;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
