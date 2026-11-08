// Name: FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee3dc]]
// Convention: unknown
// Signature: void FUN_004ee1a0(int param_1)

#include "nocturne.h"

void FUN_004ee1a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  local_10 = 0;
  if (param_1 != 0) {
    FUN_0055ac50(0x0264B290);
    FUN_005023e0(0x1d05620);
  }
  iVar3 = 0x1d07ed0;
  FUN_004b3000(0x01CB6900);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d082d0) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x10);
  do {
    FUN_004b3010(0x01CB6900);
    iVar1 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    FUN_005344c0(iVar1,50000,50000,0x10000);
    *(uint *)(0x01E661B8 + 0x15ae94) = 0xdac;
    FUN_005024a0(0x1d05620,*(uint *)(0x01CB6900 + 0x284));
    FUN_00502510(0x1d05620);
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    uVar2 = FUN_0050fe80("?Graphic options" + 1);
    FUN_005b7790(0x1d07ed0,uVar2);
    uVar2 = FUN_0050fe80("Sound options");
    FUN_005b7790(0x1d07fd0,uVar2);
    uVar2 = FUN_0050fe80("Control options");
    FUN_005b7790(0x1d080d0,uVar2);
    uVar2 = FUN_0050fe80("Credits");
    FUN_005b7790(0x1d081d0,uVar2);
    *(uint *)(0x01CB6900 + 0xd4) = 9;
    uVar2 = FUN_0050fe80("Option Menu");
    uVar2 = FUN_004eb0e0(0x1d082d0,4,&local_10,0x122,uVar2);
    FUN_00589560();
    switch(uVar2) {
    case 0:
      FUN_004ebf10();
      break;
    case 1:
      FUN_004ed260();
      break;
    case 2:
      iVar1 = *(int *)(0x01CB6900 + 0xd0);
      FUN_004ecc70();
      if (iVar1 != *(int *)(0x01CB6900 + 0xd0)) {
        FUN_004eed60();
      }
      break;
    case 3:
      FUN_004be430(0x01CB6900);
      FUN_0055ac50(0x0264B290);
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
  } while (iVar1 == 0);
  if (param_1 != 0) {
    FUN_00502450(0x1d05620);
    FUN_0055adb0(0x0264B290);
    FUN_004d94d0();
    return;
  }
  FUN_004d94d0();
  return;
}
