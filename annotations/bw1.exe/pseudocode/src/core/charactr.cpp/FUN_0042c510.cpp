// Name: FUN_0042c510
// Address: 0042c510
// Address Range: [[0042c510, 0042c79b]]
// Convention: unknown
// Signature: void FUN_0042c510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c510(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00408850(param_1);
  *(uint *)(param_1 + 0x2504) = _DAT_005fd614;
  *(uint *)(param_1 + 0x3004) = 0;
  FUN_00468950(&DAT_007c61c4,"stake_b.kfm");
  FUN_004688e0(&DAT_007c61c4);
  iVar5 = param_1;
  do {
    iVar3 = *(int *)(iVar5 + 0x25b0);
    if ((iVar3 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3), iVar4 != param_1)) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x13c;
      FUN_005030e0("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar3,iVar3,iVar4);
    }
    iVar5 = iVar5 + 0x78;
  } while (iVar5 != param_1 + 0xf0);
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x27b8);
    FUN_00569b20(param_1 + 0x158);
    uVar2 = FUN_00569f30(param_1 + 0x158,"bip01 head",0);
    uVar2 = FUN_005634f0(uVar2);
    *(uint *)(param_1 + 0x2774) = uVar2;
  }
  FUN_00432e80(param_1);
  if (*(int *)(param_1 + 0x27a4) != 0) {
    iVar3 = FUN_00569f30(param_1 + 0x158);
    iVar5 = 0;
    *(uint *)(param_1 + 0x3124) = 4;
    iVar4 = FUN_005c04e0(param_1 + 0x24a8,"shadow.dfm");
    if (iVar4 == 0) {
      iVar5 = 0x10;
    }
    if (iVar5 < *(int *)(iVar3 + 0x1de78)) {
      do {
        iVar4 = iVar5 + 1;
        FUN_0042f4d0(param_1,iVar3,iVar5);
        iVar5 = iVar4;
      } while (iVar4 < *(int *)(iVar3 + 0x1de78));
    }
    iVar4 = 0;
    iVar5 = param_1;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x3120)) {
      do {
        *(uint *)(iVar3 + 0x3784) = 4;
        *(uint *)(iVar5 + 0x3140) = 0x40000000;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
        iVar3 = iVar3 + 0x2a4;
      } while (iVar4 < *(int *)(param_1 + 0x3120));
    }
  }
  iVar3 = param_1 + 0x2ca0;
  FUN_00441cc0(iVar3);
  iVar5 = param_1 + 0x158;
  FUN_00441f60(iVar3,param_1 + 0x20,param_1 + 0x30,iVar5,iVar5);
  FUN_00441fa0(iVar3,param_1 + 0x20,param_1 + 0x30,0x3d4ccccd,*(uint *)(param_1 + 0x2504),
               iVar5);
  FUN_004343c0(param_1);
  if (*(char *)(param_1 + 0x2544) != '\0') {
    *(uint *)(param_1 + 0xb9e4) = 0;
    return;
  }
  iVar5 = FUN_00408830(param_1);
  pcVar6 = (char *)(iVar5 + 1);
  pcVar7 = (char *)(param_1 + 0x2544);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0xb9e4) = 0;
  return;
}
