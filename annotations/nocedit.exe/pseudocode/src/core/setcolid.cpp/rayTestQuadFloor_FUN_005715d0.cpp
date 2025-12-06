// Name: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
// Address: 005715d0
// Address Range: [[005715d0, 005716a0]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0(float x, float z, CVector3f * out_height, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4, CVector3f * out_transformed_normal)

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0
          (float x,float z,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,
          CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal)

{
  uint uVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000024;
  CDemonTriangle CStack_48;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffac,vertex1,vertex2,vertex3);
  uVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                    ((CDemonTriangle *)&stack0xffffffb0,z,(float)out_height,&vertex1->x);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffb4,vertex3,out_transformed_normal,in_stack_00000024);
  uVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(&CStack_48,z,(float)vertex2,&vertex1->x);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    if (out_transformed_normal != (CVector3f *)&stack0xfffffff4) {
      out_transformed_normal->x = -CStack_48.normal.y;
      out_transformed_normal->y = -CStack_48.normal.z;
      out_transformed_normal->z = -CStack_48.plane_distance;
      return uVar1;
    }
  }
  return uVar1;
}
