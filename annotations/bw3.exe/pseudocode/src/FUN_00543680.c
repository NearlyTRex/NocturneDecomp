// Name: FUN_00543680
// Address: 00543680
// Address Range: [[00543680, 0054386c]]
// Convention: unknown
// Signature: void FUN_00543680(int param_1)

#include "nocturne.h"

void FUN_00543680(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0054e6b0(param_1 + 0x158);
  *(uint *)(param_1 + 0xd0a4) = 0;
  *(uint *)(param_1 + 0xd0d0) = 0;
  iVar1 = FUN_005a3260(param_1 + 0x24a8,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = FUN_005a3260(param_1 + 0x24a8,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)(param_1 + 0xd0a4) = 1;
  }
  uVar2 = FUN_0054eac0(param_1 + 0x158);
  uVar3 = FUN_00548090(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0xd068) = uVar3;
  uVar3 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd06c) = uVar3;
  uVar3 = FUN_00548090(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd070) = uVar3;
  uVar3 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd058) = uVar3;
  uVar3 = FUN_00548090(uVar2,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0xd05c) = uVar3;
  uVar3 = FUN_00548090(uVar2,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0xd060) = uVar3;
  uVar2 = FUN_00548090(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd064) = uVar2;
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xd054) == 0) {
    *(uint *)(param_1 + 0x3270) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0xd078) = 0;
  uVar2 = FUN_0040ce40(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0xd080) = 0;
  *(uint *)(param_1 + 0xd084) = 0;
  *(uint *)(param_1 + 0xd07c) = uVar2;
  switch(*(uint *)(param_1 + 0xd0a8)) {
  case 0:
  case 1:
    *(uint *)(param_1 + 0xce5c) = 0x41700000;
    break;
  case 2:
    *(uint *)(param_1 + 0xce5c) = 0x41c80000;
    break;
  case 3:
    *(uint *)(param_1 + 0xce5c) = 0x41f00000;
    *(uint *)(param_1 + 0xce60) = 0x41a00000;
    *(uint *)(param_1 + 0x2538) = 0x42700000;
    return;
  default:
    goto switchD_005437f7_default;
  }
  *(uint *)(param_1 + 0xce60) = 0x41a00000;
  *(uint *)(param_1 + 0x2538) = 0x42200000;
switchD_005437f7_default:
  return;
}
