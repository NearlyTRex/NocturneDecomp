// Name: engine_special.cpp_presentToExternalRenderer_FUN_0055ff40
// Address: 0055ff40
// Address Range: [[0055ff40, 00560021]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(int skip_buffer_copy)

#include "nocturne.h"

void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(int skip_buffer_copy)

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
  if (g_INT_01c37788 == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (g_INT_0264bd00 == 0)) {
    ppuVar5 = g_ARRAY_PTR_01c2a38c;
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
    iVar2 = g_INT_006141b8 * g_INT_006141c0 >> 0x1f;
    uVar1 = (int)((g_INT_006141b8 * g_INT_006141c0 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_005890c0();
    engine_special_cpp_lockFrame_FUN_0055f500();
    if (0 < g_INT_006141bc) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        puVar6 = *(uint **)((int)local_12c4 + iVar4);
        puVar7 = *(uint **)((int)g_ARRAY_PTR_01c2a38c + iVar4);
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
      } while (iVar2 < g_INT_006141bc);
    }
    engine_special_cpp_unlockFrame_FUN_0055f550(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170();
  }
  g_INT_0264bd00 = 0;
  (*(code *)g_PTR_0264bbc0)();
  return;
}
