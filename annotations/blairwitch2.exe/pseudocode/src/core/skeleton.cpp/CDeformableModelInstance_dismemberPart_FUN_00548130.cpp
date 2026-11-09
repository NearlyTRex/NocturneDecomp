// Name: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130
// Address: 00548130
// Address Range: [[00548130, 005481cf]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_00548130(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_00548130(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

{
  CDeformableModel *this_ptr_00;
  uint lod_index;
  byte *puVar1;
  
  if (body_part == (CBodyPart *)0x0) {
    *(uint *)(&this_ptr->field_0x2140 + part_index * 4) = 0;
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  lod_index = (uint)(1 < *(int *)this_ptr_00);
  for (puVar1 = &this_ptr_00->field_0x0 + lod_index * 8;
      (0 < (int)lod_index && (*(int *)(puVar1 + 8) != 0)); puVar1 = puVar1 + -8) {
    lod_index = lod_index - 1;
  }
  if (lod_index != *(uint *)&this_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(this_ptr,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_00543490
            (this_ptr_00,*(int *)&this_ptr->field_0x2230,body_part,part_index,
             *(CVector3i **)&this_ptr->field_0x2234,
             *(int *)(&this_ptr->field_0x21b8 + part_index * 4));
  *(uint *)(&this_ptr->field_0x2140 + part_index * 4) = 0;
  return;
}
