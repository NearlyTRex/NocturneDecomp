// Name: core_setcolid.cpp_FUN_005580d0
// Address: 005580d0
// Address Range: [[005580d0, 00558448]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_FUN_005580d0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_FUN_005580d0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1044 [906];
  float *pfVar4;
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
  float local_5c;
  float afStack_58 [2];
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c [3];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  pCVar1 = &local_20c;
  iVar2 = 0;
  __arrinit(&local_20c,8,&g_CVectorTypeInfo);
  do {
    core_box_cpp_FUN_00420570(bounding_box,iVar2);
    pfVar4 = afStack_58 + 0xb;
    local_2c[0] = (float)local_38;
    afStack_58[(uint)bVar3 * -2 + 0xc] = afStack_58[(uint)bVar3 * -2 + 9];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    core_dirmat_cpp_FUN_0045f690(orientation_matrix,pfVar4);
    local_44 = local_5c;
    afStack_58[(uint)bVar3 * -2 + 6] = afStack_58[(uint)bVar3 * -2];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_20 = local_44 + *(float *)position;
    local_1c = local_40 + *(float *)&position->field_0x4;
    local_18 = local_3c + *(float *)&position->field_0x8;
    local_50._0_4_ = local_44 + *(float *)position;
    afStack_58[(uint)bVar3 * -2 + 3] = afStack_58[(uint)bVar3 * -2 + 0xf];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
    if (pCVar1 != (CVector3f *)(afStack_58 + 2)) {
      *(uint *)pCVar1 = local_50._0_4_;
      *(uint *)&pCVar1->field_0x4 = local_50._4_4_;
      *(uint *)&pCVar1->field_0x8 = local_50._8_4_;
    }
    iVar2 = iVar2 + 1;
    pCVar1 = pCVar1 + 1;
  } while (iVar2 < 8);
  local_14 = *(float *)cylinder;
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_cc,&local_20c,&local_1dc,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_cc,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_cc,&local_20c,&local_1c4,&local_1f4);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_cc,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_104,&local_200,&local_1e8,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_104,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_104,&local_200,&local_1b8,&local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_104,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_13c,&local_20c,&local_200,&local_1d0);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_13c,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_13c,&local_20c,&local_1d0,&local_1dc);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_13c,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_1ac,&local_1f4,&local_1c4,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_1ac,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_1ac,&local_1f4,&local_1b8,&local_1e8);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_1ac,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_174,&local_20c,&local_1f4,&local_1e8);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_174,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_174,&local_20c,&local_1e8,&local_200);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_174,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_94,&local_1dc,&local_1d0,&local_1b8);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_94,cylinder);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
            (&local_94,&local_1dc,&local_1b8,&local_1c4);
  core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(&local_94,cylinder);
  return (uint)(*(float *)cylinder < local_14);
}
