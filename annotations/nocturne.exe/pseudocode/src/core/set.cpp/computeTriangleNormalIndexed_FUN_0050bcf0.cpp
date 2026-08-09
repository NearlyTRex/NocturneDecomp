// Name: core_set.cpp_computeTriangleNormalIndexed_FUN_0050bcf0
// Address: 0050bcf0
// Address Range: [[0050bcf0, 0050be1e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0050bcf0(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0050bcf0(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal)

{
  CVector3i *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CVector3i *pCVar8;
  int iVar9;
  int iVar10;
  CVector3i *pCVar11;
  
  pCVar8 = vertex_array + triangle_indices[1];
  pCVar1 = vertex_array + *triangle_indices;
  iVar9 = pCVar8->x - pCVar1->x;
  pCVar11 = vertex_array + triangle_indices[2];
  iVar10 = pCVar11->x - pCVar8->x;
  fVar4 = (float)(pCVar8->z - pCVar1->z);
  fVar7 = (float)(pCVar8->y - pCVar1->y);
  fVar2 = (float)(pCVar11->z - pCVar8->z);
  fVar6 = (float)(pCVar11->y - pCVar8->y);
  fVar3 = fVar7 * fVar2 - fVar6 * fVar4;
  fVar5 = (float)iVar10 * fVar4 - (float)iVar9 * fVar2;
  fVar4 = (float)iVar9 * fVar6 - (float)iVar10 * fVar7;
  fVar2 = (float)(g_FastInvSqrtMagic - ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) >> 1))
          * (float)_DAT_00590642;
  out_normal->x = fVar3 * fVar2;
  out_normal->y = fVar5 * fVar2;
  out_normal->z = fVar4 * fVar2;
  return;
}
