// Name: engine_special.cpp_presentToExternalRenderer_FUN_005b7c30
// Address: 005b7c30
// Address Range: [[005b7c30, 005b7cfb]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)

#include "nocturne.h"

void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar3;
  int iVar4;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_8;
  
  puVar4 = g_ScreenBufferArray[0];
  bVar7 = 0;
  if (g_UseExternalRenderer == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (g_ExternalFrameLocked == 0)) {
    iVar3 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar1 = (int)((g_WindowWidth * g_BitsPerPixel + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    engine_special_cpp_lockFrame_FUN_005b7210();
    local_8 = 0;
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        puVar5 = puVar4;
        puVar6 = *(uint **)((int)g_ScreenBufferArray + iVar4);
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = puVar5;
          puVar6 = puVar6;
        }
        iVar4 = iVar4 + 4;
        local_8 = local_8 + 1;
        puVar4 = (uint *)((int)puVar4 + uVar1);
      } while (local_8 < g_WindowHeight);
    }
    engine_special_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
  }
  g_ExternalFrameLocked = 0;
  (*g_APIDLL_toggle)();
  return;
}
