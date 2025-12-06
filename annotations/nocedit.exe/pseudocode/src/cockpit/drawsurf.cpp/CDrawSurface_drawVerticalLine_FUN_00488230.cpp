// Name: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
// Address: 00488230
// Address Range: [[00488230, 00488400]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface * this_ptr, int x, int start_y, int end_y)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230
          (CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = x + this_ptr->x;
  iVar3 = start_y + this_ptr->y;
  iVar4 = end_y + this_ptr->y;
  if ((this_ptr->clip_left <= iVar6) && (iVar6 <= this_ptr->clip_right)) {
    if (iVar3 < this_ptr->clip_top) {
      iVar3 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar4) {
      iVar4 = this_ptr->clip_bottom;
    }
    if (iVar3 <= iVar4) {
      iVar2 = iVar6 * 2;
      iVar5 = iVar4 * 4;
      iVar3 = iVar3 * 4;
      if (g_UseRGBConversion != 0) {
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            return;
          }
        }
        else {
          if ((uint)g_BitsPerPixel < 0x11) {
            do {
              piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> ((byte)g_OriginalColorValue & 0x1f) &
                   (ushort)g_PackedPixelColor;
            } while (iVar3 == iVar5 || SBORROW /* signed borrow */4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
            return;
          }
          if (g_BitsPerPixel == 0x20) {
            do {
              puVar7 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar3) + iVar6 * 4);
              iVar3 = iVar3 + 4;
              *puVar7 = *puVar7 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
            } while (iVar3 == iVar5 || SBORROW /* signed borrow */4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
            return;
          }
        }
        g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
        g_CurrentLineNumber = 0x3fb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00488313:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 0x3db;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(byte *)(iVar6 + *piVar1) = (byte)g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW /* signed borrow */4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(ushort *)(*piVar1 + iVar2) = (ushort)g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW /* signed borrow */4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_00488313;
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(int *)(*piVar1 + iVar6 * 4) = g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW /* signed borrow */4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
    }
  }
  return;
}
