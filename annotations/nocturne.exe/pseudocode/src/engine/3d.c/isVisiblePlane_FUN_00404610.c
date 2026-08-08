// Name: engine_3d.c_isVisiblePlane_FUN_00404610
// Address: 00404610
// Address Range: [[00404610, 0040467a]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(SClipPlane *plane)

#include "nocturne.h"

int __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(SClipPlane *plane)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  DAT_006b026c = DAT_006b026c + 1;
  iVar4 = 1;
  if (((DAT_006b0280 == 0) &&
      ((((plane->A).i != 0 || (plane->B).i != 0) || (plane->C).i != 0) || (plane->D).i != 0)) &&
     (lVar3 = (longlong)(plane->B).i * (longlong)g_RelativeY +
              (longlong)(plane->A).i * (longlong)g_RelativeX +
              (longlong)(plane->C).i * (longlong)g_RelativeZ,
     iVar5 = (int)((ulonglong)lVar3 >> 0x20), iVar6 = (plane->D).i >> 0x1f,
     uVar1 = (uint)((uint)(plane->D).i < (uint)lVar3), iVar2 = iVar6 - iVar5, iVar4 = 1,
     (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    iVar4 = 0;
  }
  return iVar4;
}
