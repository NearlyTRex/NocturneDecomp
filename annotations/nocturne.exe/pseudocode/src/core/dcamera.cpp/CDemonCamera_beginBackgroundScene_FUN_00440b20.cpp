// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
// Address: 00440b20
// Address Range: [[00440b20, 00440c4a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera *this_ptr)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  byte **ppuVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 1083;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_INT_0140efa8 = g_INT_0140efa8 + 1;
  if (g_INT_0140efa8 == 1) {
    g_INT_0140efac = g_BitsPerPixel;
    g_INT_0140efb0 = g_UseExternalRenderer;
    ppvVar3 = g_ScreenBufferArray;
    ppuVar4 = g_ARRAY_PTR_0140efb4;
    for (uVar1 = g_WindowHeight & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppuVar4 = *ppvVar3;
      ppvVar3 = ppvVar3 + (uint)bVar5 * -2 + 1;
      ppuVar4 = ppuVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppuVar4 = *(byte *)ppvVar3;
      ppvVar3 = (void **)((int)ppvVar3 + (uint)bVar5 * -2 + 1);
      ppuVar4 = (byte **)((int)ppuVar4 + (uint)bVar5 * -2 + 1);
    }
    g_INT_01410274 = (int)g_RedBitPosition;
    g_BitsPerPixel = 0x20;
    g_INT_01410278 = (int)g_GreenBitPosition;
    g_UseExternalRenderer = 0;
    g_INT_0141027c = (int)g_BlueBitPosition;
    g_GreenBitPosition.dword = 8;
    g_BlueBitPosition.dword = 0;
    g_RedBitPosition.dword = 0x10;
    iVar2 = 0;
    if (0 < (int)this_ptr->max_distance) {
      do {
        g_ScreenBufferArray[this_ptr->framebuffer_height + iVar2] =
             (void *)((int)this_ptr->framebuffer_aligned +
                     this_ptr->framebuffer_width * -4 + this_ptr->screen_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)this_ptr->max_distance);
      return;
    }
  }
  return;
}
