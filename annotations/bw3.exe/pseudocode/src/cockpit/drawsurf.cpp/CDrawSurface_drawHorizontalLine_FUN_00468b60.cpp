// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60
// Address: 00468b60
// Address Range: [[00468b60, 00468c7a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60(CDrawSurface *this_ptr,int start_x,int y,int end_x)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60(CDrawSurface *this_ptr,int start_x,int y,int end_x)

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
      if (g_INT_01bdd7c8 != 0) {
        cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_00468090(start_x_00,end_x_00,y_00);
        return;
      }
      if ((uint)g_INT_005fba20 < 0x10) {
        if (g_INT_005fba20 == 8) {
          memset
                    (g_ARRAY_PTR_01c5faec[y_00] + start_x_00,g_INT_01bdd7bc,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if ((uint)g_INT_005fba20 < 0x11) {
          puVar1 = (ushort *)(g_ARRAY_PTR_01c5faec[y_00] + start_x_00 * 2);
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = (ushort)g_INT_01bdd7bc;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (g_INT_005fba20 == 0x20) {
          piVar2 = (int *)(g_ARRAY_PTR_01c5faec[y_00] + start_x_00 * 4);
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = g_INT_01bdd7bc;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      g_CHAR_PTR_01d71de0 = "..\\cockpit\\drawsurf.cpp";
      g_INT_01d71de4 = 0x3a6;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}
