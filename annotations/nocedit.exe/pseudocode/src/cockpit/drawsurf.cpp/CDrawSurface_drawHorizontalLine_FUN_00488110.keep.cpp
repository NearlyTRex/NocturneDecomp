// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
// Address: 00488110
// MANUAL RECONSTRUCTION
// Address Range: [[00488110, 0048822a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface *this_ptr,int start_x,int y,int end_x)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface *this_ptr,int start_x,int y,int end_x)

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
      if (g_UseRGBConversion != 0) {
        cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
                  (start_x_00,end_x_00,y_00);
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel == 8) {
          memset
                    (&((char *)g_ScreenBufferArray[y_00])[start_x_00],g_CurrentDrawColor,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if ((uint)g_BitsPerPixel < 0x11) {
          puVar1 = &((ushort *)g_ScreenBufferArray[y_00])[start_x_00];
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = (ushort)g_CurrentDrawColor;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (g_BitsPerPixel == 0x20) {
          piVar2 = &((int *)g_ScreenBufferArray[y_00])[start_x_00];
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = g_CurrentDrawColor;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
      g_CurrentLineNumber = 933;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}
