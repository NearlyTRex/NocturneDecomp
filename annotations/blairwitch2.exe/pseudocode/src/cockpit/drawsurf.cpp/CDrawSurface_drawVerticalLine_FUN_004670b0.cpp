// Name: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0
// Address: 004670b0
// Address Range: [[004670b0, 00467280]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(CDrawSurface *this_ptr,int x,int start_y,int end_y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
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
      iVar4 = iVar4 * 4;
      iVar3 = iVar3 * 4;
      if (g_INT_01ba5c34 != 0) {
        if ((uint)g_INT_006141c0 < 0x10) {
          if (g_INT_006141c0 == 8) {
            return;
          }
        }
        else {
          if ((uint)g_INT_006141c0 < 0x11) {
            do {
              piVar1 = (int *)((int)g_ARRAY_PTR_01c2a38c + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> ((byte)g_INT_01ba5c38 & 0x1f) &
                   (ushort)g_INT_01ba5c48;
            } while (iVar3 <= iVar4);
            return;
          }
          if (g_INT_006141c0 == 0x20) {
            do {
              puVar6 = (uint *)(*(int *)((int)g_ARRAY_PTR_01c2a38c + iVar3) + iVar5 * 4);
              iVar3 = iVar3 + 4;
              *puVar6 = *puVar6 >> ((byte)g_INT_01ba5c38 & 0x1f) & g_INT_01ba5c48;
            } while (iVar3 <= iVar4);
            return;
          }
        }
        g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
        g_INT_01d046a4 = 0x3fb;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel!");
        return;
      }
      if ((uint)g_INT_006141c0 < 0x10) {
        if (g_INT_006141c0 != 8) {
LAB_00467193:
          g_CHAR_PTR_01d046a0 = "..\\cockpit\\drawsurf.cpp";
          g_INT_01d046a4 = 0x3db;
          core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)((int)g_ARRAY_PTR_01c2a38c + iVar3);
          iVar3 = iVar3 + 4;
          *(byte *)(iVar5 + *piVar1) = (byte)g_INT_01ba5c28;
        } while (iVar3 <= iVar4);
      }
      else if ((uint)g_INT_006141c0 < 0x11) {
        do {
          piVar1 = (int *)((int)g_ARRAY_PTR_01c2a38c + iVar3);
          iVar3 = iVar3 + 4;
          *(ushort *)(*piVar1 + iVar2) = (ushort)g_INT_01ba5c28;
        } while (iVar3 <= iVar4);
      }
      else {
        if (g_INT_006141c0 != 0x20) goto LAB_00467193;
        do {
          piVar1 = (int *)((int)g_ARRAY_PTR_01c2a38c + iVar3);
          iVar3 = iVar3 + 4;
          *(int *)(*piVar1 + iVar5 * 4) = g_INT_01ba5c28;
        } while (iVar3 <= iVar4);
      }
    }
  }
  return;
}
