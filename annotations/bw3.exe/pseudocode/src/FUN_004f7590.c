// Name: FUN_004f7590
// Address: 004f7590
// Address Range: [[004f7590, 004f76a1]]
// Convention: unknown
// Signature: undefined4 FUN_004f7590(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7590(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (_DAT_01d5ba00 < 1) {
    pcVar3 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) {
      FUN_004f6a80(param_1);
      *(uint *)(param_1 + 0x1450) = 0xffffffff;
      uVar2 = 0x01C6E360;
      *(uint *)(param_1 + 0x144c) = 0;
      *(uint *)(param_1 + 0x1448) = *(uint *)(param_1 + 0x144c);
      *(uint *)(param_1 + 0x1444) = *(uint *)(param_1 + 0x1448);
      FUN_0048bfd0(uVar2);
      iVar1 = 0x01D2130C;
      *(uint *)(0x01D2130C + 0x24c) = 0;
      *(uint *)(iVar1 + 0x294) = 0xbf800000;
      FUN_004f6de0(param_1,*(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c));
      uVar2 = FUN_00508960("Loading script",0);
      FUN_004e0000(0x01D70AB8,uVar2);
      FUN_004f63c0(param_1);
      FUN_005297a0(0x01ED73E0);
      FUN_00529920(0x01ED73E0);
      FUN_00540bc0(0x01ED78C8);
      return 1;
    }
    pcVar3 = "Can't run mission - no local hero";
  }
  FUN_0047cf40(0x01C5B0E4,pcVar3);
  return 0;
}
