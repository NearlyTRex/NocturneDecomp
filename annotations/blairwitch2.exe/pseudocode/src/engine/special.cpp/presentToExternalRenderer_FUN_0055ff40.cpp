// Name: engine_special.cpp_presentToExternalRenderer_FUN_0055ff40
// Address: 0055ff40
// Address Range: [[0055ff40, 00560021]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(int skip_buffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(int skip_buffer_copy)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_12c4 [1200];
  
  bVar7 = 0;
  if (_DAT_01c37788 == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (_DAT_0264bd00 == 0)) {
    puVar5 = (uint *)&DAT_01c2a38c;
    puVar6 = local_12c4;
    for (iVar2 = 0x4b0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    iVar2 = DAT_006141b8 * DAT_006141c0 >> 0x1f;
    uVar1 = (int)((DAT_006141b8 * DAT_006141c0 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_FUN_005890c0();
    engine_special_cpp_FUN_0055f500();
    if (0 < DAT_006141bc) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        puVar5 = *(uint **)((int)local_12c4 + iVar4);
        puVar6 = *(uint **)(&DAT_01c2a38c + iVar4);
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar2 < DAT_006141bc);
    }
    engine_special_cpp_FUN_0055f550(0);
    wincore_wddvmem_cpp_FUN_00589170();
  }
  _DAT_0264bd00 = 0;
  (*_DAT_0264bbc0)();
  return;
}
