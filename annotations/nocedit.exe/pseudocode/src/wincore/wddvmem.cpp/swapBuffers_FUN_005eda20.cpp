// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
// Address Range: [[005eda20, 005edc4e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)

{
  byte *puVar5;
  HRESULT HVar6;
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  int iVar7;
  int iVar4;
  byte *puVar8;
  byte *puVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  DDSURFACEDESC local_8c;
  ulonglong *local_20;
  int local_1c;
  ulonglong *local_18;
  int local_14;
  bool bVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar8 = g_BackBuffer;
  if (g_WindowActive != 0) {
    if (g_UseExternalRenderer != 0) {
      engine_special_cpp_presentToExternalRenderer_FUN_005b7c30(0);
      g_RenderingInProgress = 0;
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      return;
    }
    if (g_RenderingInProgress == 0) {
      if (g_UseSoftwareRendering == 0) {
        local_20 = g_BackBuffer;
        iVar4 = g_WindowWidth *
                ((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                      (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3);
        memset(&local_8c,0,0x6c);
        local_8c.dwSize = 0x6c;
        HVar1 = (*g_DirectDrawSurface->vtable->Lock)
                          (g_DirectDrawSurface,(RECT *)0x0,&local_8c,1,(void *)0x0);
        local_18 = local_8c.lpSurface;
        if ((HVar1 == 0) && (local_8c.lpSurface != (LPVOID)0x0)) {
          local_14 = 0;
          iVar2 = iVar4;
          puVar11 = (ulonglong *)puVar8;
          if (0 < g_WindowHeight) {
            do {
              do {
                uVar1 = puVar11[1];
                uVar2 = puVar11[2];
                uVar3 = puVar11[3];
                *(ulonglong *)local_8c.lpSurface = *puVar11;
                *(ulonglong *)((int)local_8c.lpSurface + 8) = uVar1;
                *(ulonglong *)((int)local_8c.lpSurface + 0x10) = uVar2;
                *(ulonglong *)((int)local_8c.lpSurface + 0x18) = uVar3;
                puVar11 = puVar11 + 4;
                local_8c.lpSurface = (LPVOID)((int)local_8c.lpSurface + 0x20);
                iVar3 = iVar2 + -0x20;
                bVar4 = 0x1f < iVar2;
                iVar2 = iVar3;
              } while (iVar3 != 0 && bVar4);
              puVar11 = (ulonglong *)((int)local_20 + iVar4);
              local_8c.lpSurface = (LPVOID)((int)local_18 + local_8c.dwPitchOrLinearSize.lPitch);
              local_14 = local_14 + 1;
              iVar2 = iVar4;
              local_18 = local_8c.lpSurface;
              local_20 = puVar11;
            } while (local_14 < g_WindowHeight);
          }
                    /* this unlocks the front direct draw buffer */
          HVar1 = (*g_DirectDrawSurface->vtable->Unlock)(g_DirectDrawSurface,(void *)0x0);
          if (HVar1 != 0) {
            g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
            g_CurrentLineNumber = 878;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to unlock front buffer");
            g_RenderingInProgress = 0;
            wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
            return;
          }
        }
        goto LAB_005edaf2;
      }
      g_UseSoftwareRendering = g_UseExternalRenderer;
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      iVar12 = 0;
      if (0 < g_WindowHeight) {
        iVar10 = 0;
        do {
          puVar5 = *(byte **)((int)g_ScreenBufferArray + iVar10);
          iVar7 = 0;
          if (0 < g_WindowWidth) {
            do {
              *puVar5 = *puVar8;
              puVar9 = puVar8 + 4;
              puVar5[1] = puVar8[1];
              iVar7 = iVar7 + 1;
              puVar5[2] = puVar8[2];
              puVar5 = puVar5 + 3;
              puVar8 = puVar9;
            } while (iVar7 < g_WindowWidth);
          }
          iVar12 = iVar12 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar12 < g_WindowHeight);
      }
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      g_UseSoftwareRendering = 1;
    }
    if (((g_DirectDrawSurface != (IDirectDrawSurface *)0x0) &&
        (HVar6 = (*g_DirectDrawSurface->vtable->Flip)
                           (g_DirectDrawSurface,(IDirectDrawSurface *)0x0,1), HVar6 != 0)) &&
       (HVar6 == SYSTEM_DDERR_SURFACELOST)) {
      wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
    }
  }
LAB_005edaf2:
  g_RenderingInProgress = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
  return;
}
