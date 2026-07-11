// Name: FUN_0056df10
// Address: 0056df10
// Address Range: [[0056df10, 0056dfbf]]
// Convention: unknown
// Signature: void FUN_0056df10(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056df10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  byte *puVar7;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  byte local_10 [8];
  
  uStack_14 = 0x56df21;
  FUN_0056ef60();
  iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar1 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar1 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar1) = local_10 + iVar1;
  *(uint *)((int)&uStack_20 + iVar1) = 0x56df3e;
  FUN_00563cc0();
  *(byte **)(local_10 + iVar1 + -4) = local_10 + iVar1;
  *(int *)(&stack0x000000e0 + iVar1) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar1 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar1) = 0x56df56;
  FUN_00567458();
  puVar7 = local_10 + iVar1;
  uVar6 = DAT_005c1cf0 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar1 + -4) = 0x56df6a;
  uVar3 = FUN_00571150();
  if (uVar6 < uVar3) {
    *(uint *)(local_10 + iVar1 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar1 + 4) = 0x56df74;
    FUN_005670ed();
    iVar2 = -(DAT_005c1cf0 + 3U & 0xfffffffc);
    puVar7 = local_10 + iVar2 + iVar1;
    _DAT_005c1cf4 = local_10 + iVar2 + iVar1;
  }
  else {
    _DAT_005c1cf4 = (byte *)0x0;
  }
  _DAT_005c1cf4 = _DAT_005c1cf4 + DAT_005c1cf0;
  *(uint *)(puVar7 + -4) = 0x56df98;
  FUN_00571160();
  *(uint *)(puVar7 + -4) = 10;
  *(uint *)(puVar7 + -8) = DAT_005c1ccc;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x56dfac;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x56dfb2;
  uVar5 = FUN_00559260();
  *(uint *)(puVar7 + -4) = uVar5;
  *(uint *)(puVar7 + -8) = 0x56dfb8;
  FUN_0056fcd4();
  return;
}
