// Name: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850
// Address: 0045c850
// Address Range: [[0045c850, 0045ca44]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(CDrawSurface *this_ptr,int x,int start_y,int end_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = x + this_ptr->x;
  iVar3 = start_y + this_ptr->y;
  iVar4 = end_y + this_ptr->y;
  if ((this_ptr->clip_left <= iVar5) && (iVar5 <= this_ptr->clip_right)) {
    if (iVar3 < this_ptr->clip_top) {
      iVar3 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar4) {
      iVar4 = this_ptr->clip_bottom;
    }
    if (iVar3 <= iVar4) {
      iVar2 = iVar5 * 2;
      iVar4 = iVar4 * 4;
      iVar3 = iVar3 * 4;
      if (_DAT_01b4d71c != 0) {
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
              iVar3 = iVar3 + 4;
              *(uchar *)(iVar5 + *piVar1) = g_LightTable[8][*(byte *)(iVar5 + *piVar1)];
            } while (iVar3 <= iVar4);
            return;
          }
        }
        else {
          if (DAT_005b7624 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
            } while (iVar3 <= iVar4);
            return;
          }
          if (DAT_005b7624 == 0x20) {
            do {
              puVar6 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar3) + iVar5 * 4);
              iVar3 = iVar3 + 4;
              *puVar6 = *puVar6 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d730;
            } while (iVar3 <= iVar4);
            return;
          }
        }
        g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
        g_CurrentLineNumber = 1019;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel!");
        return;
      }
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 != 8) {
LAB_0045c933:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 987;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          *(byte *)(*piVar1 + iVar5) = DAT_01b4d710;
        } while (iVar3 <= iVar4);
      }
      else if (DAT_005b7624 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01b4d710;
        } while (iVar3 <= iVar4);
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_0045c933;
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          *(uint *)(*piVar1 + iVar5 * 4) = _DAT_01b4d710;
        } while (iVar3 <= iVar4);
      }
    }
  }
  return;
}
