// Name: shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
// Address: 0051a300
// Address Range: [[0051a300, 0051a3d5]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300(CLodMesh * this_ptr, CVector3f * output_closest_point, CVector3f * target_point)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
          (CLodMesh *this_ptr,CVector3f *output_closest_point,CVector3f *target_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CLodFace *triangle_ptr;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CVector3f local_2c [2];
  int iStack_14;
  
  iVar5 = 0;
  iStack_14 = 0;
  fVar4 = 1e+30;
  if (0 < this_ptr->tri_count) {
    do {
      triangle_ptr = (CLodFace *)((int)this_ptr->tri_data->attribute_indices + iVar5);
      if (triangle_ptr->processed_flag == 0) {
        shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
                  (this_ptr,local_2c,target_point,triangle_ptr);
        fVar1 = target_point->x - local_2c[0].x;
        fVar3 = target_point->y - local_2c[0].y;
        fVar2 = target_point->z - local_2c[0].z;
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
        if (fVar1 < fVar4) {
          fVar4 = fVar1;
          if (output_closest_point != local_2c) {
            output_closest_point->x = local_2c[0].x;
            output_closest_point->y = local_2c[0].y;
            output_closest_point->z = local_2c[0].z;
          }
        }
      }
      iStack_14 = iStack_14 + 1;
      iVar5 = iVar5 + 0x8c;
    } while (iStack_14 < this_ptr->tri_count);
  }
  return output_closest_point;
}
