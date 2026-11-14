// Name: engine_mini3d.cpp_setupScanEdge_FUN_00515bd0
// Address: 00515bd0
// Address Range: [[00515bd0, 00515ff5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(float *v0,float *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(float *v0,float *v1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float local_18;
  
  pfVar3 = v1;
  iVar4 = _DAT_01d2c0c4 * 0x50;
  piVar5 = (int *)(&DAT_01d2c0c8 + iVar4);
  if (v1[6] < v0[6]) {
    v1 = v0;
    v0 = pfVar3;
  }
  *piVar5 = (int)ROUND(v0[6] - _DAT_0061f600);
  *(int *)(&DAT_01d2c0cc + iVar4) = (int)ROUND(v1[6] - _DAT_0061f600);
  iVar1 = *piVar5;
  if (iVar1 != *(int *)(&DAT_01d2c0cc + iVar4)) {
    if (iVar1 < _DAT_01d2c5c8) {
      _DAT_01d2c5c8 = iVar1;
    }
    if (_DAT_01d2c5cc < *(int *)(&DAT_01d2c0cc + iVar4)) {
      _DAT_01d2c5cc = *(int *)(&DAT_01d2c0cc + iVar4);
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar2 = ((float)*piVar5 + (1.0 - v0[6])) * local_18;
    *(int *)(&DAT_01d2c0d4 + iVar4) =
         (int)ROUND(_DAT_0061f608 * (v1[5] - v0[5]) * local_18 - _DAT_0061f600);
    *(int *)(&DAT_01d2c0d0 + iVar4) =
         (int)ROUND(_DAT_0061f608 * ((v1[5] - v0[5]) * fVar2 + v0[5]) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0e4 + iVar4) =
         (int)ROUND(_DAT_0061f60c * (v1[7] - v0[7]) * local_18 - _DAT_0061f600);
    *(int *)(&DAT_01d2c0e0 + iVar4) =
         (int)ROUND(_DAT_0061f60c * ((v1[7] - v0[7]) * fVar2 + v0[7]) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0ec + iVar4) =
         (int)ROUND(_DAT_0061f60c * (v1[8] - v0[8]) * local_18 - _DAT_0061f600);
    *(int *)(&DAT_01d2c0e8 + iVar4) =
         (int)ROUND(_DAT_0061f60c * ((v1[8] - v0[8]) * fVar2 + v0[8]) - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c0dc) =
         (int)ROUND(_DAT_0061f604 * (v1[0xb] - v0[0xb]) * local_18 - _DAT_0061f600);
    *(int *)(&DAT_01d2c0d8 + iVar4) =
         (int)ROUND(_DAT_0061f604 * ((v1[0xb] - v0[0xb]) * fVar2 + v0[0xb]) - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c0fc) =
         (int)ROUND(_DAT_0061f604 * (v1[0xd] - v0[0xd]) * local_18 - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c0f8) =
         (int)ROUND(_DAT_0061f604 * ((v1[0xd] - v0[0xd]) * fVar2 + v0[0xd]) - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c114) =
         (int)ROUND(_DAT_0061f604 * (v1[0xc] - v0[0xc]) * local_18 - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c110) =
         (int)ROUND(_DAT_0061f604 * ((v1[0xc] - v0[0xc]) * fVar2 + v0[0xc]) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0f4 + iVar4) =
         (int)ROUND(_DAT_0061f610 * (v1[3] - v0[3]) * local_18 - _DAT_0061f600);
    *(int *)(&DAT_01d2c0f0 + iVar4) =
         (int)ROUND(_DAT_0061f610 * ((v1[3] - v0[3]) * fVar2 + v0[3]) - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c104) =
         (int)ROUND(_DAT_0061f604 * (v1[10] - v0[10]) * local_18 - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c100) =
         (int)ROUND(_DAT_0061f604 * ((v1[10] - v0[10]) * fVar2 + v0[10]) - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c10c) =
         (int)ROUND(_DAT_0061f604 * (v1[9] - v0[9]) * local_18 - _DAT_0061f600);
    *(int *)(iVar4 + 0x1d2c108) =
         (int)ROUND(_DAT_0061f604 * ((v1[9] - v0[9]) * fVar2 + v0[9]) - _DAT_0061f600);
    _DAT_01d2c0c4 = _DAT_01d2c0c4 + 1;
  }
  return;
}
