// Name: cockpit_drawsurf.cpp_FUN_0047f5c0
// Address: 0047f5c0
// Address Range: [[0047f5c0, 0047f790]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_0047f5c0(CDrawSurface *this_ptr,int x,int start_y,int end_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_0047f5c0(CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = x + *(int *)(this_ptr + 8);
  iVar3 = start_y + *(int *)(this_ptr + 0xc);
  iVar4 = end_y + *(int *)(this_ptr + 0xc);
  if ((*(int *)(this_ptr + 0x10) <= iVar5) && (iVar5 <= *(int *)(this_ptr + 0x18))) {
    if (iVar3 < *(int *)(this_ptr + 0x14)) {
      iVar3 = *(int *)(this_ptr + 0x14);
    }
    if (*(int *)(this_ptr + 0x1c) < iVar4) {
      iVar4 = *(int *)(this_ptr + 0x1c);
    }
    if (iVar3 <= iVar4) {
      iVar2 = iVar5 * 2;
      iVar4 = iVar4 * 4;
      iVar3 = iVar3 * 4;
      if (_DAT_01bc11f0 != 0) {
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 == 8) {
            return;
          }
        }
        else {
          if (DAT_0061b4a0 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01c4354c + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01bc11f4 & 0x1f) & (ushort)_DAT_01bc1204;
            } while (iVar3 <= iVar4);
            return;
          }
          if (DAT_0061b4a0 == 0x20) {
            do {
              puVar6 = (uint *)(*(int *)(&DAT_01c4354c + iVar3) + iVar5 * 4);
              iVar3 = iVar3 + 4;
              *puVar6 = *puVar6 >> (DAT_01bc11f4 & 0x1f) & _DAT_01bc1204;
            } while (iVar3 <= iVar4);
            return;
          }
        }
        _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
        _DAT_01d1d404 = 0x3fc;
        core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
        return;
      }
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 != 8) {
LAB_0047f6a3:
          _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d1d404 = 0x3dc;
          core_main_c_FUN_005030e0("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          *(byte *)(iVar5 + *piVar1) = DAT_01bc11e4;
        } while (iVar3 <= iVar4);
      }
      else if (DAT_0061b4a0 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01bc11e4;
        } while (iVar3 <= iVar4);
      }
      else {
        if (DAT_0061b4a0 != 0x20) goto LAB_0047f6a3;
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          *(uint *)(*piVar1 + iVar5 * 4) = _DAT_01bc11e4;
        } while (iVar3 <= iVar4);
      }
    }
  }
  return;
}
