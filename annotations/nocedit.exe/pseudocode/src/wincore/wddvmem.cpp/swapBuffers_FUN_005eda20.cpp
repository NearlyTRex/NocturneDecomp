// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
// Address Range: [[005eda20, 005edc4e]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  HRESULT HVar6;
  int iVar7;
  byte *puVar8;
  ulonglong *puVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  int iVar11;
  DWORD local_8c [3];
  DWORD DStack_80;
  DDSURFACEDESC_union1 in_stack_ffffff84;
  ulonglong *local_68;
  ulonglong *local_20;
  ulonglong *local_18;
  int local_14;
  
  puVar9 = g_BackBuffer;
  if (g_WindowActive != 0) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(0);
      g_RenderingInProgress = 0;
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      return;
    }
    if (g_RenderingInProgress == 0) {
      if (g_UseSoftwareRendering == 0) {
        local_20 = g_BackBuffer;
        iVar11 = g_WindowWidth *
                 ((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                       (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3);
        crt_memory_c_memset_FUN_005fde40(local_8c,0,0x6c);
        local_8c[0] = 0x6c;
        HVar6 = (*g_DirectDrawSurface->vtable->Lock)
                          (g_DirectDrawSurface,(RECT *)0x0,(DDSURFACEDESC *)local_8c,1,(void *)0x0);
        local_18 = local_68;
        if ((HVar6 == 0) && (local_68 != (ulonglong *)0x0)) {
          local_14 = 0;
          iVar10 = iVar11;
          if (0 < g_WindowHeight) {
            do {
              do {
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *local_68 = *puVar9;
                local_68[1] = uVar1;
                local_68[2] = uVar2;
                local_68[3] = uVar3;
                puVar9 = puVar9 + 4;
                local_68 = local_68 + 4;
                iVar7 = iVar10 + -0x20;
                bVar4 = 0x1f < iVar10;
                iVar10 = iVar7;
              } while (iVar7 != 0 && bVar4);
              puVar9 = (ulonglong *)((int)local_20 + iVar11);
              local_68 = (ulonglong *)((int)local_18 + in_stack_ffffff84.lPitch);
              local_14 = local_14 + 1;
              iVar10 = iVar11;
              local_18 = local_68;
              local_20 = puVar9;
            } while (local_14 < g_WindowHeight);
          }
                    /* this unlocks the front direct draw buffer */
          DStack_80 = 0x5edc10;
          HVar6 = (*g_DirectDrawSurface->vtable->Unlock)(g_DirectDrawSurface,(void *)0x0);
          if (HVar6 != 0) {
            g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
            g_CurrentLineNumber = 0x36e;
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
      iVar11 = 0;
      if (0 < g_WindowHeight) {
        iVar10 = 0;
        do {
          puVar5 = *(byte **)((int)g_ScreenBufferArray + iVar10);
          iVar7 = 0;
          puVar8 = (byte *)puVar9;
          if (0 < g_WindowWidth) {
            do {
              *puVar5 = *puVar8;
              puVar9 = (ulonglong *)(puVar8 + 4);
              puVar5[1] = puVar8[1];
              iVar7 = iVar7 + 1;
              puVar5[2] = puVar8[2];
              puVar5 = puVar5 + 3;
              puVar8 = (byte *)puVar9;
            } while (iVar7 < g_WindowWidth);
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar11 < g_WindowHeight);
      }
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      g_UseSoftwareRendering = 1;
    }
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      local_8c[0] = 0x5edae2;
      HVar6 = (*g_DirectDrawSurface->vtable->Flip)(g_DirectDrawSurface,(IDirectDrawSurface *)0x0,1);
      if ((HVar6 != 0) && (HVar6 == SYSTEM_DDERR_SURFACELOST)) {
        wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
      }
    }
  }
LAB_005edaf2:
  g_RenderingInProgress = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
  return;
}
