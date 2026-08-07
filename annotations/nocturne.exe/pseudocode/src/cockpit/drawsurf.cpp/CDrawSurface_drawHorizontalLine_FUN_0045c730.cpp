// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
// Address: 0045c730
// Address Range: [[0045c730, 0045c84a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(CDrawSurface *this_ptr,int start_x,int y,int end_x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(CDrawSurface *this_ptr,int start_x,int y,int end_x)

{
  int start_x_00;
  int end_x_00;
  ushort *puVar1;
  int *piVar2;
  int y_00;
  
  end_x_00 = end_x + this_ptr->x;
  start_x_00 = start_x + this_ptr->x;
  y_00 = y + this_ptr->y;
  if ((this_ptr->clip_top <= y_00) && (y_00 <= this_ptr->clip_bottom)) {
    if (start_x_00 < this_ptr->clip_left) {
      start_x_00 = this_ptr->clip_left;
    }
    if (this_ptr->clip_right < end_x_00) {
      end_x_00 = this_ptr->clip_right;
    }
    if (start_x_00 <= end_x_00) {
      if (_DAT_01b4d71c != 0) {
        cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(start_x_00,end_x_00,y_00);
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel == 8) {
          memset
                    ((void *)((int)g_ScreenBufferArray[y_00] + start_x_00),_DAT_01b4d710,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if ((uint)g_BitsPerPixel < 0x11) {
          puVar1 = (ushort *)(start_x_00 * 2 + (int)g_ScreenBufferArray[y_00]);
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = _DAT_01b4d710;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (g_BitsPerPixel == 0x20) {
          piVar2 = (int *)(start_x_00 * 4 + (int)g_ScreenBufferArray[y_00]);
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = _DAT_01b4d710;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
      g_CurrentLineNumber = 933;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}
