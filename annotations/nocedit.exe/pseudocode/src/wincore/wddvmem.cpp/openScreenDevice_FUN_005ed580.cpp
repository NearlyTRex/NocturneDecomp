// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
// Address: 005ed580
// Address Range: [[005ed580, 005ed62f]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  DWORD DStack_70;
  DWORD DStack_68;
  DWORD DStack_44;
  DWORD DStack_30;
  
  if ((g_UseSoftwareRendering == 0) && (g_UseExternalRenderer == 0)) {
    crt_memory_c_memset_FUN_005fde40(&stack0xffffff8c,0,0x6c);
    DStack_70 = 0x6c;
    HVar3 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,(DDSURFACEDESC *)&DStack_70,1,(void *)0x0
                      );
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x255;
      DStack_68 = 0x5ed5fb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("openScreenDevice - Unable to lock screen!");
    }
    iVar2 = g_WindowHeight;
    if (0 < g_WindowHeight) {
      iVar1 = g_WindowHeight * 4;
      iVar4 = 0;
      do {
        *(DWORD *)((int)g_ScreenBufferArray + iVar4) = DStack_30;
        iVar4 = iVar4 + 4;
        DStack_30 = DStack_30 + DStack_44;
      } while (SBORROW /* signed borrow */4(iVar4,iVar1) != iVar4 + iVar2 * -4 < 0);
      return;
    }
  }
  return;
}
