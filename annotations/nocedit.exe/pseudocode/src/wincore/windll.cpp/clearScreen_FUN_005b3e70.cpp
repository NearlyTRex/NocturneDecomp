// Name: wincore_windll.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
// Address Range: [[005b3e70, 005b3ed3]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_clearScreen_FUN_005b3e70(void)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3e70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_UseExternalRenderer != 0) {
    wincore_windll_cpp_clear_FUN_005b7a30();
    return;
  }
  iVar4 = 0;
  do {
    g_ClearColor = g_SelectedClearColor;
    pdVar5 = g_ScreenBufferArray[iVar4];
    uVar2 = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
    do {
      *pdVar5 = g_ClearColor;
      pdVar5[1] = g_ClearColor;
      pdVar5[2] = g_ClearColor;
      pdVar5[3] = g_ClearColor;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_WindowHeight);
  return;
}
