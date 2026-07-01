// Name: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
// Address: 00488230
// Address Range: [[00488230, 00488400]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface *this_ptr,int x,int start_y,int end_y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar2;
  int iVar3;
  int iVar6;
  int iVar4;
  int iVar7;
  int iVar5;
  uint *puVar6;
  int *piVar1;
  int iVar2;
  
  iVar5 = x + this_ptr->x;
  iVar3 = start_y + this_ptr->y;
  iVar4 = end_y + this_ptr->y;
  if ((this_ptr->clip_left <= iVar5) && (iVar5 <= this_ptr->clip_right)) {
    if (iVar3 < this_ptr->clip_top) {
      iVar3 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar4) {
      iVar4 = this_ptr->clip_bottom;
    }
    if (iVar3 <= iVar4) {
      iVar2 = iVar5 * 2;
      iVar7 = iVar4 * 4;
      iVar6 = iVar3 * 4;
      if (g_UseRGBConversion != 0) {
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            return;
          }
        }
        else {
          if ((uint)g_BitsPerPixel < 0x11) {
            do {
              piVar1 = (int *)((int)g_ScreenBufferArray + iVar6);
              iVar6 = iVar6 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> ((byte)g_OriginalColorValue & 0x1f) &
                   (ushort)g_PackedPixelColor;
            } while (iVar6 <= iVar7);
            return;
          }
          if (g_BitsPerPixel == 0x20) {
            do {
              puVar6 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar6) + iVar5 * 4);
              iVar6 = iVar6 + 4;
              *puVar6 = *puVar6 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
            } while (iVar6 <= iVar7);
            return;
          }
        }
        g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
        g_CurrentLineNumber = 1019;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00488313:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 987;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar2 = (int *)((int)g_ScreenBufferArray + iVar6);
          iVar6 = iVar6 + 4;
          *(byte *)(iVar5 + *piVar2) = (byte)g_CurrentDrawColor;
        } while (iVar6 <= iVar7);
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        do {
          piVar2 = (int *)((int)g_ScreenBufferArray + iVar6);
          iVar6 = iVar6 + 4;
          *(ushort *)(*piVar2 + iVar2) = (ushort)g_CurrentDrawColor;
        } while (iVar6 <= iVar7);
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_00488313;
        do {
          piVar2 = (int *)((int)g_ScreenBufferArray + iVar6);
          iVar6 = iVar6 + 4;
          *(int *)(*piVar2 + iVar5 * 4) = g_CurrentDrawColor;
        } while (iVar6 <= iVar7);
      }
    }
  }
  return;
}
