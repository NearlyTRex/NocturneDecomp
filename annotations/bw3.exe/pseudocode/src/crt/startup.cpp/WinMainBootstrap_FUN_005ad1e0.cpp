// Name: crt_startup.cpp_WinMainBootstrap_FUN_005ad1e0
// Address: 005ad1e0
// Address Range: [[005ad1e0, 005ad28f]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005ad1e0(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005ad1e0(void)

{
  int iVar1;
  uint uVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint uStack_20;
  int aiStack_1c [2];
  ulong uStack_14;
  byte local_10 [8];
  
  uStack_14 = 0x5ad1f1;
  FUN_005ae4a0();
  iVar4 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar4 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar4 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar4) = local_10 + iVar4;
  *(uint *)((int)&uStack_20 + iVar4) = 0x5ad20e;
  memset
            (*(void **)((int)aiStack_1c + iVar4),*(int *)((int)aiStack_1c + iVar4 + 4),
             *(ulong *)(local_10 + iVar4 + -4));
  *(byte **)(local_10 + iVar4 + -4) = local_10 + iVar4;
  *(int *)(&stack0x000000e0 + iVar4) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar4 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar4) = 0x5ad226;
  FUN_005a81b8();
  puVar6 = local_10 + iVar4;
  uVar5 = DAT_00607964 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar4 + -4) = 0x5ad23a;
  uVar2 = FUN_005aefe0();
  if (uVar5 < uVar2) {
    *(uint *)(local_10 + iVar4 + -4) = uVar5;
    *(uint *)((int)aiStack_1c + iVar4 + 4) = 0x5ad244;
    FUN_005a6033();
    iVar1 = -(DAT_00607964 + 3U & 0xfffffffc);
    puVar6 = local_10 + iVar1 + iVar4;
    _DAT_00607968 = local_10 + iVar1 + iVar4;
  }
  else {
    _DAT_00607968 = (byte *)0x0;
  }
  _DAT_00607968 = _DAT_00607968 + DAT_00607964;
  *(uint *)(puVar6 + -4) = 0x5ad268;
  FUN_005af7f0();
  *(uint *)(puVar6 + -4) = 10;
  *(uint *)(puVar6 + -8) = DAT_00607940;
  *(uint *)(puVar6 + -0xc) = 0;
  *(uint *)(puVar6 + -0x10) = 0;
  *(uint *)(puVar6 + -0x14) = 0x5ad27c;
  pHVar3 = GetModuleHandleA(*(LPCSTR *)(puVar6 + -0x10));
  *(HMODULE *)(puVar6 + -0x10) = pHVar3;
  *(uint *)(puVar6 + -0x14) = 0x5ad282;
  iVar4 = wincore_winrun_cpp_winMain_FUN_00581080
                    (*(HINSTANCE *)(puVar6 + -0x10),*(HINSTANCE *)(puVar6 + -0xc),
                     *(LPSTR *)(puVar6 + -8),*(int *)(puVar6 + -4));
  *(int *)(puVar6 + -4) = iVar4;
  *(uint *)(puVar6 + -8) = 0x5ad288;
  FUN_005ad2c4();
  return;
}
