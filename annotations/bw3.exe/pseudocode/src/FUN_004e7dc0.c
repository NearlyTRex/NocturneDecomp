// Name: FUN_004e7dc0
// Address: 004e7dc0
// Address Range: [[004e7dc0, 004e80ea]]
// Convention: unknown
// Signature: undefined4 FUN_004e7dc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e7dc0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte auStack_224 [256];
  byte local_124 [256];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  iVar6 = 0x7fffffff;
  iVar4 = 0;
  iVar5 = 0x7fffffff;
  local_14 = 0;
  while( true ) {
    FUN_004f9670(0x1d72cb0);
    uVar1 = FUN_00508960("Center gamepad, press ENTER");
    iVar2 = FUN_004b2a80(_DAT_01549aa0,uVar1);
    local_24 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004b30f0(_DAT_01549aa0,0x58);
    FUN_004b0a20(_DAT_01549aa0,uVar1,local_24,0xf0 - iVar2 / 2,7,0);
    FUN_005a28c0(local_124,"%d,%d,%x",_DAT_01c6e250,_DAT_01c6e254,_DAT_01c6e260);
    FUN_00401fe0(local_124,0,0);
    FUN_004b93e0(0x01D2130C);
    FUN_0057a8a0();
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
    if (iVar2 != 0) break;
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar2 != 0) goto LAB_004e8077;
    iStack_1c = _DAT_01c6e250;
    iStack_18 = _DAT_01c6e254;
  }
  while( true ) {
    iVar2 = 0x01ED78C8;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar2,50000,50000,0x10000);
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9670(0x1d72cb0);
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    uVar1 = FUN_00508960("Move gamepad in all directions, press ENTER");
    iVar2 = FUN_004b2a80(_DAT_01549aa0,uVar1);
    iStack_20 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004b30f0(_DAT_01549aa0,0x58);
    FUN_004b0a20(_DAT_01549aa0,uVar1,iStack_20,0xf0 - iVar2 / 2,7,0);
    FUN_005a28c0(auStack_224,"%d,%d,%x",_DAT_01c6e250,_DAT_01c6e254,_DAT_01c6e260);
    FUN_00401fe0(auStack_224,0,0);
    FUN_004b93e0(0x01D2130C);
    FUN_0057a8a0();
    iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
    iVar2 = 0x01D2130C;
    if (iVar3 != 0) {
      *(int *)(0x01D2130C + 0xbc) = iStack_1c;
      *(int *)(iVar2 + 0xc4) = iVar6;
      *(int *)(iVar2 + 200) = iVar4;
      *(int *)(iVar2 + 0xcc) = iVar5;
      *(int *)(iVar2 + 0xc0) = iStack_18;
      *(int *)(iVar2 + 0xd0) = local_14;
      return 1;
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar2 != 0) break;
    if (_DAT_01c6e250 < iVar6) {
      iVar6 = _DAT_01c6e250;
    }
    if (iVar4 < _DAT_01c6e250) {
      iVar4 = _DAT_01c6e250;
    }
    if (_DAT_01c6e254 < iVar5) {
      iVar5 = _DAT_01c6e254;
    }
    if (local_14 < _DAT_01c6e254) {
      local_14 = _DAT_01c6e254;
    }
  }
LAB_004e8077:
  iVar4 = 0x01D2130C;
  *(uint *)(0x01D2130C + 0xbc) = 0;
  *(uint *)(iVar4 + 0xd4) = 0;
  return 0;
}
