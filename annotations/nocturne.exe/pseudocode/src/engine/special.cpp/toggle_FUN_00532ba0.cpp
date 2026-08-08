// Name: engine_special.cpp_toggle_FUN_00532ba0
// Address: 00532ba0
// Address Range: [[00532ba0, 00532c66]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_toggle_FUN_00532ba0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_toggle_FUN_00532ba0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_8;
  
  puVar4 = g_ScreenBufferArray[0];
  bVar7 = 0;
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  if (g_ExternalFrameLocked == 0) {
    iVar3 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar1 = (int)((g_WindowWidth * g_BitsPerPixel + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    engine_special_cpp_lockFrame_FUN_005322e0();
    local_8 = 0;
    if (0 < g_WindowHeight) {
      iVar3 = 0;
      do {
        puVar5 = puVar4;
        puVar6 = *(uint **)((int)g_ScreenBufferArray + iVar3);
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar3 = iVar3 + 4;
        local_8 = local_8 + 1;
        puVar4 = (uint *)((int)puVar4 + uVar1);
      } while (local_8 < g_WindowHeight);
    }
    engine_special_cpp_unlockFrame_FUN_00532320();
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  }
  g_ExternalFrameLocked = 0;
  iVar3 = (*g_APIDLL_toggle)();
  return iVar3;
}
