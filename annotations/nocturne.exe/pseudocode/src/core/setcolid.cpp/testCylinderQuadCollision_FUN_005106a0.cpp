// Name: core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0
// Address: 005106a0
// Address Range: [[005106a0, 00510702]]
// Convention: unknown
// Signature: void core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5)

#include "nocturne.h"

void core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5)

{
  CDemonTriangle local_48;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_48,param_2,param_3,param_4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(&local_48,param_1);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_48,param_2,param_4,param_5);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(&local_48,param_1);
  return;
}
