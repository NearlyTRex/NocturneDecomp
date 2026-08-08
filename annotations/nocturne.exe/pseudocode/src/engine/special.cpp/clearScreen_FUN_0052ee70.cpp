// Name: engine_special.cpp_clearScreen_FUN_0052ee70
// Address: 0052ee70
// Address Range: [[0052ee70, 0052eed3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_UseExternalRenderer != 0) {
    engine_special_cpp_clear_FUN_005329a0();
    return;
  }
  iVar4 = 0;
  do {
    g_BufferFillFpuPopST0 = g_BufferFillZeroQword;
    pdVar5 = g_ScreenBufferArray[iVar4];
    uVar2 = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
    do {
      *pdVar5 = g_BufferFillFpuPopST0;
      pdVar5[1] = g_BufferFillFpuPopST0;
      pdVar5[2] = g_BufferFillFpuPopST0;
      pdVar5[3] = g_BufferFillFpuPopST0;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_WindowHeight);
  return;
}
