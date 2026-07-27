// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
// Address: 00510710
// Address Range: [[00510710, 00510a3c]]
// Convention: __cdecl
// Signature: bool __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5)

#include "nocturne.h"

bool __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710(uint param_1,float *param_2,uint param_3,float *param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_1e8 [3];
  byte local_1dc [12];
  byte local_1d0 [12];
  byte local_1c4 [12];
  byte local_1b8 [12];
  byte local_1ac [12];
  byte local_1a0 [12];
  byte local_194 [12];
  byte local_188 [56];
  byte local_150 [56];
  byte local_118 [56];
  byte local_e0 [56];
  byte local_a8 [56];
  byte local_70 [56];
  byte local_38 [12];
  byte local_2c [12];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar3 = local_1e8;
  iVar4 = 0;
  __arrinit(local_1e8,8,&g_CVectorTypeInfo_005993b0);
  do {
    uVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(param_3,local_38,iVar4);
    pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (param_5,local_2c,uVar1);
    local_20 = *pfVar2 + *param_4;
    local_1c = pfVar2[1] + param_4[1];
    local_18 = pfVar2[2] + param_4[2];
    if (pfVar3 != &local_20) {
      *pfVar3 = local_20;
      pfVar3[1] = local_1c;
      pfVar3[2] = local_18;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 3;
  } while (iVar4 < 8);
  local_14 = *param_2;
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_70,local_1e8,local_1b8,local_1a0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_70,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_70,local_1e8,local_1a0,local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_70,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_188,local_1dc,local_1c4,local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_188,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_188,local_1dc,local_194,local_1ac);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_188,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_150,local_1e8,local_1dc,local_1ac);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_150,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_150,local_1e8,local_1ac,local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_150,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_118,local_1d0,local_1a0,local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_118,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_118,local_1d0,local_194,local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_118,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_e0,local_1e8,local_1d0,local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_e0,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_e0,local_1e8,local_1c4,local_1dc);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_e0,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_a8,local_1b8,local_1ac,local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_a8,param_2);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_a8,local_1b8,local_194,local_1a0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_a8,param_2);
  return *param_2 < local_14;
}
