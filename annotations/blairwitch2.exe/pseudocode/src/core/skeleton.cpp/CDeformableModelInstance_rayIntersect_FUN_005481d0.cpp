// Name: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0
// Address: 005481d0
// Address Range: [[005481d0, 00548245]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CDeformableModel *pCVar1;
  float fVar2;
  int lod_index;
  uint uVar3;
  byte *puVar4;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  lod_index = *(int *)pCVar1 + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != *(int *)&this_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(this_ptr,lod_index);
  }
  puVar4 = &this_ptr->field_0x2140;
  uVar3 = *(uint *)&this_ptr->field_0x2234;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  fVar2 = (float)core_skeleton_cpp_FUN_00543a40
                           (pCVar1,lod_index,ray_origin,ray_direction,uVar3,puVar4);
  return fVar2;
}
