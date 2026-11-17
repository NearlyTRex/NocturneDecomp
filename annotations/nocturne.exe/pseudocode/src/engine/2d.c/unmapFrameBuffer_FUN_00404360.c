// Name: engine_2d.c_unmapFrameBuffer_FUN_00404360
// Address: 00404360
// Address Range: [[00404360, 0040442b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00404360(void)

#include "nocturne.h"

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00404360(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  if (g_INT_006b023c == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2536;
    core_main_c_displayErrorAndQuit_FUN_004c8440("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_WindowWidth = g_INT_006b023c;
  g_WindowHeight = g_INT_006b0240;
  g_ClipLeft = g_INT_006b0244;
  g_ClipTop = g_INT_006b0248;
  g_ClipRight = g_INT_006b024c;
  g_ClipBottom = g_INT_006b0250;
  g_BitsPerPixel = g_INT_006b0254;
  if (0 < g_INT_006b0240) {
    iVar1 = g_INT_006b0240 * 4;
    iVar2 = 0;
    puVar3 = g_PTR_006b0258;
    do {
      *(byte **)((int)g_ScreenBufferArray + iVar2) = puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + g_INT_006b025c;
    } while (iVar2 < iVar1);
  }
  g_INT_006b023c = 0;
  return;
}
