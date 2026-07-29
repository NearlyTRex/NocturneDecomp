// Name: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_0041daa0
// Address: 0041daa0
// Address Range: [[0041daa0, 0041dbb7]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_0041daa0(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_0041daa0(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = 1;
  iVar6 = vertices->x;
  iVar4 = vertices->y;
  local_20 = vertices->z;
  local_28 = iVar6;
  local_24 = iVar4;
  local_1c = local_20;
  if (1 < vertex_count) {
    do {
      iVar1 = vertices[1].x;
      iVar3 = iVar1;
      if ((local_28 <= iVar1) && (iVar3 = local_28, iVar6 < iVar1)) {
        iVar6 = iVar1;
      }
      local_28 = iVar3;
      iVar1 = vertices[1].y;
      iVar3 = iVar1;
      if ((local_24 <= iVar1) && (iVar3 = local_24, iVar4 < iVar1)) {
        iVar4 = iVar1;
      }
      local_24 = iVar3;
      iVar1 = vertices[1].z;
      iVar3 = iVar1;
      if ((local_20 <= iVar1) && (iVar3 = local_20, iVar4 < iVar1)) {
        local_1c = iVar1;
      }
      local_20 = iVar3;
      iVar5 = iVar5 + 1;
      vertices = vertices + 1;
    } while (iVar5 < vertex_count);
  }
  fVar2 = (float)_DAT_005797d5;
  (this_ptr->min).x = (float)local_28 * fVar2;
  (this_ptr->min).y = (float)local_24 * fVar2;
  (this_ptr->max).x = (float)iVar6 * fVar2;
  (this_ptr->max).y = (float)iVar4 * fVar2;
  (this_ptr->min).z = (float)local_20 * fVar2;
  (this_ptr->max).z = (float)local_1c * fVar2;
  return;
}
