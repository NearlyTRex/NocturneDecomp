// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// Address: 00573140
// Address Range: [[00573140, 0057346c]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  uint corner_index;
  CVector3f local_1e8;
  CVector3f local_1dc;
  CVector3f local_1d0;
  CVector3f local_1c4;
  CVector3f local_1b8;
  CVector3f local_1ac;
  CVector3f local_1a0;
  CVector3f local_194;
  CDemonTriangle local_188;
  CDemonTriangle local_150;
  CDemonTriangle local_118;
  CDemonTriangle local_e0;
  CDemonTriangle local_a8;
  CDemonTriangle local_70;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  pCVar2 = &local_1e8;
  corner_index = 0;
  __arrinit(&local_1e8,8,&g_CVectorTypeInfo);
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bounding_box,&local_38,corner_index)
    ;
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (orientation_matrix,&local_2c,pCVar1);
    local_20.x = pCVar1->x + position->x;
    local_20.y = pCVar1->y + position->y;
    local_20.z = pCVar1->z + position->z;
    if (pCVar2 != &local_20) {
      pCVar2->x = local_20.x;
      pCVar2->y = local_20.y;
      pCVar2->z = local_20.z;
    }
    corner_index = corner_index + 1;
    pCVar2 = pCVar2 + 1;
  } while ((int)corner_index < 8);
  local_14 = cylinder->closest_t;
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_70,&local_1e8,&local_1b8,&local_1a0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_70,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_70,&local_1e8,&local_1a0,&local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_70,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_188,&local_1dc,&local_1c4,&local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_188,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_188,&local_1dc,&local_194,&local_1ac);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_188,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_150,&local_1e8,&local_1dc,&local_1ac);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_150,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_150,&local_1e8,&local_1ac,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_150,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_118,&local_1d0,&local_1a0,&local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_118,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_118,&local_1d0,&local_194,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_118,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_e0,&local_1e8,&local_1d0,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_e0,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_e0,&local_1e8,&local_1c4,&local_1dc);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_e0,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_a8,&local_1b8,&local_1ac,&local_194);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_a8,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (&local_a8,&local_1b8,&local_194,&local_1a0);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(&local_a8,cylinder);
  return (uint)(cylinder->closest_t < local_14);
}
