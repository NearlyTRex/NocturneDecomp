// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
// Address: 005acff0
// Address Range: [[005acff0, 005ad26a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005acff0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005acff0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  HRESULT HVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *puVar11;
  byte *puVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  byte bVar16;
  DDSURFACEDESC local_8c;
  ulonglong *local_20;
  uint local_1c;
  ulonglong *local_18;
  int local_14;
  
  puVar12 = g_PTR_00629010;
  bVar16 = 0;
  if (g_INT_006260e4 != 0) {
    if (g_INT_01c50948 != 0) {
      engine_special_cpp_presentToExternalRenderer_FUN_00582990(0);
      g_INT_02c99314 = 0;
      wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0();
      return;
    }
    if (g_INT_02c99314 == 0) {
      if (g_INT_02c9931c == 0) {
        local_20 = (ulonglong *)g_PTR_00629010;
        local_1c = g_INT_0061b498 *
                   ((int)((g_INT_0061b4a0 + (g_INT_0061b4a0 >> 0x1f) * -8) -
                         (uint)((g_INT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3);
        memset(&local_8c,0,0x6c);
        local_8c.dwSize = 0x6c;
        HVar6 = (*g_IDirectDrawSurface_PTR_02c99304->vtable->Lock)
                          (g_IDirectDrawSurface_PTR_02c99304,(RECT *)0x0,&local_8c,1,(void *)0x0);
        iVar7 = g_INT_02c9932c * g_INT_02c99328 >> 0x1f;
        local_18 = (ulonglong *)
                   ((int)local_8c.lpSurface +
                   ((int)((g_INT_02c9932c * g_INT_02c99328 + iVar7 * -8) - (uint)(iVar7 << 2 < 0))
                   >> 3) + local_8c.dwPitchOrLinearSize.lPitch * g_INT_02c99330);
        if ((HVar6 == 0) && (local_18 != (ulonglong *)0x0)) {
          local_14 = 0;
          if (0 < g_INT_0061b49c) {
            do {
              uVar9 = local_1c;
              puVar13 = local_20;
              puVar15 = local_18;
              if (g_INT_01c51d00 == 0) {
                for (uVar9 = local_1c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(uint *)puVar15 = *(uint *)puVar13;
                  puVar13 = (ulonglong *)((int)puVar13 + (uint)bVar16 * -8 + 4);
                  puVar15 = (ulonglong *)((int)puVar15 + (uint)bVar16 * -8 + 4);
                }
                for (uVar9 = local_1c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(byte *)puVar15 = *(byte *)puVar13;
                  puVar13 = (ulonglong *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                  puVar15 = (ulonglong *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                }
              }
              else {
                do {
                  uVar1 = puVar13[1];
                  uVar2 = puVar13[2];
                  uVar3 = puVar13[3];
                  *puVar15 = *puVar13;
                  puVar15[1] = uVar1;
                  puVar15[2] = uVar2;
                  puVar15[3] = uVar3;
                  uVar8 = uVar9 - 0x20;
                  bVar4 = 0x1f < (int)uVar9;
                  uVar9 = uVar8;
                  puVar13 = puVar13 + 4;
                  puVar15 = puVar15 + 4;
                } while (uVar8 != 0 && bVar4);
              }
              local_20 = (ulonglong *)((int)local_20 + local_1c);
              local_18 = (ulonglong *)((int)local_18 + local_8c.dwPitchOrLinearSize.lPitch);
              local_14 = local_14 + 1;
            } while (local_14 < g_INT_0061b49c);
          }
          HVar6 = (*g_IDirectDrawSurface_PTR_02c99304->vtable->Unlock)
                            (g_IDirectDrawSurface_PTR_02c99304,(void *)0x0);
          if (HVar6 != 0) {
            g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
            g_INT_01d1d404 = 0x381;
            core_main_c_displayErrorAndQuit_FUN_005030e0("Unable to unlock front buffer");
            g_INT_02c99314 = 0;
            wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0();
            return;
          }
        }
        goto LAB_005ad0c1;
      }
      g_INT_02c9931c = g_INT_01c50948;
      wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
      iVar7 = 0;
      if (0 < g_INT_0061b49c) {
        iVar14 = 0;
        do {
          puVar5 = *(byte **)((int)g_ARRAY_PTR_01c4354c + iVar14);
          iVar10 = 0;
          puVar11 = puVar12;
          if (0 < g_INT_0061b498) {
            do {
              *puVar5 = *puVar11;
              puVar12 = puVar11 + 4;
              puVar5[1] = puVar11[1];
              iVar10 = iVar10 + 1;
              puVar5[2] = puVar11[2];
              puVar5 = puVar5 + 3;
              puVar11 = puVar12;
            } while (iVar10 < g_INT_0061b498);
          }
          iVar7 = iVar7 + 1;
          iVar14 = iVar14 + 4;
        } while (iVar7 < g_INT_0061b49c);
      }
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
      g_INT_02c9931c = 1;
    }
    if (((g_IDirectDrawSurface_PTR_02c99304 != (IDirectDrawSurface *)0x0) &&
        (HVar6 = (*g_IDirectDrawSurface_PTR_02c99304->vtable->Flip)
                           (g_IDirectDrawSurface_PTR_02c99304,(IDirectDrawSurface *)0x0,1),
        HVar6 != 0)) && (HVar6 == -0x7789fe3e)) {
      wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0();
    }
  }
LAB_005ad0c1:
  g_INT_02c99314 = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0();
  return;
}
