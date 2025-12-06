// Name: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
// Address: 005730d0
// Address Range: [[005730d0, 00573132]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4)

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_testCylinderQuadCollision_FUN_005730d0
          (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          CVector3f *vertex4)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000018;
  CVector3f *in_stack_0000001c;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffb8,vertex1,vertex2,vertex3);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)&stack0xffffffbc,(SIntersectXZCylinder *)vertex1);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffc0,vertex1,in_stack_00000018,in_stack_0000001c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)&stack0xffffffc4,(SIntersectXZCylinder *)vertex1);
  return;
}
