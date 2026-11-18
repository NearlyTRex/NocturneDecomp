// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00536cb0
// Address: 00536cb0
// Address Range: [[00536cb0, 00537028]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00536cb0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00536cb0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

{
  CVector3f *pCVar1;
  uint corner_index;
  byte bVar2;
  float afStackY_1044 [906];
  CVector3f *input;
  CVector3f local_20c;
  CVector3f local_200;
  CVector3f local_1f4;
  CVector3f local_1e8;
  CVector3f local_1dc;
  CVector3f local_1d0;
  CVector3f local_1c4;
  CVector3f local_1b8;
  CDemonTriangle local_1ac;
  CDemonTriangle local_174;
  CDemonTriangle local_13c;
  CDemonTriangle local_104;
  CDemonTriangle local_cc;
  CDemonTriangle local_94;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c [3];
  
  bVar2 = 0;
  pCVar1 = &local_20c;
  corner_index = 0;
  __arrinit(&local_20c,8,&g_CVectorTypeInfo);
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(bounding_box,corner_index,&local_38);
    input = &local_2c;
    local_2c.x = local_38.x;
    *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&local_38 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(orientation_matrix,input,&local_5c);
    local_44 = local_5c.x;
    local_40[(uint)bVar2 * -2] = *(float *)((int)&local_5c + (uint)bVar2 * -8 + 4);
    local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(float *)((int)&local_5c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    local_20 = local_44 + position->x;
    local_1c[0] = local_40[0] + position->y;
    local_1c[1] = local_40[1] + position->z;
    local_50.x = local_20;
    *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4) = local_1c[(uint)bVar2 * -2];
    *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         local_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (pCVar1 != &local_50) {
      pCVar1->x = local_50.x;
      pCVar1->y = local_50.y;
      pCVar1->z = local_50.z;
    }
    corner_index = corner_index + 1;
    pCVar1 = pCVar1 + 1;
  } while ((int)corner_index < 8);
  local_1c[2] = cylinder->closest_t;
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_cc,&local_20c,&local_1dc,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_cc,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_cc,&local_20c,&local_1c4,&local_1f4);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_cc,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_104,&local_200,&local_1e8,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_104,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_104,&local_200,&local_1b8,&local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_104,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_13c,&local_20c,&local_200,&local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_13c,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_13c,&local_20c,&local_1d0,&local_1dc);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_13c,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_1ac,&local_1f4,&local_1c4,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_1ac,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_1ac,&local_1f4,&local_1b8,&local_1e8);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_1ac,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_174,&local_20c,&local_1f4,&local_1e8);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_174,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_174,&local_20c,&local_1e8,&local_200);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_174,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_94,&local_1dc,&local_1d0,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_94,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
            (&local_94,&local_1dc,&local_1b8,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(&local_94,cylinder);
  return (uint)(cylinder->closest_t < local_1c[2]);
}
