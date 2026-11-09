// Name: wincore_wddvmem.cpp_FUN_0057a8a0
// Address: 0057a8a0
// Address Range: [[0057a8a0, 0057ab1a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_0057a8a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_0057a8a0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  int iVar12;
  byte bVar13;
  uint local_8c [4];
  int local_7c;
  int local_68;
  ulonglong *local_20;
  uint local_1c;
  ulonglong *local_18;
  int local_14;
  
  puVar11 = DAT_0060b010;
  bVar13 = 0;
  if (DAT_00607288 != 0) {
    if (_DAT_01c6cee8 != 0) {
      engine_special_cpp_presentToExternalRenderer_FUN_00566260(0);
      _DAT_02d0bcf4 = 0;
      wincore_winrun_cpp_FUN_00580f70();
      return;
    }
    if (_DAT_02d0bcf4 == 0) {
      if (_DAT_02d0bcfc == 0) {
        local_20 = DAT_0060b010;
        local_1c = DAT_005fba18 *
                   ((int)((DAT_005fba20 + (DAT_005fba20 >> 0x1f) * -8) -
                         (uint)((DAT_005fba20 >> 0x1f) << 2 < 0)) >> 3);
        memset(local_8c,0,0x6c);
        local_8c[0] = 0x6c;
        iVar6 = (**(code **)(*_DAT_02d0bce4 + 100))(_DAT_02d0bce4,0,local_8c,1,0);
        iVar12 = _DAT_02d0bd0c * _DAT_02d0bd08 >> 0x1f;
        local_18 = (ulonglong *)
                   (local_68 +
                   ((int)((_DAT_02d0bd0c * _DAT_02d0bd08 + iVar12 * -8) - (uint)(iVar12 << 2 < 0))
                   >> 3) + local_7c * _DAT_02d0bd10);
        if ((iVar6 == 0) && (local_18 != (ulonglong *)0x0)) {
          local_14 = 0;
          if (0 < DAT_005fba1c) {
            do {
              uVar8 = local_1c;
              puVar11 = local_20;
              puVar10 = local_18;
              if (_DAT_01c6e2a0 == 0) {
                for (uVar8 = local_1c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(uint *)puVar10 = *(uint *)puVar11;
                  puVar11 = (ulonglong *)((int)puVar11 + (uint)bVar13 * -8 + 4);
                  puVar10 = (ulonglong *)((int)puVar10 + (uint)bVar13 * -8 + 4);
                }
                for (uVar8 = local_1c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(byte *)puVar10 = *(byte *)puVar11;
                  puVar11 = (ulonglong *)((int)puVar11 + (uint)bVar13 * -2 + 1);
                  puVar10 = (ulonglong *)((int)puVar10 + (uint)bVar13 * -2 + 1);
                }
              }
              else {
                do {
                  uVar1 = puVar11[1];
                  uVar2 = puVar11[2];
                  uVar3 = puVar11[3];
                  *puVar10 = *puVar11;
                  puVar10[1] = uVar1;
                  puVar10[2] = uVar2;
                  puVar10[3] = uVar3;
                  uVar7 = uVar8 - 0x20;
                  bVar4 = 0x1f < (int)uVar8;
                  uVar8 = uVar7;
                  puVar11 = puVar11 + 4;
                  puVar10 = puVar10 + 4;
                } while (uVar7 != 0 && bVar4);
              }
              local_20 = (ulonglong *)((int)local_20 + local_1c);
              local_18 = (ulonglong *)((int)local_18 + local_7c);
              local_14 = local_14 + 1;
            } while (local_14 < DAT_005fba1c);
          }
          iVar6 = (**(code **)(*_DAT_02d0bce4 + 0x80))(_DAT_02d0bce4,0);
          if (iVar6 != 0) {
            _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
            _DAT_01d71de4 = 0x381;
            core_main_c_FUN_004e4330("Unable to unlock front buffer");
            _DAT_02d0bcf4 = 0;
            wincore_winrun_cpp_FUN_00580f70();
            return;
          }
        }
        goto LAB_0057a971;
      }
      _DAT_02d0bcfc = _DAT_01c6cee8;
      wincore_wddvmem_cpp_FUN_0057a3c0();
      iVar6 = 0;
      if (0 < DAT_005fba1c) {
        iVar12 = 0;
        do {
          puVar5 = *(byte **)(&DAT_01c5faec + iVar12);
          iVar9 = 0;
          puVar10 = puVar11;
          if (0 < DAT_005fba18) {
            do {
              *puVar5 = *(byte *)puVar10;
              puVar11 = (ulonglong *)((int)puVar10 + 4);
              puVar5[1] = *(byte *)((int)puVar10 + 1);
              iVar9 = iVar9 + 1;
              puVar5[2] = *(byte *)((int)puVar10 + 2);
              puVar5 = puVar5 + 3;
              puVar10 = puVar11;
            } while (iVar9 < DAT_005fba18);
          }
          iVar6 = iVar6 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar6 < DAT_005fba1c);
      }
      wincore_wddvmem_cpp_FUN_0057a4b0();
      _DAT_02d0bcfc = 1;
    }
    if (((_DAT_02d0bce4 != (int *)0x0) &&
        (iVar6 = (**(code **)(*_DAT_02d0bce4 + 0x2c))(_DAT_02d0bce4,0,1), iVar6 != 0)) &&
       (iVar6 == -0x7789fe3e)) {
      wincore_wddvmem_cpp_videoRestore_FUN_0057ab70();
    }
  }
LAB_0057a971:
  _DAT_02d0bcf4 = 0;
  wincore_winrun_cpp_FUN_00580f70();
  return;
}
