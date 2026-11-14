// Name: engine_mini3d.cpp_setupSurfaceEdge_FUN_004f2610
// Address: 004f2610
// Address Range: [[004f2610, 004f274e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(float *v0,float *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(float *v0,float *v1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float local_18;
  
  pfVar3 = v1;
  iVar4 = _DAT_01d80844 * 0x50;
  piVar5 = (int *)(&DAT_01d80848 + iVar4);
  if (v1[6] < v0[6]) {
    v1 = v0;
    v0 = pfVar3;
  }
  *piVar5 = (int)ROUND(v0[6] - _DAT_006004e0);
  *(int *)(&DAT_01d8084c + iVar4) = (int)ROUND(v1[6] - _DAT_006004e0);
  iVar2 = *piVar5;
  if (iVar2 != *(int *)(&DAT_01d8084c + iVar4)) {
    if (iVar2 < _DAT_01d80d48) {
      _DAT_01d80d48 = iVar2;
    }
    if (_DAT_01d80d4c < *(int *)(&DAT_01d8084c + iVar4)) {
      _DAT_01d80d4c = *(int *)(&DAT_01d8084c + iVar4);
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar1 = v0[6];
    *(int *)(&DAT_01d80854 + iVar4) =
         (int)ROUND(_DAT_006004e8 * (v1[5] - v0[5]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80850 + iVar4) =
         (int)ROUND(_DAT_006004e8 *
                    ((v1[5] - v0[5]) * ((float)*piVar5 + (1.0 - fVar1)) * local_18 + v0[5]) -
                    _DAT_006004e0);
    _DAT_01d80844 = _DAT_01d80844 + 1;
  }
  return;
}
