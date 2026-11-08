// Name: FUN_0050a2b0
// Address: 0050a2b0
// Address Range: [[0050a2b0, 0050a5da]]
// Convention: unknown
// Signature: undefined4 FUN_0050a2b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050a2b0(void)

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
    FUN_00521e40(0x1d1e380);
    uVar1 = FUN_00531090("Center gamepad, press ENTER");
    iVar2 = FUN_004c3ea0(_DAT_0152d23c,uVar1);
    local_24 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004c4510(_DAT_0152d23c,0x58);
    FUN_004c1dd0(_DAT_0152d23c,uVar1,local_24,0xf0 - iVar2 / 2,7,0);
    FUN_005bfb40(local_124,"%d,%d,%x",_DAT_01c51cb0,_DAT_01c51cb4,_DAT_01c51cc0);
    FUN_00401fe0(local_124,0,0);
    FUN_004d0960(0x01CCF390);
    FUN_005acff0();
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    if (iVar2 != 0) break;
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar2 != 0) goto LAB_0050a567;
    iStack_1c = _DAT_01c51cb0;
    iStack_18 = _DAT_01c51cb4;
  }
  while( true ) {
    iVar2 = 0x01E82168;
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    FUN_00555770(iVar2,50000,50000,0x10000);
    *(uint *)(0x01E82168 + 0x15ae94) = 0xdac;
    FUN_00521e40(0x1d1e380);
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
    uVar1 = FUN_00531090("Move gamepad in all directions, press ENTER");
    iVar2 = FUN_004c3ea0(_DAT_0152d23c,uVar1);
    iStack_20 = 0x140 - iVar2 / 2;
    iVar2 = FUN_004c4510(_DAT_0152d23c,0x58);
    FUN_004c1dd0(_DAT_0152d23c,uVar1,iStack_20,0xf0 - iVar2 / 2,7,0);
    FUN_005bfb40(auStack_224,"%d,%d,%x",_DAT_01c51cb0,_DAT_01c51cb4,_DAT_01c51cc0);
    FUN_00401fe0(auStack_224,0,0);
    FUN_004d0960(0x01CCF390);
    FUN_005acff0();
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    iVar2 = 0x01CCF390;
    if (iVar3 != 0) {
      *(int *)(0x01CCF390 + 0xb8) = iStack_1c;
      *(int *)(iVar2 + 0xc0) = iVar6;
      *(int *)(iVar2 + 0xc4) = iVar4;
      *(int *)(iVar2 + 200) = iVar5;
      *(int *)(iVar2 + 0xbc) = iStack_18;
      *(int *)(iVar2 + 0xcc) = local_14;
      return 1;
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar2 != 0) break;
    if (_DAT_01c51cb0 < iVar6) {
      iVar6 = _DAT_01c51cb0;
    }
    if (iVar4 < _DAT_01c51cb0) {
      iVar4 = _DAT_01c51cb0;
    }
    if (_DAT_01c51cb4 < iVar5) {
      iVar5 = _DAT_01c51cb4;
    }
    if (local_14 < _DAT_01c51cb4) {
      local_14 = _DAT_01c51cb4;
    }
  }
LAB_0050a567:
  iVar4 = 0x01CCF390;
  *(uint *)(0x01CCF390 + 0xb8) = 0;
  *(uint *)(iVar4 + 0xd0) = 0;
  return 0;
}
