// Name: engine_mini3d.cpp_setupSurfaceEdge_FUN_004f7f80
// Address: 004f7f80
// Address Range: [[004f7f80, 004f80be]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(float *v0,float *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(float *v0,float *v1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float local_18;
  
  pfVar3 = v1;
  iVar4 = _DAT_01d17ab4 * 0x50;
  piVar5 = (int *)(&DAT_01d17ab8 + iVar4);
  if (v1[6] < v0[6]) {
    v1 = v0;
    v0 = pfVar3;
  }
  *piVar5 = (int)ROUND(v0[6] - _DAT_00618118);
  *(int *)(&DAT_01d17abc + iVar4) = (int)ROUND(v1[6] - _DAT_00618118);
  iVar2 = *piVar5;
  if (iVar2 != *(int *)(&DAT_01d17abc + iVar4)) {
    if (iVar2 < _DAT_01d17fb8) {
      _DAT_01d17fb8 = iVar2;
    }
    if (_DAT_01d17fbc < *(int *)(&DAT_01d17abc + iVar4)) {
      _DAT_01d17fbc = *(int *)(&DAT_01d17abc + iVar4);
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar1 = v0[6];
    *(int *)(&DAT_01d17ac4 + iVar4) =
         (int)ROUND(_DAT_00618120 * (v1[5] - v0[5]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ac0 + iVar4) =
         (int)ROUND(_DAT_00618120 *
                    ((v1[5] - v0[5]) * ((float)*piVar5 + (1.0 - fVar1)) * local_18 + v0[5]) -
                    _DAT_00618118);
    _DAT_01d17ab4 = _DAT_01d17ab4 + 1;
  }
  return;
}
