// Name: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
// Address: 00457b60
// MANUAL RECONSTRUCTION
// Address Range: [[00457b60, 00457c9d]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

#include "nocturne.h"

int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

{
  CVector3f *pCVar1;
  uint uVar5;
  int iVar6;
  int iVar7;
  CVector3f local_1c;
  float fVar1;
  CDemonCubeTriangle *pCVar4;
  CVector3f *pCVar3;
  float fVar2;
  
  iVar7 = -1;
  iVar6 = 0;
  if (0 < this_ptr->triangle_count) {
    do {
      uVar5 = core_dcube_cpp_triangleCylinderCollision_FUN_00456040
                        (&this_ptr->triangle_buffer[iVar6],
                         cylinder_position,cylinder_radius,&output_height->x);
      if (uVar5 != 0) {
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->triangle_count);
  }
  if (-1 < iVar7) {
    pCVar3 = this_ptr->triangle_buffer[iVar7].triangle.vertices[0];
    if (pCVar3 != &g_TempNormal0) {
      g_TempNormal0 = *pCVar3;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar7].triangle.vertices[1];
    if (pCVar1 != &g_TempNormal1) {
      g_TempNormal1 = *pCVar1;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar7].triangle.vertices[2];
    if (pCVar1 != &g_TempNormal2) {
      g_TempNormal2 = *pCVar1;
    }
    *output_material = (uint)((uchar *)this_ptr->ground_type_memory)[iVar7];
    pCVar4 = this_ptr->triangle_buffer;
    fVar1 = pCVar4[iVar7].triangle.normal.y;
    fVar2 = pCVar4[iVar7].triangle.normal.z;
    if (&local_1c != output_normal) {
      output_normal->x = -pCVar4[iVar7].triangle.normal.x;
      output_normal->y = -fVar1;
      output_normal->z = -fVar2;
    }
    return 1;
  }
  return 0;
}
