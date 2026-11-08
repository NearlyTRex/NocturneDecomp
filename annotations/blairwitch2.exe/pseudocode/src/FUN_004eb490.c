// Name: FUN_004eb490
// Address: 004eb490
// Address Range: [[004eb490, 004eb7ba]]
// Convention: unknown
// Signature: undefined4 FUN_004eb490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004eb490(void)

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
    FUN_00502510(0x1d05620);
    uVar1 = FUN_0050fe80("Center gamepad, press ENTER");
    iVar2 = FUN_004aaf00(_DAT_01511cb8,uVar1);
    local_24 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004ab560(_DAT_01511cb8,0x58);
    FUN_004a8df0(_DAT_01511cb8,uVar1,local_24,0xf0 - iVar2 / 2,7,0);
    FUN_005b7790(local_124,"%d,%d,%x",_DAT_01c38af0,_DAT_01c38af4,_DAT_01c38b00);
    FUN_00401fe0(local_124,0,0);
    FUN_004b7140(0x01CB6900);
    FUN_00589560();
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
    if (iVar2 != 0) break;
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar2 != 0) goto LAB_004eb747;
    iStack_1c = _DAT_01c38af0;
    iStack_18 = _DAT_01c38af4;
  }
  while( true ) {
    iVar2 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    FUN_005344c0(iVar2,50000,50000,0x10000);
    *(uint *)(0x01E661B8 + 0x15ae94) = 0xdac;
    FUN_00502510(0x1d05620);
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    uVar1 = FUN_0050fe80("Move gamepad in all directions, press ENTER");
    iVar2 = FUN_004aaf00(_DAT_01511cb8,uVar1);
    iStack_20 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004ab560(_DAT_01511cb8,0x58);
    FUN_004a8df0(_DAT_01511cb8,uVar1,iStack_20,0xf0 - iVar2 / 2,7,0);
    FUN_005b7790(auStack_224,"%d,%d,%x",_DAT_01c38af0,_DAT_01c38af4,_DAT_01c38b00);
    FUN_00401fe0(auStack_224,0,0);
    FUN_004b7140(0x01CB6900);
    FUN_00589560();
    iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
    iVar2 = 0x01CB6900;
    if (iVar3 != 0) {
      *(int *)(0x01CB6900 + 0xb8) = iStack_1c;
      *(int *)(iVar2 + 0xc0) = iVar6;
      *(int *)(iVar2 + 0xc4) = iVar4;
      *(int *)(iVar2 + 200) = iVar5;
      *(int *)(iVar2 + 0xbc) = iStack_18;
      *(int *)(iVar2 + 0xcc) = local_14;
      return 1;
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar2 != 0) break;
    if (_DAT_01c38af0 < iVar6) {
      iVar6 = _DAT_01c38af0;
    }
    if (iVar4 < _DAT_01c38af0) {
      iVar4 = _DAT_01c38af0;
    }
    if (_DAT_01c38af4 < iVar5) {
      iVar5 = _DAT_01c38af4;
    }
    if (local_14 < _DAT_01c38af4) {
      local_14 = _DAT_01c38af4;
    }
  }
LAB_004eb747:
  iVar4 = 0x01CB6900;
  *(uint *)(0x01CB6900 + 0xb8) = 0;
  *(uint *)(iVar4 + 0xd0) = 0;
  return 0;
}
