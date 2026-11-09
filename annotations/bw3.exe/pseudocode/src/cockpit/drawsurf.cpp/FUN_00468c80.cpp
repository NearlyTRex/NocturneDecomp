// Name: cockpit_drawsurf.cpp_FUN_00468c80
// Address: 00468c80
// Address Range: [[00468c80, 00468e50]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_00468c80(CDrawSurface *this_ptr,int x,int start_y,int end_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_00468c80(CDrawSurface *this_ptr,int x,int start_y,int end_y)

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
      if (_DAT_01bdd7c8 != 0) {
        if (DAT_005fba20 < 0x10) {
          if (DAT_005fba20 == 8) {
            return;
          }
        }
        else {
          if (DAT_005fba20 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01c5faec + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
            } while (iVar3 <= iVar4);
            return;
          }
          if (DAT_005fba20 == 0x20) {
            do {
              puVar6 = (uint *)(*(int *)(&DAT_01c5faec + iVar3) + iVar5 * 4);
              iVar3 = iVar3 + 4;
              *puVar6 = *puVar6 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7dc;
            } while (iVar3 <= iVar4);
            return;
          }
        }
        _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
        _DAT_01d71de4 = 0x3fc;
        core_main_c_FUN_004e4330("Invalid bitsPerPixel!");
        return;
      }
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 != 8) {
LAB_00468d63:
          _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d71de4 = 0x3dc;
          core_main_c_FUN_004e4330("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          *(byte *)(iVar5 + *piVar1) = DAT_01bdd7bc;
        } while (iVar3 <= iVar4);
      }
      else if (DAT_005fba20 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01bdd7bc;
        } while (iVar3 <= iVar4);
      }
      else {
        if (DAT_005fba20 != 0x20) goto LAB_00468d63;
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          *(uint *)(*piVar1 + iVar5 * 4) = _DAT_01bdd7bc;
        } while (iVar3 <= iVar4);
      }
    }
  }
  return;
}
