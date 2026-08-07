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
  int iVar3;
  
  if (DAT_006b023c == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2536;
    core_main_c_displayErrorAndQuit_FUN_004c8440("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_WindowWidth = DAT_006b023c;
  g_WindowHeight = DAT_006b0240;
  g_ClipLeft = DAT_006b0244;
  g_ClipTop = DAT_006b0248;
  g_ClipRight = DAT_006b024c;
  g_ClipBottom = DAT_006b0250;
  g_BitsPerPixel = DAT_006b0254;
  if (0 < DAT_006b0240) {
    iVar1 = DAT_006b0240 * 4;
    iVar2 = 0;
    iVar3 = DAT_006b0258;
    do {
      *(int *)((int)g_ScreenBufferArray + iVar2) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + DAT_006b025c;
    } while (iVar2 < iVar1);
  }
  DAT_006b023c = 0;
  return;
}
