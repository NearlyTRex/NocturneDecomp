// Name: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
// Address: 00488ad0
// Address Range: [[00488ad0, 00488c68]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_00488ad0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int *piVar1;
  ushort *puVar2;
  int end_x;
  int iVar3;
  int iVar4;
  int iVar5;
  int start_x;
  
  end_x = x2 + this_ptr->x;
  start_x = x1 + this_ptr->x;
  iVar4 = y1 + this_ptr->y;
  iVar3 = y2 + this_ptr->y;
  if (start_x < this_ptr->clip_left) {
    start_x = this_ptr->clip_left;
  }
  if (this_ptr->clip_right < end_x) {
    end_x = this_ptr->clip_right;
  }
  if (start_x <= end_x) {
    if (iVar4 < this_ptr->clip_top) {
      iVar4 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar3) {
      iVar3 = this_ptr->clip_bottom;
    }
    if (iVar4 <= iVar3) {
      if (g_UseRGBConversion == 0) {
        iVar3 = iVar3 * 4;
        iVar4 = iVar4 * 4;
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            do {
              piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
              iVar4 = iVar4 + 4;
              crt_memory_c_memset_FUN_005fde40
                        ((void *)(*piVar1 + start_x),g_CurrentDrawColor,(end_x - start_x) + 1);
            } while (iVar4 <= iVar3);
            return;
          }
LAB_00488c3e:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 0x524;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
          return;
        }
        if ((uint)g_BitsPerPixel < 0x11) {
          do {
            if (start_x <= end_x) {
              iVar5 = start_x;
              puVar2 = (ushort *)(start_x * 2 + *(int *)((int)g_ScreenBufferArray + iVar4));
              do {
                iVar5 = iVar5 + 1;
                *puVar2 = (ushort)g_CurrentDrawColor;
                puVar2 = puVar2 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
        else {
          if (g_BitsPerPixel != 0x20) goto LAB_00488c3e;
          do {
            if (start_x <= end_x) {
              piVar1 = (int *)(start_x * 4 + *(int *)((int)g_ScreenBufferArray + iVar4));
              iVar5 = start_x;
              do {
                iVar5 = iVar5 + 1;
                *piVar1 = g_CurrentDrawColor;
                piVar1 = piVar1 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
      }
      else {
        do {
          iVar5 = iVar4 + 1;
          cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
                    (start_x,end_x,iVar4);
          iVar4 = iVar5;
        } while (iVar5 <= iVar3);
      }
    }
  }
  return;
}
