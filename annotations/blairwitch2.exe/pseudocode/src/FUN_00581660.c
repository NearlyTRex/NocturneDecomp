// Name: FUN_00581660
// Address: 00581660
// Address Range: [[00581660, 00581863]]
// Convention: unknown
// Signature: void FUN_00581660(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581660(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  FUN_00487eb0(param_1);
  iVar2 = param_1 + 0x2b4;
  FUN_00547480(iVar2);
  iVar3 = param_1 + 0x10af8;
  FUN_00547480(iVar3);
  iVar4 = param_1 + 0x12dac;
  FUN_005adeb0(iVar4,"batwing.cth");
  iVar7 = param_1 + 0x30;
  iVar1 = param_1 + 0x20;
  FUN_005ae680(iVar4,iVar1,iVar7,iVar3,iVar7);
  iVar5 = param_1 + 0x4d8dc;
  FUN_005adeb0(iVar5,"noscape.cth");
  FUN_005ae680(iVar5,iVar1,iVar7,iVar2);
  iVar8 = param_1 + 0x8840c;
  FUN_005adeb0(iVar8,"nosskirt.cth",iVar7,iVar8);
  FUN_005ae680(iVar8,iVar1,iVar7,iVar2);
  FUN_00544e60(iVar2);
  FUN_00546ae0(iVar2);
  FUN_00544e60(iVar3);
  FUN_00546ae0(iVar3);
  iVar7 = param_1 + 0xc2f40;
  _DAT_0268014c = 0;
  FUN_005b6f80(iVar7,0,iVar2);
  FUN_005b70d0(iVar7,0,iVar5,0);
  _DAT_0268014c = 1;
  FUN_005b70d0(iVar7,0,iVar5,0);
  _DAT_0268014c = 0;
  FUN_005b70d0(iVar7,0,iVar8,0);
  _DAT_0268014c = 1;
  FUN_005b70d0(iVar7,0,iVar8,0);
  _DAT_0268014c = 0;
  FUN_005b6f80(iVar7,1,iVar3);
  FUN_005b70d0(iVar7,1,iVar4,0);
  _DAT_0268014c = 1;
  FUN_005b70d0(iVar7,1,iVar4,0);
  _DAT_0268014c = 0;
  FUN_005b71d0(iVar7);
  FUN_00544ee0(iVar2);
  FUN_00544ee0(iVar3);
  *(uint *)(param_1 + 0xfc) = 1;
  uVar6 = FUN_00547890(iVar2);
  uVar6 = FUN_00540e80(uVar6,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x261c) = 0;
  *(uint *)(param_1 + 0xc3b7c) = 0;
  *(uint *)(param_1 + 0x2618) = uVar6;
  return;
}
