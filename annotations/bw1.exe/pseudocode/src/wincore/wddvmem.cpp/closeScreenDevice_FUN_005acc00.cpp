// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00
// Address: 005acc00
// Address Range: [[005acc00, 005accd7]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_INT_02c9931c == 0) {
    if (g_INT_01c50948 != 0) {
      g_INT_02c99314 = 1;
      return;
    }
    if (0 < g_INT_0061b49c) {
      iVar5 = g_INT_0061b4a0 >> 0x1f;
      iVar1 = g_INT_0061b4a0 + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_INT_0061b498 * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(byte **)((int)g_ARRAY_PTR_01c4354c + iVar2) =
             g_PTR_00629010 + g_INT_0061b498 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3);
        iVar4 = iVar4 + 1;
        *(byte **)((int)g_UINT_PTR_ARRAY_01c4480c + iVar2) = g_PTR_0071362c + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_INT_0061b49c);
    }
    HVar3 = (*g_IDirectDrawSurface_PTR_02c99308->vtable->Unlock)
                      (g_IDirectDrawSurface_PTR_02c99308,(void *)0x0);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d1d404 = 0x28f;
      core_main_c_displayErrorAndQuit_FUN_005030e0("closeScreenDevice - Unable to unlock");
    }
    g_INT_02c99314 = 1;
  }
  return;
}
