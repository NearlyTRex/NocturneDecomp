// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0047f4a0
// Address: 0047f4a0
// Address Range: [[0047f4a0, 0047f5ba]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0047f4a0(CDrawSurface *this_ptr,int start_x,int y,int end_x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0047f4a0(CDrawSurface *this_ptr,int start_x,int y,int end_x)

{
  int start_x_00;
  int end_x_00;
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  
  end_x_00 = end_x + this_ptr->x;
  start_x_00 = start_x + this_ptr->x;
  iVar3 = y + this_ptr->y;
  if ((this_ptr->clip_top <= iVar3) && (iVar3 <= this_ptr->clip_bottom)) {
    if (start_x_00 < this_ptr->clip_left) {
      start_x_00 = this_ptr->clip_left;
    }
    if (this_ptr->clip_right < end_x_00) {
      end_x_00 = this_ptr->clip_right;
    }
    if (start_x_00 <= end_x_00) {
      if (_DAT_01bc11f0 != 0) {
        cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0047e9d0(start_x_00,end_x_00,iVar3);
        return;
      }
      iVar3 = iVar3 * 4;
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 == 8) {
          memset
                    ((void *)(*(int *)(&DAT_01c4354c + iVar3) + start_x_00),_DAT_01bc11e4,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if (DAT_0061b4a0 < 0x11) {
          puVar1 = (ushort *)(start_x_00 * 2 + *(int *)(&DAT_01c4354c + iVar3));
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = _DAT_01bc11e4;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (DAT_0061b4a0 == 0x20) {
          piVar2 = (int *)(start_x_00 * 4 + *(int *)(&DAT_01c4354c + iVar3));
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = _DAT_01bc11e4;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01d1d404 = 0x3a6;
      core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}
