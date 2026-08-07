// Name: wincore_wddvmem.cpp_swapBuffers_FUN_00553910
// Address: 00553910
// Address Range: [[00553910, 00553b64]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  HRESULT HVar6;
  int iVar7;
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
  
  puVar9 = g_BackBuffer;
  if (g_UseExternalRenderer != 0) {
    engine_special_cpp_FUN_00532ba0();
    _DAT_02ddf564 = 0;
    wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
    return;
  }
  if (_DAT_02ddf564 == 0) {
    if (_DAT_02ddf56c == 0) {
      local_20 = g_BackBuffer;
      local_1c = g_WindowWidth *
                 ((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                       (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3);
      memset(&local_8c,0,0x6c);
      local_8c.dwSize = 0x6c;
      HVar6 = (*g_DirectDrawSurface->vtable->Lock)
                        (g_DirectDrawSurface,(RECT *)0x0,&local_8c,1,(void *)0x0);
      if (HVar6 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 838;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to lock front buffer");
      }
      local_18 = local_8c.lpSurface;
      local_14 = 0;
      iVar12 = local_1c;
      puVar11 = local_20;
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
            local_8c.lpSurface = (LPVOID)((int)local_8c.lpSurface + 0x20);
            iVar10 = iVar12 + -0x20;
            bVar4 = 0x1f < iVar12;
            iVar12 = iVar10;
            puVar11 = puVar11 + 4;
          } while (iVar10 != 0 && bVar4);
          puVar11 = (ulonglong *)((int)local_20 + local_1c);
          local_8c.lpSurface = (LPVOID)((int)local_18 + local_8c.dwPitchOrLinearSize.lPitch);
          local_14 = local_14 + 1;
          iVar12 = local_1c;
          local_20 = puVar11;
          local_18 = local_8c.lpSurface;
        } while (local_14 < g_WindowHeight);
      }
      HVar6 = (*g_DirectDrawSurface->vtable->Unlock)(g_DirectDrawSurface,(void *)0x0);
      if (HVar6 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 872;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to unlock front buffer");
        _DAT_02ddf564 = 0;
        wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
        return;
      }
      goto LAB_005539be;
    }
    _DAT_02ddf56c = g_UseExternalRenderer;
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    iVar12 = 0;
    if (0 < g_WindowHeight) {
      iVar10 = 0;
      do {
        puVar5 = *(byte **)((int)g_ScreenBufferArray + iVar10);
        iVar7 = 0;
        puVar8 = puVar9;
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
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
    _DAT_02ddf56c = 1;
  }
  if (((g_DirectDrawSurface != (IDirectDrawSurface *)0x0) &&
      (HVar6 = (*g_DirectDrawSurface->vtable->Flip)(g_DirectDrawSurface,(IDirectDrawSurface *)0x0,1)
      , HVar6 != 0)) && (HVar6 == -0x7789fe3e)) {
    wincore_wddvmem_cpp_FUN_00553ba0();
    _DAT_02ddf564 = 0;
    wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
    return;
  }
LAB_005539be:
  _DAT_02ddf564 = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
  return;
}
