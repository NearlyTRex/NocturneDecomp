// Name: engine_mini3d.cpp_setupScanEdge_FUN_004f13a0
// Address: 004f13a0
// Address Range: [[004f13a0, 004f17c5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(float *v0,float *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(float *v0,float *v1)

{
  int iVar1;
  float fVar2;
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
  iVar1 = *piVar5;
  if (iVar1 != *(int *)(&DAT_01d8084c + iVar4)) {
    if (iVar1 < _DAT_01d80d48) {
      _DAT_01d80d48 = iVar1;
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
    fVar2 = ((float)*piVar5 + (1.0 - v0[6])) * local_18;
    *(int *)(&DAT_01d80854 + iVar4) =
         (int)ROUND(_DAT_006004e8 * (v1[5] - v0[5]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80850 + iVar4) =
         (int)ROUND(_DAT_006004e8 * ((v1[5] - v0[5]) * fVar2 + v0[5]) - _DAT_006004e0);
    *(int *)(&DAT_01d80864 + iVar4) =
         (int)ROUND(_DAT_006004ec * (v1[7] - v0[7]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80860 + iVar4) =
         (int)ROUND(_DAT_006004ec * ((v1[7] - v0[7]) * fVar2 + v0[7]) - _DAT_006004e0);
    *(int *)(&DAT_01d8086c + iVar4) =
         (int)ROUND(_DAT_006004ec * (v1[8] - v0[8]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80868 + iVar4) =
         (int)ROUND(_DAT_006004ec * ((v1[8] - v0[8]) * fVar2 + v0[8]) - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d8085c) =
         (int)ROUND(_DAT_006004e4 * (v1[0xb] - v0[0xb]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80858 + iVar4) =
         (int)ROUND(_DAT_006004e4 * ((v1[0xb] - v0[0xb]) * fVar2 + v0[0xb]) - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d8087c) =
         (int)ROUND(_DAT_006004e4 * (v1[0xd] - v0[0xd]) * local_18 - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80878) =
         (int)ROUND(_DAT_006004e4 * ((v1[0xd] - v0[0xd]) * fVar2 + v0[0xd]) - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80894) =
         (int)ROUND(_DAT_006004e4 * (v1[0xc] - v0[0xc]) * local_18 - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80890) =
         (int)ROUND(_DAT_006004e4 * ((v1[0xc] - v0[0xc]) * fVar2 + v0[0xc]) - _DAT_006004e0);
    *(int *)(&DAT_01d80874 + iVar4) =
         (int)ROUND(_DAT_006004f0 * (v1[3] - v0[3]) * local_18 - _DAT_006004e0);
    *(int *)(&DAT_01d80870 + iVar4) =
         (int)ROUND(_DAT_006004f0 * ((v1[3] - v0[3]) * fVar2 + v0[3]) - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80884) =
         (int)ROUND(_DAT_006004e4 * (v1[10] - v0[10]) * local_18 - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80880) =
         (int)ROUND(_DAT_006004e4 * ((v1[10] - v0[10]) * fVar2 + v0[10]) - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d8088c) =
         (int)ROUND(_DAT_006004e4 * (v1[9] - v0[9]) * local_18 - _DAT_006004e0);
    *(int *)(iVar4 + 0x1d80888) =
         (int)ROUND(_DAT_006004e4 * ((v1[9] - v0[9]) * fVar2 + v0[9]) - _DAT_006004e0);
    _DAT_01d80844 = _DAT_01d80844 + 1;
  }
  return;
}
