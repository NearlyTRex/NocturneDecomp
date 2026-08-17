// Name: entry
// Address: 00567152
// Address Range: [[00567152, 00567156]]
// Convention: __watcallRegister
// Signature: void __watcallRegister entry(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __watcallRegister entry(void)

{
  int iVar1;
  uint uVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  byte auStack_10 [8];
  
  uStack_14 = 0x56df21;
  ProcessInitTermHandlers(1);
  iVar4 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(auStack_10 + iVar4 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar4 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar4) = auStack_10 + iVar4;
  *(uint *)((int)&uStack_20 + iVar4) = 0x56df3e;
  memset
            (*(void **)((int)aiStack_1c + iVar4),*(int *)((int)aiStack_1c + iVar4 + 4),
             *(ulong *)(auStack_10 + iVar4 + -4));
  *(byte **)(auStack_10 + iVar4 + -4) = auStack_10 + iVar4;
  *(int *)(&stack0x000000e0 + iVar4) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar4 + 4) = auStack_10;
  *(uint *)((int)aiStack_1c + iVar4) = 0x56df56;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_00567458(auStack_10);
  puVar6 = auStack_10 + iVar4;
  uVar5 = DAT_005c1cf0 + 3U & 0xfffffffc;
  *(uint *)(auStack_10 + iVar4 + -4) = 0x56df6a;
  uVar2 = GetStackUsage();
  if (uVar5 < uVar2) {
    *(uint *)(auStack_10 + iVar4 + -4) = uVar5;
    *(uint *)((int)aiStack_1c + iVar4 + 4) = 0x56df74;
    ProbeStackSpace(*(uint *)(auStack_10 + iVar4 + -4));
    iVar1 = -(DAT_005c1cf0 + 3U & 0xfffffffc);
    puVar6 = auStack_10 + iVar1 + iVar4;
    _DAT_005c1cf4 = auStack_10 + iVar1 + iVar4;
  }
  else {
    _DAT_005c1cf4 = (byte *)0x0;
  }
  _DAT_005c1cf4 = _DAT_005c1cf4 + DAT_005c1cf0;
  *(uint *)(puVar6 + -4) = 0x56df98;
  FUN_00571160();
  *(uint *)(puVar6 + -4) = 10;
  *(uint *)(puVar6 + -8) = DAT_005c1ccc;
  *(uint *)(puVar6 + -0xc) = 0;
  *(uint *)(puVar6 + -0x10) = 0;
  *(uint *)(puVar6 + -0x14) = 0x56dfac;
  pHVar3 = GetModuleHandleA(*(LPCSTR *)(puVar6 + -0x10));
  *(HMODULE *)(puVar6 + -0x10) = pHVar3;
  *(uint *)(puVar6 + -0x14) = 0x56dfb2;
  iVar4 = wincore_winrun_cpp_winMain_FUN_00559260
                    (*(HINSTANCE *)(puVar6 + -0x10),*(HINSTANCE *)(puVar6 + -0xc),
                     *(LPSTR *)(puVar6 + -8),*(int *)(puVar6 + -4));
  *(int *)(puVar6 + -4) = iVar4;
  *(uint *)(puVar6 + -8) = 0x56dfb8;
  ExitApplication(*(int *)(puVar6 + -4));
  return;
}
