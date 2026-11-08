// Name: FUN_005760b0
// Address: 005760b0
// Address Range: [[005760b0, 005763aa]]
// Convention: unknown
// Signature: int FUN_005760b0(int param_1)

#include "nocturne.h"

int FUN_005760b0(int param_1)

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
  
  puVar3 = &DAT_00623330;
  puVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,"@DeviceName" + 1,local_194,0x100);
  FUN_00575670();
  for (iVar2 = 0; iVar1 = FUN_005752c0(), iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_00575350(iVar2,auStack_3b4);
    iVar1 = FUN_005c04e0(auStack_3b4,local_194);
    if (iVar1 == 0) {
      FUN_005754d0(iVar2);
      break;
    }
  }
  local_194[0]._0_1_ = 0;
  (**(code **)(*(int *)(param_1 + 0x200) + 4))
            (param_1,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  FUN_00575940();
  do {
    iVar1 = FUN_00575730();
    if (iVar1 <= iVar2) {
LAB_005761aa:
      uStack_30 = FUN_00575570();
      FUN_004f4d10(param_1,"AccelEnabled",&uStack_30);
      FUN_00575580(uStack_30);
      uStack_2c = FUN_00576030();
      uStack_14 = uStack_2c;
      FUN_004f4db0(param_1,"MaxSwLatency",&uStack_2c);
      FUN_00576040(uStack_2c);
      FUN_005751c0(&uStack_28,&uStack_24,&uStack_20);
      FUN_004f4d10(param_1,&DAT_005f4501,&uStack_28);
      FUN_004f4d10(param_1,"Channels",&uStack_24);
      FUN_004f4d10(param_1,&DAT_005f450f,&uStack_20);
      FUN_00575120(uStack_28,uStack_24,uStack_20);
      uStack_30 = FUN_005735f0();
      FUN_004f4d10(param_1,&DAT_005f4512,&uStack_30);
      iVar1 = 0;
      FUN_00573600(uStack_30);
      iVar2 = DAT_006232e4;
      if (0 < DAT_006232e4) {
        do {
          FUN_005bfb40(auStack_94,"SfxChannel%dEnabled",iVar1);
          uStack_1c = FUN_00573cd0(iVar1);
          FUN_004f4d10(param_1,auStack_94,&uStack_1c);
          FUN_00573c50(iVar1,uStack_1c);
          FUN_005bfb40(auStack_94,"SfxChannel%dVol",iVar1);
          uStack_18 = FUN_00573bc0(iVar1);
          uStack_14 = uStack_18;
          FUN_004f4db0(param_1,auStack_94,&uStack_18);
          iVar2 = FUN_00573b30(iVar1,uStack_18);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_006232e4);
      }
      return iVar2;
    }
    FUN_00575790(iVar2,auStack_29c);
    iVar1 = FUN_005c04e0(auStack_29c,local_194);
    if (iVar1 == 0) {
      FUN_00575870(iVar2);
      goto LAB_005761aa;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
