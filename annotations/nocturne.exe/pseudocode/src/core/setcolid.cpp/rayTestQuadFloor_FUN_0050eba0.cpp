// Name: core_setcolid.cpp_rayTestQuadFloor_FUN_0050eba0
// Address: 0050eba0
// Address Range: [[0050eba0, 0050ec70]]
// Convention: unknown
// Signature: uint core_setcolid_cpp_rayTestQuadFloor_FUN_0050eba0(CVector3f *param_1,float param_2,float *param_3,CVector3f *param_4,CVector3f *param_5,CVector3f *param_6,CVector3f *param_7,float *param_8)

#include "nocturne.h"

uint core_setcolid_cpp_rayTestQuadFloor_FUN_0050eba0(CVector3f *param_1,float param_2,float *param_3,CVector3f *param_4,CVector3f *param_5,CVector3f *param_6,CVector3f *param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  CDemonTriangle local_54;
  float local_1c [3];
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_54,param_4,param_5,param_6);
  uVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(&local_54,param_1,param_2,param_3);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(&local_54,param_4,param_6,param_7);
  uVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(&local_54,param_1,param_2,param_3);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    if (param_8 != local_1c) {
      *param_8 = -local_54.normal.x;
      param_8[1] = -local_54.normal.y;
      param_8[2] = -local_54.normal.z;
      return uVar1;
    }
  }
  return uVar1;
}
