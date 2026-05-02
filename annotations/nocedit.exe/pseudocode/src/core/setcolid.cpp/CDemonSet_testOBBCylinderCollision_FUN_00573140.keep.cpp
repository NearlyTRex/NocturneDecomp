// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// Address: 00573140
// MANUAL RECONSTRUCTION
// Address Range: [[00573140, 0057346c]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

{
  float fVar1;
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  uint corner_index;
  CVector3f local_1e8[8];
  CDemonTriangle local_188;
  CDemonTriangle local_150;
  CDemonTriangle local_118;
  CDemonTriangle local_e0;
  CDemonTriangle local_a8;
  CDemonTriangle local_70;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  
  corner_index = 0;
  __arrinit(local_1e8,8,&g_CVectorTypeInfo);
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bounding_box,&local_38,corner_index)
    ;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (orientation_matrix,&local_2c,pCVar1);
    local_20.x = pCVar3->x + position->x;
    local_20.y = pCVar3->y + position->y;
    local_20.z = pCVar3->z + position->z;
    local_1e8[corner_index].x = local_20.x;
    local_1e8[corner_index].y = local_20.y;
    local_1e8[corner_index].z = local_20.z;
    corner_index = corner_index + 1;
  } while ((int)corner_index < 8);
  fVar1 = cylinder->closest_t;
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_70,&local_1e8[0],&local_1e8[4],&local_1e8[6]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_70,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_70,&local_1e8[0],&local_1e8[6],&local_1e8[2]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_70,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_188,&local_1e8[1],&local_1e8[3],&local_1e8[7]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_188,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_188,&local_1e8[1],&local_1e8[7],&local_1e8[5]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_188,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_150,&local_1e8[0],&local_1e8[1],&local_1e8[5]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_150,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_150,&local_1e8[0],&local_1e8[5],&local_1e8[4]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_150,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_118,&local_1e8[2],&local_1e8[6],&local_1e8[7]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_118,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_118,&local_1e8[2],&local_1e8[7],&local_1e8[3]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_118,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_e0,&local_1e8[0],&local_1e8[2],&local_1e8[3]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_e0,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_e0,&local_1e8[0],&local_1e8[3],&local_1e8[1]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_e0,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_a8,&local_1e8[4],&local_1e8[5],&local_1e8[7]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_a8,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_a8,&local_1e8[4],&local_1e8[7],&local_1e8[6]);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_a8,cylinder);
  return (uint)(cylinder->closest_t < fVar1);
}
