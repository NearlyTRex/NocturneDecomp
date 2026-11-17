// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_00589170
// Address: 00589170
// Address Range: [[00589170, 00589247]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_INT_02661afc == 0) {
    if (g_INT_01c37788 != 0) {
      g_INT_02661af4 = 1;
      return;
    }
    if (0 < g_INT_006141bc) {
      iVar5 = g_INT_006141c0 >> 0x1f;
      iVar1 = g_INT_006141c0 + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_INT_006141b8 * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(byte **)((int)g_ARRAY_PTR_01c2a38c + iVar2) =
             g_PTR_00622010 + g_INT_006141b8 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3);
        iVar4 = iVar4 + 1;
        *(byte **)((int)g_UINT_PTR_ARRAY_01c2b64c + iVar2) = g_PTR_0070c62c + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_INT_006141bc);
    }
    HVar3 = (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Unlock)
                      (g_IDirectDrawSurface_PTR_02661ae8,(void *)0x0);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d046a4 = 0x265;
      core_main_c_displayErrorAndQuit_FUN_004e4500("closeScreenDevice - Unable to unlock");
    }
    g_INT_02661af4 = 1;
  }
  return;
}
