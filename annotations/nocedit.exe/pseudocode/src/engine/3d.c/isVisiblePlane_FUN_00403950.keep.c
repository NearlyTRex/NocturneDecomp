// Name: engine_3d.c_isVisiblePlane_FUN_00403950
// Address: 00403950
// MANUAL RECONSTRUCTION
// Address Range: [[00403950, 004039ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane)

#include "nocturne.h"

int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane)

{
  longlong lVar3;
  int iVar4;

  g_PlaneTestCount = g_PlaneTestCount + 1;
  iVar4 = 1;
  if (((g_CullingMode == 0) &&
      ((((plane->A).i != 0 || (plane->B).i != 0) || (plane->C).i != 0) || (plane->D).i != 0)) &&
     (lVar3 = (longlong)(plane->B).i * (longlong)g_RelativeY +
              (longlong)(plane->A).i * (longlong)g_RelativeX +
              (longlong)(plane->C).i * (longlong)g_RelativeZ,
     lVar3 <= (longlong)(plane->D).i)) {
    iVar4 = 0;
  }
  return iVar4;
}
