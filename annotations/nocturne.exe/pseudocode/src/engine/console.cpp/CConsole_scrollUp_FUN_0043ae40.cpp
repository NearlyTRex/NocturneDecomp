// Name: engine_console.cpp_CConsole_scrollUp_FUN_0043ae40
// Address: 0043ae40
// Address Range: [[0043ae40, 0043aeba]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(int param_1)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar6 = 0;
  puVar5 = (uint *)(param_1 + 0x54);
  puVar4 = (uint *)(param_1 + 4);
  while (iVar1 = *(int *)(param_1 + 0xfb0) + -1, iVar6 < iVar1) {
    uVar3 = *(uint *)(param_1 + 0xfac);
    iVar6 = iVar6 + 1;
    puVar7 = puVar5;
    puVar8 = puVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    puVar4 = puVar4 + 0x14;
    puVar5 = puVar5 + 0x14;
  }
  memset
            ((uint *)(param_1 + 4) + iVar1 * 0x14,0,*(uint *)(param_1 + 0xfac));
  return;
}
