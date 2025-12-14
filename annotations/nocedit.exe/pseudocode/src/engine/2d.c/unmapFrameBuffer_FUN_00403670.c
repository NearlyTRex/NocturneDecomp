// Name: engine_2d.c_unmapFrameBuffer_FUN_00403670
// Address: 00403670
// Address Range: [[00403670, 0040373b]]
// Convention: __cdecl
// Signature: void engine_2d.c_unmapFrameBuffer_FUN_00403670(void)

#include "nocturne.h"

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00403670(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  if (g_StoredWindowWidth == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9ea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("unmapFrameBuffer - frame buffer was not mapped!");
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
    pvVar3 = g_StoredMappedFrameBuffer;
    do {
      *(void **)((int)g_ScreenBufferArray + iVar2) = pvVar3;
      iVar2 = iVar2 + 4;
      pvVar3 = (void *)((int)pvVar3 + g_ScreenBufferStride);
    } while (iVar2 < iVar1);
  }
  g_StoredWindowWidth = 0;
  return;
}
