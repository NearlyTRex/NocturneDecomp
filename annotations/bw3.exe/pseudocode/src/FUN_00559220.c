// Name: FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 0055951a]]
// Convention: unknown
// Signature: int FUN_00559220(int param_1)

#include "nocturne.h"

int FUN_00559220(int param_1)

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
  
  puVar3 = &DAT_00604268;
  puVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,"@DeviceName" + 1,local_194,0x100);
  FUN_005587e0();
  for (iVar2 = 0; iVar1 = FUN_00558430(), iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_005584c0(iVar2,auStack_3b4);
    iVar1 = FUN_005a3260(auStack_3b4,local_194);
    if (iVar1 == 0) {
      FUN_00558640(iVar2);
      break;
    }
  }
  local_194[0]._0_1_ = 0;
  (**(code **)(*(int *)(param_1 + 0x200) + 4))
            (param_1,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  FUN_00558ab0();
  do {
    iVar1 = FUN_005588a0();
    if (iVar1 <= iVar2) {
LAB_0055931a:
      uStack_30 = FUN_005586e0();
      FUN_004d8c30(param_1,"AccelEnabled",&uStack_30);
      FUN_005586f0(uStack_30);
      uStack_2c = FUN_005591a0();
      uStack_14 = uStack_2c;
      FUN_004d8cd0(param_1,"MaxSwLatency",&uStack_2c);
      FUN_005591b0(uStack_2c);
      FUN_00558330(&uStack_28,&uStack_24,&uStack_20);
      FUN_004d8c30(param_1,&DAT_005d3dfb,&uStack_28);
      FUN_004d8c30(param_1,"Channels",&uStack_24);
      FUN_004d8c30(param_1,&DAT_005d3e09,&uStack_20);
      FUN_00558290(uStack_28,uStack_24,uStack_20);
      uStack_30 = FUN_00556750();
      FUN_004d8c30(param_1,&DAT_005d3e0c,&uStack_30);
      iVar1 = 0;
      FUN_00556760(uStack_30);
      iVar2 = DAT_00604224;
      if (0 < DAT_00604224) {
        do {
          FUN_005a28c0(auStack_94,"SfxChannel%dEnabled",iVar1);
          uStack_1c = FUN_00556e30(iVar1);
          FUN_004d8c30(param_1,auStack_94,&uStack_1c);
          FUN_00556db0(iVar1,uStack_1c);
          FUN_005a28c0(auStack_94,"SfxChannel%dVol",iVar1);
          uStack_18 = FUN_00556d20(iVar1);
          uStack_14 = uStack_18;
          FUN_004d8cd0(param_1,auStack_94,&uStack_18);
          iVar2 = FUN_00556c90(iVar1,uStack_18);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_00604224);
      }
      return iVar2;
    }
    FUN_00558900(iVar2,auStack_29c);
    iVar1 = FUN_005a3260(auStack_29c,local_194);
    if (iVar1 == 0) {
      FUN_005589e0(iVar2);
      goto LAB_0055931a;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
