// Name: cockpit_drawsurf.cpp_FUN_00468b60
// Address: 00468b60
// Address Range: [[00468b60, 00468c7a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_00468b60(CDrawSurface *this_ptr,int start_x,int y,int end_x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_00468b60(CDrawSurface *this_ptr,int start_x,int y,int end_x)

{
  int start_x_00;
  int end_x_00;
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  
  end_x_00 = end_x + *(int *)(this_ptr + 8);
  start_x_00 = start_x + *(int *)(this_ptr + 8);
  iVar3 = y + *(int *)(this_ptr + 0xc);
  if ((*(int *)(this_ptr + 0x14) <= iVar3) && (iVar3 <= *(int *)(this_ptr + 0x1c))) {
    if (start_x_00 < *(int *)(this_ptr + 0x10)) {
      start_x_00 = *(int *)(this_ptr + 0x10);
    }
    if (*(int *)(this_ptr + 0x18) < end_x_00) {
      end_x_00 = *(int *)(this_ptr + 0x18);
    }
    if (start_x_00 <= end_x_00) {
      if (_DAT_01bdd7c8 != 0) {
        cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_00468090(start_x_00,end_x_00,iVar3);
        return;
      }
      iVar3 = iVar3 * 4;
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 == 8) {
          memset
                    ((void *)(*(int *)(&DAT_01c5faec + iVar3) + start_x_00),_DAT_01bdd7bc,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if (DAT_005fba20 < 0x11) {
          puVar1 = (ushort *)(start_x_00 * 2 + *(int *)(&DAT_01c5faec + iVar3));
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = _DAT_01bdd7bc;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (DAT_005fba20 == 0x20) {
          piVar2 = (int *)(start_x_00 * 4 + *(int *)(&DAT_01c5faec + iVar3));
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = _DAT_01bdd7bc;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01d71de4 = 0x3a6;
      core_main_c_FUN_004e4330("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}
