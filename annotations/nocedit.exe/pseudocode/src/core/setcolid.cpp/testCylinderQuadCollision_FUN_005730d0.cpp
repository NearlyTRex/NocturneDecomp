// Name: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
// Address: 005730d0
// Address Range: [[005730d0, 00573132]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005730d0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005730d0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4)

{
  CDemonTriangle local_48;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(&local_48,vertex1,vertex2,vertex3);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_48,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(&local_48,vertex1,vertex3,vertex4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_48,cylinder);
  return;
}
