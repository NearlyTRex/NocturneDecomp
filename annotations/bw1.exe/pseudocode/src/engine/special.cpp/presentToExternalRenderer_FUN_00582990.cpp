// Name: engine_special.cpp_presentToExternalRenderer_FUN_00582990
// Address: 00582990
// Address Range: [[00582990, 00582a71]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)

#include "nocturne.h"

void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint local_12c4 [1200];
  
  bVar8 = 0;
  if (g_INT_01c50948 == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (g_INT_02c834d0 == 0)) {
    ppuVar5 = g_ARRAY_PTR_01c4354c;
    puVar6 = local_12c4;
    for (iVar2 = 0x4b0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar6 = *(byte *)ppuVar5;
      ppuVar5 = (byte **)((int)ppuVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    iVar2 = g_INT_0061b498 * g_INT_0061b4a0 >> 0x1f;
    uVar1 = (int)((g_INT_0061b498 * g_INT_0061b4a0 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
    engine_special_cpp_lockFrame_FUN_00581f50();
    if (0 < g_INT_0061b49c) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        puVar6 = *(uint **)((int)local_12c4 + iVar4);
        puVar7 = *(uint **)((int)g_ARRAY_PTR_01c4354c + iVar4);
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar7 = *(byte *)puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar2 < g_INT_0061b49c);
    }
    engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
  }
  g_INT_02c834d0 = 0;
  (*(code *)g_PTR_02c83390)();
  return;
}
