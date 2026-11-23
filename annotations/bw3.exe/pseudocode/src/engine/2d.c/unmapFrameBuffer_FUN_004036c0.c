// Name: engine_2d.c_unmapFrameBuffer_FUN_004036c0
// Address: 004036c0
// Address Range: [[004036c0, 0040378b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

#include "nocturne.h"

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  if (g_StoredWindowWidth == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2533;
    core_main_c_displayErrorAndQuit_FUN_004e4330("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_INT_005fba18 = g_StoredWindowWidth;
  g_INT_005fba1c = g_StoredWindowHeight;
  g_INT_01c6b5a8 = g_StoredClipLeft;
  g_INT_01c6b5ac = g_StoredClipTop;
  g_INT_01c6b5b0 = g_StoredClipRight;
  g_INT_01c6b5b4 = g_StoredClipBottom;
  g_INT_005fba20 = g_StoredBitsPerPixel;
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
