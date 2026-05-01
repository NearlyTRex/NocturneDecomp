// Name: core_set.cpp_computeTriangleNormalIndexed_FUN_0056e2b0
// Address: 0056e2b0
// MANUAL RECONSTRUCTION
// Address Range: [[0056e2b0, 0056e3de]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0056e2b0(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal)

#include "nocturne.h"

void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0056e2b0(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal)

{
  float fVar1;
  CVector3i *pCVar8;
  int iVar9;
  int iVar10;
  CVector3i *pCVar11;
  float fVar7;
  float fVar2;
  CVector3i *pCVar1;
  float fVar6;
  float fVar5;
  float fVar4;
  float fVar3;
  
  pCVar8 = vertex_array + triangle_indices[1];
  pCVar1 = vertex_array + *triangle_indices;
  iVar9 = pCVar8->x - pCVar1->x;
  pCVar11 = vertex_array + triangle_indices[2];
  iVar10 = pCVar11->x - pCVar8->x;
  fVar1 = (float)(pCVar8->z - pCVar1->z);
  fVar7 = (float)(pCVar8->y - pCVar1->y);
  fVar2 = (float)(pCVar11->z - pCVar8->z);
  fVar6 = (float)(pCVar11->y - pCVar8->y);
  fVar3 = fVar7 * fVar2 - fVar6 * fVar1;
  fVar5 = (float)iVar10 * fVar1 - (float)iVar9 * fVar2;
  fVar4 = (float)iVar9 * fVar6 - (float)iVar10 * fVar7;
  fVar1 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3)
          * (float)65535;
  out_normal->x = fVar3 * fVar1;
  out_normal->y = fVar5 * fVar1;
  out_normal->z = fVar4 * fVar1;
  return;
}
