// Name: core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0
// Address: 0043dcc0
// MANUAL RECONSTRUCTION
// Address Range: [[0043dcc0, 0043ddd2]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_createFromKFM_FUN_0043dcc0(CCloth *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_createFromKFM_FUN_0043dcc0(CCloth *this_ptr,char *filename)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;

  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->model,filename);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(&this_ptr->model);
  fVar4 = 0.005f;
  fVar3 = 0.9f;
  fVar2 = 32.0f;
  fVar1 = 0.125f;
  this_ptr->transparency = 1.0;
  fVar5 = 0.5f;
  this_ptr->double_sided = 1;
  fVar6 = 0.5f;
  this_ptr->locked_vertex_count = 0;
  fVar7 = 0.05f;
  this_ptr->collide_bone_count = 0;
  this_ptr->weight = fVar1;
  fVar1 = 0.15f;
  this_ptr->gravity = fVar2;
  this_ptr->dampen = fVar3;
  this_ptr->spring = fVar4;
  this_ptr->body_friction = fVar5;
  this_ptr->floor_friction = fVar6;
  this_ptr->wind_area = fVar7;
  this_ptr->mom_inert = fVar1;
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(this_ptr);
  iVar9 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    do {
      this_ptr->vertices[iVar9].offset_pos.x =
           (float)(this_ptr->model).vertex_list[iVar9].x * 0.00390625f;
      this_ptr->vertices[iVar9].offset_pos.y =
           (float)(this_ptr->model).vertex_list[iVar9].y * 0.00390625f;
      this_ptr->vertices[iVar9].offset_pos.z =
           (float)(this_ptr->model).vertex_list[iVar9].z * 0.00390625f;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (this_ptr->model).vertex_count);
  }
  return;
}
