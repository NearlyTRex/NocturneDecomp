// Name: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
// Address: 0045d110
// Address Range: [[0045d110, 0045d2a8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

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
      if (_DAT_01b4d71c == 0) {
        iVar3 = iVar3 * 4;
        iVar4 = iVar4 * 4;
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + iVar4);
              iVar4 = iVar4 + 4;
              memset
                        ((void *)(*piVar1 + start_x),_DAT_01b4d710,(end_x - start_x) + 1);
            } while (iVar4 <= iVar3);
            return;
          }
LAB_0045d27e:
          PTR_01cc4800 = "..\\cockpit\\drawsurf.cpp";
          INT_01cc4804 = 0x524;
          core_main_c_FUN_004c8440("Invalid bitsPerPixel!");
          return;
        }
        if (DAT_005b7624 < 0x11) {
          do {
            if (start_x <= end_x) {
              iVar5 = start_x;
              puVar2 = (ushort *)(start_x * 2 + *(int *)(&DAT_01bd2fa0 + iVar4));
              do {
                iVar5 = iVar5 + 1;
                *puVar2 = _DAT_01b4d710;
                puVar2 = puVar2 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
        else {
          if (DAT_005b7624 != 0x20) goto LAB_0045d27e;
          do {
            if (start_x <= end_x) {
              piVar1 = (int *)(start_x * 4 + *(int *)(&DAT_01bd2fa0 + iVar4));
              iVar5 = start_x;
              do {
                iVar5 = iVar5 + 1;
                *piVar1 = _DAT_01b4d710;
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
          cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
                    (start_x,end_x,iVar4);
          iVar4 = iVar5;
        } while (iVar5 <= iVar3);
      }
    }
  }
  return;
}
