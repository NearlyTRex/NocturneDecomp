// Name: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
// Address: 0044b500
// Address Range: [[0044b500, 0044b63d]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

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
      uVar5 = core_dcube_cpp_triangleCylinderCollision_FUN_00449d30
                        ((CDemonCubeTriangle *)
                         ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar8),
                         cylinder_position,cylinder_radius,&output_height->x);
      if (uVar5 != 0) {
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar6 < this_ptr->triangle_count);
  }
  if (-1 < iVar7) {
    pCVar3 = this_ptr->triangle_buffer[iVar7].triangle.vertices[0];
    if (pCVar3 != (CVector3f *)&DAT_014b89e8) {
      _DAT_014b89e8 = pCVar3->x;
      _DAT_014b89f0 = pCVar3->z;
      _DAT_014b89ec = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].triangle.vertices[1];
    if (pCVar3 != (CVector3f *)&DAT_014b89f4) {
      _DAT_014b89f4 = pCVar3->x;
      _DAT_014b89fc = pCVar3->z;
      _DAT_014b89f8 = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].triangle.vertices[2];
    if (pCVar3 != (CVector3f *)&DAT_014b8a00) {
      _DAT_014b8a00 = pCVar3->x;
      _DAT_014b8a08 = pCVar3->z;
      _DAT_014b8a04 = pCVar3->y;
    }
    *output_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + iVar7);
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
