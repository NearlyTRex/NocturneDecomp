// Name: FUN_005a52a0
// Address: 005a52a0
// Address Range: [[005a52a0, 005a54a3]]
// Convention: unknown
// Signature: void FUN_005a52a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a52a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  FUN_004a0510(param_1);
  iVar2 = param_1 + 0x158;
  FUN_00569b20(iVar2);
  iVar3 = param_1 + 0xc268;
  FUN_00569b20(iVar3);
  iVar4 = param_1 + 0xe60c;
  FUN_0043e6d0(iVar4,"batwing.cth");
  iVar7 = param_1 + 0x30;
  iVar1 = param_1 + 0x20;
  FUN_0043eea0(iVar4,iVar1,iVar7,iVar3,iVar7);
  iVar5 = param_1 + 0x4913c;
  FUN_0043e6d0(iVar5,"noscape.cth");
  FUN_0043eea0(iVar5,iVar1,iVar7,iVar2);
  iVar8 = param_1 + 0x83c6c;
  FUN_0043e6d0(iVar8,"nosskirt.cth",iVar7,iVar8);
  FUN_0043eea0(iVar8,iVar1,iVar7,iVar2);
  FUN_00567500(iVar2);
  FUN_00569180(iVar2);
  FUN_00567500(iVar3);
  FUN_00569180(iVar3);
  iVar7 = param_1 + 0xbe7a0;
  _DAT_01d39d30 = 0;
  FUN_005230c0(iVar7,0,iVar2);
  FUN_00523210(iVar7,0,iVar5,0);
  _DAT_01d39d30 = 1;
  FUN_00523210(iVar7,0,iVar5,0);
  _DAT_01d39d30 = 0;
  FUN_00523210(iVar7,0,iVar8,0);
  _DAT_01d39d30 = 1;
  FUN_00523210(iVar7,0,iVar8,0);
  _DAT_01d39d30 = 0;
  FUN_005230c0(iVar7,1,iVar3);
  FUN_00523210(iVar7,1,iVar4,0);
  _DAT_01d39d30 = 1;
  FUN_00523210(iVar7,1,iVar4,0);
  _DAT_01d39d30 = 0;
  FUN_00523310(iVar7);
  FUN_00567580(iVar2);
  FUN_00567580(iVar3);
  *(uint *)(param_1 + 0xfc) = 1;
  uVar6 = FUN_00569f30(iVar2);
  uVar6 = FUN_005634f0(uVar6,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x25ac) = 0;
  *(uint *)(param_1 + 0xbf3dc) = 0;
  *(uint *)(param_1 + 0x25a8) = uVar6;
  return;
}
