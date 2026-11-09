// Name: cockpit_drawsurf.cpp_FUN_0047fe30
// Address: 0047fe30
// Address Range: [[0047fe30, 0047ffc8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_0047fe30(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_0047fe30(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int *piVar1;
  ushort *puVar2;
  int end_x;
  int iVar3;
  int iVar4;
  int iVar5;
  int start_x;
  
  end_x = x2 + *(int *)(this_ptr + 8);
  start_x = x1 + *(int *)(this_ptr + 8);
  iVar4 = y1 + *(int *)(this_ptr + 0xc);
  iVar3 = y2 + *(int *)(this_ptr + 0xc);
  if (start_x < *(int *)(this_ptr + 0x10)) {
    start_x = *(int *)(this_ptr + 0x10);
  }
  if (*(int *)(this_ptr + 0x18) < end_x) {
    end_x = *(int *)(this_ptr + 0x18);
  }
  if (start_x <= end_x) {
    if (iVar4 < *(int *)(this_ptr + 0x14)) {
      iVar4 = *(int *)(this_ptr + 0x14);
    }
    if (*(int *)(this_ptr + 0x1c) < iVar3) {
      iVar3 = *(int *)(this_ptr + 0x1c);
    }
    if (iVar4 <= iVar3) {
      if (_DAT_01bc11f0 == 0) {
        iVar3 = iVar3 * 4;
        iVar4 = iVar4 * 4;
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 == 8) {
            do {
              piVar1 = (int *)(&DAT_01c4354c + iVar4);
              iVar4 = iVar4 + 4;
              memset
                        ((void *)(*piVar1 + start_x),_DAT_01bc11e4,(end_x - start_x) + 1);
            } while (iVar4 <= iVar3);
            return;
          }
LAB_0047ff9e:
          _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d1d404 = 0x525;
          core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
          return;
        }
        if (DAT_0061b4a0 < 0x11) {
          do {
            if (start_x <= end_x) {
              iVar5 = start_x;
              puVar2 = (ushort *)(start_x * 2 + *(int *)(&DAT_01c4354c + iVar4));
              do {
                iVar5 = iVar5 + 1;
                *puVar2 = _DAT_01bc11e4;
                puVar2 = puVar2 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
        else {
          if (DAT_0061b4a0 != 0x20) goto LAB_0047ff9e;
          do {
            if (start_x <= end_x) {
              piVar1 = (int *)(start_x * 4 + *(int *)(&DAT_01c4354c + iVar4));
              iVar5 = start_x;
              do {
                iVar5 = iVar5 + 1;
                *piVar1 = _DAT_01bc11e4;
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
          cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0047e9d0(start_x,end_x,iVar4);
          iVar4 = iVar5;
        } while (iVar5 <= iVar3);
      }
    }
  }
  return;
}
