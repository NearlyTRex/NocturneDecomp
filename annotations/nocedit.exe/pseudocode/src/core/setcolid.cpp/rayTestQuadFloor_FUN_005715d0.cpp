// Name: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
// Address: 005715d0
// Address Range: [[005715d0, 005716a0]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0(CVector3f *position,float search_radius,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0(CVector3f *position,float search_radius,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CDemonTriangle local_54;
  CVector3f local_1c;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(&local_54,vertex1,vertex2,vertex3);
  uVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                    (&local_54,position,search_radius,&out_height->x);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(&local_54,vertex1,vertex3,vertex4);
  uVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                    (&local_54,position,search_radius,&out_height->x);
  uVar3 = uVar1 | uVar2;
  if (uVar3 != 0) {
    if (out_transformed_normal != &local_1c) {
      out_transformed_normal->x = -local_54.normal.x;
      out_transformed_normal->y = -local_54.normal.y;
      out_transformed_normal->z = -local_54.normal.z;
      return uVar3;
    }
  }
  return uVar3;
}
