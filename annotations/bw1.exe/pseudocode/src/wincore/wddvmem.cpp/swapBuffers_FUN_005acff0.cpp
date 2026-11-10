// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
// Address: 005acff0
// Address Range: [[005acff0, 005ad26a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005acff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005acff0(void)

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
  
  puVar11 = DAT_00629010;
  bVar13 = 0;
  if (DAT_006260e4 != 0) {
    if (_DAT_01c50948 != 0) {
      engine_special_cpp_presentToExternalRenderer_FUN_00582990(0);
      _DAT_02c99314 = 0;
      wincore_winrun_cpp_FUN_005b2cf0();
      return;
    }
    if (_DAT_02c99314 == 0) {
      if (_DAT_02c9931c == 0) {
        local_20 = DAT_00629010;
        local_1c = DAT_0061b498 *
                   ((int)((DAT_0061b4a0 + (DAT_0061b4a0 >> 0x1f) * -8) -
                         (uint)((DAT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3);
        memset(local_8c,0,0x6c);
        local_8c[0] = 0x6c;
        iVar6 = (**(code **)(*_DAT_02c99304 + 100))(_DAT_02c99304,0,local_8c,1,0);
        iVar12 = _DAT_02c9932c * _DAT_02c99328 >> 0x1f;
        local_18 = (ulonglong *)
                   (local_68 +
                   ((int)((_DAT_02c9932c * _DAT_02c99328 + iVar12 * -8) - (uint)(iVar12 << 2 < 0))
                   >> 3) + local_7c * _DAT_02c99330);
        if ((iVar6 == 0) && (local_18 != (ulonglong *)0x0)) {
          local_14 = 0;
          if (0 < DAT_0061b49c) {
            do {
              uVar8 = local_1c;
              puVar11 = local_20;
              puVar10 = local_18;
              if (_DAT_01c51d00 == 0) {
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
            } while (local_14 < DAT_0061b49c);
          }
          iVar6 = (**(code **)(*_DAT_02c99304 + 0x80))(_DAT_02c99304,0);
          if (iVar6 != 0) {
            _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
            _DAT_01d1d404 = 0x381;
            core_main_c_FUN_005030e0("Unable to unlock front buffer");
            _DAT_02c99314 = 0;
            wincore_winrun_cpp_FUN_005b2cf0();
            return;
          }
        }
        goto LAB_005ad0c1;
      }
      _DAT_02c9931c = _DAT_01c50948;
      wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
      iVar6 = 0;
      if (0 < DAT_0061b49c) {
        iVar12 = 0;
        do {
          puVar5 = *(byte **)(&DAT_01c4354c + iVar12);
          iVar9 = 0;
          puVar10 = puVar11;
          if (0 < DAT_0061b498) {
            do {
              *puVar5 = *(byte *)puVar10;
              puVar11 = (ulonglong *)((int)puVar10 + 4);
              puVar5[1] = *(byte *)((int)puVar10 + 1);
              iVar9 = iVar9 + 1;
              puVar5[2] = *(byte *)((int)puVar10 + 2);
              puVar5 = puVar5 + 3;
              puVar10 = puVar11;
            } while (iVar9 < DAT_0061b498);
          }
          iVar6 = iVar6 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar6 < DAT_0061b49c);
      }
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
      _DAT_02c9931c = 1;
    }
    if (((_DAT_02c99304 != (int *)0x0) &&
        (iVar6 = (**(code **)(*_DAT_02c99304 + 0x2c))(_DAT_02c99304,0,1), iVar6 != 0)) &&
       (iVar6 == -0x7789fe3e)) {
      wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0();
    }
  }
LAB_005ad0c1:
  _DAT_02c99314 = 0;
  wincore_winrun_cpp_FUN_005b2cf0();
  return;
}
