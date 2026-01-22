// Name: engine_3d.c_isVisiblePlane_FUN_00403950
// Address: 00403950
// Address Range: [[00403950, 004039ba]]
// Convention: __cdecl
// Signature: int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)

#include "nocturne.h"

int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_PlaneTestCount = g_PlaneTestCount + 1;
  iVar4 = 1;
  if (((g_CullingMode == 0) &&
      (((plane->A != 0 || plane->B != 0) || plane->C != 0) || plane->D != 0)) &&
     (lVar3 = (longlong)plane->B * (longlong)g_RelativeY +
              (longlong)plane->A * (longlong)g_RelativeX +
              (longlong)plane->C * (longlong)g_RelativeZ, iVar5 = (int)((ulonglong)lVar3 >> 0x20),
     iVar6 = plane->D >> 0x1f, uVar1 = (uint)((uint)plane->D < (uint)lVar3), iVar2 = iVar6 - iVar5,
     iVar4 = 1, (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    iVar4 = 0;
  }
  return iVar4;
}
