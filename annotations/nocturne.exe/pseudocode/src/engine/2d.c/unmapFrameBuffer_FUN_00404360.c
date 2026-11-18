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
  
  if (g_StoredWindowWidth == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2536;
    core_main_c_displayErrorAndQuit_FUN_004c8440("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_WindowWidth = g_StoredWindowWidth;
  g_WindowHeight = g_StoredWindowHeight;
  g_ClipLeft = g_StoredClipLeft;
  g_ClipTop = g_StoredClipTop;
  g_ClipRight = g_StoredClipRight;
  g_ClipBottom = g_StoredClipBottom;
  g_BitsPerPixel = g_StoredBitsPerPixel;
  if (0 < g_StoredWindowHeight) {
    iVar1 = g_StoredWindowHeight * 4;
    iVar2 = 0;
    puVar3 = g_StoredMappedFrameBuffer;
    do {
      *(byte **)((int)g_ScreenBufferArray + iVar2) = puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + g_ScreenBufferStride;
    } while (iVar2 < iVar1);
  }
  g_StoredWindowWidth = 0;
  return;
}
