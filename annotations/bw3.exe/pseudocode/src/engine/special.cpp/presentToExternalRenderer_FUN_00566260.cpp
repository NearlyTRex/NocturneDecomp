// Name: engine_special.cpp_presentToExternalRenderer_FUN_00566260
// Address: 00566260
// Address Range: [[00566260, 00566341]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)

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
  if (_DAT_01c6cee8 == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (_DAT_02cf612c == 0)) {
    puVar5 = (uint *)&DAT_01c5faec;
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
    iVar2 = DAT_005fba18 * DAT_005fba20 >> 0x1f;
    uVar1 = (int)((DAT_005fba18 * DAT_005fba20 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0();
    engine_special_cpp_FUN_00565820();
    if (0 < DAT_005fba1c) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        puVar5 = *(uint **)((int)local_12c4 + iVar4);
        puVar6 = *(uint **)(&DAT_01c5faec + iVar4);
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
      } while (iVar2 < DAT_005fba1c);
    }
    engine_special_cpp_unlockFrame_FUN_00565870(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0();
  }
  _DAT_02cf612c = 0;
  (*_DAT_02cf5fec)();
  return;
}
