// Name: core_dcube.cpp_FUN_004545f0
// Address: 004545f0
// Address Range: [[004545f0, 00454741]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_FUN_004545f0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcube_cpp_FUN_004545f0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

{
  CVector3f *pCVar1;
  CDemonCubeTriangle *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1010 [1014];
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
  bVar7 = 0;
  iVar4 = -1;
  iVar5 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar6 = 0;
    do {
      uVar3 = core_dcube_cpp_triangleCylinderCollision_FUN_00452e20
                        ((CDemonCubeTriangle *)
                         ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar6),
                         cylinder_position,cylinder_radius,&output_height->x);
      if (uVar3 != 0) {
        iVar4 = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[0];
    if (pCVar1 != (CVector3f *)&DAT_01548b58) {
      _DAT_01548b58 = pCVar1->x;
      _DAT_01548b60 = pCVar1->z;
      _DAT_01548b5c = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != (CVector3f *)&DAT_01548b64) {
      _DAT_01548b64 = pCVar1->x;
      _DAT_01548b6c = pCVar1->z;
      _DAT_01548b68 = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != (CVector3f *)&DAT_01548b70) {
      _DAT_01548b70 = pCVar1->x;
      _DAT_01548b78 = pCVar1->z;
      _DAT_01548b74 = pCVar1->y;
    }
    *output_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + iVar4);
    pCVar2 = this_ptr->triangle_buffer;
    local_1c = -pCVar2[iVar4].triangle.normal.x;
    local_18[0] = -pCVar2[iVar4].triangle.normal.y;
    local_18[1] = -pCVar2[iVar4].triangle.normal.z;
    local_28.x = local_1c;
    *(float *)((int)&local_28 + (uint)bVar7 * -8 + 4) = local_18[(uint)bVar7 * -2];
    *(float *)((int)&local_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&local_28 != output_normal) {
      output_normal->x = local_28.x;
      output_normal->y = local_28.y;
      output_normal->z = local_28.z;
    }
    return 1;
  }
  return 0;
}
