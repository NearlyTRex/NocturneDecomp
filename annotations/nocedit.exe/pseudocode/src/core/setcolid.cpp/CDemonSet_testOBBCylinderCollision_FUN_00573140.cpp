// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// Address: 00573140
// Address Range: [[00573140, 0057346c]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet * this_ptr, CBoundingBox3D * bounding_box, CMatrix3x3f * orientation_matrix, SIntersectXZCylinder * cylinder1, SIntersectXZCylinder * cylinder2)

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
          (CDemonSet *this_ptr,CBoundingBox3D *bounding_box,CMatrix3x3f *orientation_matrix,
          SIntersectXZCylinder *cylinder1,SIntersectXZCylinder *cylinder2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SIntersectXZCylinder *in_stack_00000018;
  SIntersectXZCylinder *in_stack_00000020;
  float in_stack_00000058;
  byte auStack_180 [16];
  byte auStack_170 [8];
  byte auStack_168 [8];
  byte auStack_160 [60];
  byte auStack_124 [8];
  byte auStack_11c [64];
  byte auStack_dc [8];
  byte auStack_d4 [64];
  byte auStack_94 [8];
  byte auStack_8c [40];
  byte auStack_64 [8];
  byte auStack_5c [16];
  byte auStack_4c [24];
  CVector3f CStack_34;
  CVector3f CStack_24;
  float local_14;
  
  pfVar6 = (float *)&stack0xfffffe18;
  corner_index = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe18,8,&g_CVectorTypeInfo);
  do {
    pCVar5 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)cylinder1,&CStack_34,corner_index);
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)cylinder2,&CStack_24,pCVar5);
    local_14 = pCVar5->x + cylinder1->max_distance;
    fVar1 = pCVar5->y;
    fVar2 = cylinder1->push_z;
    fVar3 = pCVar5->z;
    fVar4 = (float)cylinder1->flags;
    if (pfVar6 != &local_14) {
      *pfVar6 = local_14;
      pfVar6[1] = fVar1 + fVar2;
      pfVar6[2] = fVar3 + fVar4;
    }
    corner_index = corner_index + 1;
    pfVar6 = pfVar6 + 3;
  } while ((int)corner_index < 8);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_64,(CVector3f *)&stack0xfffffe24,
             (CVector3f *)&stack0xfffffe54,(CVector3f *)&stack0xfffffe6c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_64 + 4),in_stack_00000018);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_5c,(CVector3f *)&stack0xfffffe2c,
             (CVector3f *)&stack0xfffffe74,(CVector3f *)&stack0xfffffe44);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_5c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_170 + 4),(CVector3f *)&stack0xfffffe40,
             (CVector3f *)&stack0xfffffe58,(CVector3f *)(auStack_180 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80((CDemonTriangle *)auStack_168,in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_168 + 4),(CVector3f *)&stack0xfffffe48,
             (CVector3f *)auStack_170,(CVector3f *)&stack0xfffffe78);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80((CDemonTriangle *)auStack_160,in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_124,(CVector3f *)&stack0xfffffe44,
             (CVector3f *)&stack0xfffffe50,(CVector3f *)auStack_180);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_124 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_11c,(CVector3f *)&stack0xfffffe4c,
             (CVector3f *)(auStack_180 + 8),(CVector3f *)&stack0xfffffe7c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_11c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_dc,(CVector3f *)&stack0xfffffe6c,
             (CVector3f *)(auStack_168 + 4),(CVector3f *)(auStack_160 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_dc + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_d4,(CVector3f *)&stack0xfffffe74,
             (CVector3f *)(auStack_160 + 0x10),(CVector3f *)auStack_180);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_d4 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_94,(CVector3f *)&stack0xfffffe64,
             (CVector3f *)&stack0xfffffe7c,(CVector3f *)(auStack_180 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_94 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_8c,(CVector3f *)&stack0xfffffe6c,(CVector3f *)auStack_170,
             (CVector3f *)&stack0xfffffe78);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_8c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_4c,(CVector3f *)(auStack_160 + 4),
             (CVector3f *)(auStack_160 + 0x10),(CVector3f *)(auStack_160 + 0x28));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_4c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_4c + 8),(CVector3f *)(auStack_160 + 0xc),
             (CVector3f *)(auStack_160 + 0x30),(CVector3f *)(auStack_160 + 0x24));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_4c + 0xc),in_stack_00000020);
  return (uint)(in_stack_00000020->max_distance < in_stack_00000058);
}
