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
  double dVar4;
  CLodFace *triangle_ptr;
  BADSPACEBASE *in_ESP;
  int iVar5;
  uint uStack_3c;
  uint local_38;
  byte auStack_34 [8];
  CVector3f local_2c;
  int local_18;
  
  iVar5 = 0;
  local_18 = 0;
  uStack_3c = 0x46293e59;
  if (0 < this_ptr->tri_count) {
    do {
      triangle_ptr = (CLodFace *)((int)this_ptr->tri_data->attribute_indices + iVar5);
      dVar4 = (double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c);
      if (triangle_ptr->processed_flag == 0) {
        shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
                  (this_ptr,(CVector3f *)(auStack_34 + 4),target_point,triangle_ptr);
        fVar1 = target_point->x - local_2c.x;
        fVar3 = target_point->y - local_2c.y;
        fVar2 = target_point->z - local_2c.z;
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
        auStack_34 = (byte  [8])(double)fVar1;
        dVar4 = (double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c);
        if (fVar1 < (float)(double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c)) {
          dVar4 = (double)auStack_34;
          if (output_closest_point != &local_2c) {
            output_closest_point->x = local_2c.x;
            output_closest_point->y = local_2c.y;
            output_closest_point->z = local_2c.z;
          }
        }
      }
      local_38 = (uint)((ulonglong)dVar4 >> 0x20);
      uStack_3c = SUB84 /* extract 2-byte value */(dVar4,0);
      local_18 = local_18 + 1;
      iVar5 = iVar5 + 0x8c;
    } while (local_18 < this_ptr->tri_count);
  }
  return output_closest_point;
}
