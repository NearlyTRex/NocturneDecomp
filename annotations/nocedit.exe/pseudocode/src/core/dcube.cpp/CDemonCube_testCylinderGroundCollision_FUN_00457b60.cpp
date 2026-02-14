// Name: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
// Address: 00457b60
// Address Range: [[00457b60, 00457c9d]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

#include "nocturne.h"

int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CDemonCubeTriangle *pCVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3f local_1c;
  
  iVar7 = -1;
  iVar6 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar8 = 0;
    do {
      uVar5 = core_dcube_cpp_triangleCylinderCollision_FUN_00456040
                        ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar8),
                         cylinder_position,cylinder_radius,&output_height->x);
      if (uVar5 != 0) {
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar6 < this_ptr->triangle_count);
  }
  if (-1 < iVar7) {
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[0];
    if (pCVar3 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar3->x;
      g_TempNormal0.z = pCVar3->z;
      g_TempNormal0.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[1];
    if (pCVar3 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar3->x;
      g_TempNormal1.z = pCVar3->z;
      g_TempNormal1.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[2];
    if (pCVar3 != &g_TempNormal2) {
      g_TempNormal2.x = pCVar3->x;
      g_TempNormal2.z = pCVar3->z;
      g_TempNormal2.y = pCVar3->y;
    }
    *output_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + iVar7);
    pCVar4 = this_ptr->triangle_buffer;
    fVar1 = pCVar4[iVar7].normal.y;
    fVar2 = pCVar4[iVar7].normal.z;
    if (&local_1c != output_normal) {
      output_normal->x = -pCVar4[iVar7].normal.x;
      output_normal->y = -fVar1;
      output_normal->z = -fVar2;
    }
    return 1;
  }
  return 0;
}
