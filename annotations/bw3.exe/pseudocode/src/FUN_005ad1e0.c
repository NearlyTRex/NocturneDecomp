// Name: FUN_005ad1e0
// Address: 005ad1e0
// Address Range: [[005ad1e0, 005ad28f]]
// Convention: unknown
// Signature: void FUN_005ad1e0(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad1e0(void)

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
  
  uStack_14 = 0x5ad1f1;
  FUN_005ae4a0();
  iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar1 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar1 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar1) = local_10 + iVar1;
  *(uint *)((int)&uStack_20 + iVar1) = 0x5ad20e;
  FUN_005a28f0();
  *(byte **)(local_10 + iVar1 + -4) = local_10 + iVar1;
  *(int *)(&stack0x000000e0 + iVar1) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar1 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar1) = 0x5ad226;
  FUN_005a81b8();
  puVar7 = local_10 + iVar1;
  uVar6 = DAT_00607964 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar1 + -4) = 0x5ad23a;
  uVar3 = FUN_005aefe0();
  if (uVar6 < uVar3) {
    *(uint *)(local_10 + iVar1 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar1 + 4) = 0x5ad244;
    FUN_005a6033();
    iVar2 = -(DAT_00607964 + 3U & 0xfffffffc);
    puVar7 = local_10 + iVar2 + iVar1;
    _DAT_00607968 = local_10 + iVar2 + iVar1;
  }
  else {
    _DAT_00607968 = (byte *)0x0;
  }
  _DAT_00607968 = _DAT_00607968 + DAT_00607964;
  *(uint *)(puVar7 + -4) = 0x5ad268;
  FUN_005af7f0();
  *(uint *)(puVar7 + -4) = 10;
  *(uint *)(puVar7 + -8) = DAT_00607940;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x5ad27c;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x5ad282;
  uVar5 = FUN_00581080();
  *(uint *)(puVar7 + -4) = uVar5;
  *(uint *)(puVar7 + -8) = 0x5ad288;
  FUN_005ad2c4();
  return;
}
