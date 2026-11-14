// Name: engine_mini3d.cpp_setupScanEdge_FUN_004f6df0
// Address: 004f6df0
// Address Range: [[004f6df0, 004f7215]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(float *v0,float *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(float *v0,float *v1)

{
  int iVar1;
  float fVar2;
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
  iVar1 = *piVar5;
  if (iVar1 != *(int *)(&DAT_01d17abc + iVar4)) {
    if (iVar1 < _DAT_01d17fb8) {
      _DAT_01d17fb8 = iVar1;
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
    fVar2 = ((float)*piVar5 + (1.0 - v0[6])) * local_18;
    *(int *)(&DAT_01d17ac4 + iVar4) =
         (int)ROUND(_DAT_00618120 * (v1[5] - v0[5]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ac0 + iVar4) =
         (int)ROUND(_DAT_00618120 * ((v1[5] - v0[5]) * fVar2 + v0[5]) - _DAT_00618118);
    *(int *)(&DAT_01d17ad4 + iVar4) =
         (int)ROUND(_DAT_00618124 * (v1[7] - v0[7]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ad0 + iVar4) =
         (int)ROUND(_DAT_00618124 * ((v1[7] - v0[7]) * fVar2 + v0[7]) - _DAT_00618118);
    *(int *)(&DAT_01d17adc + iVar4) =
         (int)ROUND(_DAT_00618124 * (v1[8] - v0[8]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ad8 + iVar4) =
         (int)ROUND(_DAT_00618124 * ((v1[8] - v0[8]) * fVar2 + v0[8]) - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17acc) =
         (int)ROUND(_DAT_0061811c * (v1[0xb] - v0[0xb]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ac8 + iVar4) =
         (int)ROUND(_DAT_0061811c * ((v1[0xb] - v0[0xb]) * fVar2 + v0[0xb]) - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17aec) =
         (int)ROUND(_DAT_0061811c * (v1[0xd] - v0[0xd]) * local_18 - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17ae8) =
         (int)ROUND(_DAT_0061811c * ((v1[0xd] - v0[0xd]) * fVar2 + v0[0xd]) - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17b04) =
         (int)ROUND(_DAT_0061811c * (v1[0xc] - v0[0xc]) * local_18 - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17b00) =
         (int)ROUND(_DAT_0061811c * ((v1[0xc] - v0[0xc]) * fVar2 + v0[0xc]) - _DAT_00618118);
    *(int *)(&DAT_01d17ae4 + iVar4) =
         (int)ROUND(_DAT_00618128 * (v1[3] - v0[3]) * local_18 - _DAT_00618118);
    *(int *)(&DAT_01d17ae0 + iVar4) =
         (int)ROUND(_DAT_00618128 * ((v1[3] - v0[3]) * fVar2 + v0[3]) - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17af4) =
         (int)ROUND(_DAT_0061811c * (v1[10] - v0[10]) * local_18 - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17af0) =
         (int)ROUND(_DAT_0061811c * ((v1[10] - v0[10]) * fVar2 + v0[10]) - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17afc) =
         (int)ROUND(_DAT_0061811c * (v1[9] - v0[9]) * local_18 - _DAT_00618118);
    *(int *)(iVar4 + 0x1d17af8) =
         (int)ROUND(_DAT_0061811c * ((v1[9] - v0[9]) * fVar2 + v0[9]) - _DAT_00618118);
    _DAT_01d17ab4 = _DAT_01d17ab4 + 1;
  }
  return;
}
