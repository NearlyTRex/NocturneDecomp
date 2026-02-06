// Name: core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0
// Address: 0043dcc0
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
  int *piVar8;
  int iVar9;
  CVector3f *pCVar10;
  int iVar11;
  
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
    pCVar10 = &this_ptr->vertices[0].offset_pos;
    iVar11 = 0;
    do {
      piVar8 = (int *)((int)(this_ptr->model).vertex_list + iVar11);
      iVar9 = iVar9 + 1;
      pCVar10->x = (float)*piVar8 * 0.00390625f;
      pCVar10->y = (float)piVar8[1] * 0.00390625f;
      pCVar10->z = (float)piVar8[2] * 0.00390625f;
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x17) + 8);
      iVar11 = iVar11 + 0xc;
    } while (iVar9 < (this_ptr->model).vertex_count);
  }
  return;
}
