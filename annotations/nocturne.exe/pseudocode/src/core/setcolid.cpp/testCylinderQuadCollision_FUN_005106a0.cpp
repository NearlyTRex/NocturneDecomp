// Name: core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0
// Address: 005106a0
// Address Range: [[005106a0, 00510702]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4)

{
  CDemonTriangle local_48;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_48,vertex1,vertex2,vertex3);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(&local_48,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_48,vertex1,vertex3,vertex4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(&local_48,cylinder);
  return;
}
