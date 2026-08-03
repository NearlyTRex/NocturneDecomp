// Name: core_glass.cpp_CGlass_setup_FUN_004abc90
// Address: 004abc90
// Address Range: [[004abc90, 004ac3e1]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004abc90(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004abc90(CGlass *this_ptr)

{
  char cVar1;
  UIntegerFloat UVar2;
  double dVar3;
  int iVar4;
  CVector3f *pCVar5;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  CVector3f local_cc;
  CVector3f local_c0;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f *local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    local_84.z = 0.0;
    local_84.y = 0.0;
    local_84.x = (this_ptr->glass_size).x * 0.5f;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_a8,&local_84);
    local_78.x = (this_ptr->base).location.position.x + pCVar5->x;
    local_78.y = (this_ptr->base).location.position.y + pCVar5->y;
    local_78.z = (this_ptr->base).location.position.z + pCVar5->z;
    if (&local_48 != &local_78) {
      local_48.x = local_78.x;
      local_48.y = local_78.y;
      local_48.z = local_78.z;
    }
    local_84.x = -local_84.x;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_54,&local_84);
    local_3c.x = (this_ptr->base).location.position.x + pCVar5->x;
    local_3c.y = (this_ptr->base).location.position.y + pCVar5->y;
    local_3c.z = (this_ptr->base).location.position.z + pCVar5->z;
    if (&local_60 != &local_3c) {
      local_60.x = local_3c.x;
      local_60.y = local_3c.y;
      local_60.z = local_3c.z;
    }
    local_84.y = (this_ptr->glass_size).y;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_6c,&local_84);
    local_cc.x = (this_ptr->base).location.position.x + pCVar5->x;
    local_cc.y = (this_ptr->base).location.position.y + pCVar5->y;
    local_cc.z = (this_ptr->base).location.position.z + pCVar5->z;
    if (&local_c0 != &local_cc) {
      local_c0.x = local_cc.x;
      local_c0.y = local_cc.y;
      local_c0.z = local_cc.z;
    }
    local_84.x = -local_84.x;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_9c,&local_84);
    local_90.x = (this_ptr->base).location.position.x + pCVar5->x;
    local_90.y = (this_ptr->base).location.position.y + pCVar5->y;
    local_90.z = (this_ptr->base).location.position.z + pCVar5->z;
    if (&local_b4 != &local_90) {
      local_b4.x = local_90.x;
      local_b4.y = local_90.y;
      local_b4.z = local_90.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_004d6590
              (&this_ptr->mirror,&local_48,&local_60,&local_c0,&local_b4);
  }
  dVar10 = round
                     ((double)((this_ptr->glass_size).x * (float)0.5));
  local_18 = (int)ROUND(dVar10);
  this_ptr->grid_cols = local_18 + 1;
  if (4 < local_18 + 1) {
    this_ptr->grid_cols = 4;
  }
  dVar10 = round
                     ((double)((this_ptr->glass_size).y * (float)0.5));
  local_1c = (int)ROUND(dVar10);
  this_ptr->grid_rows = local_1c + 1;
  if (4 < local_1c + 1) {
    this_ptr->grid_rows = 4;
  }
  iVar4 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar4;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar4)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\glass.cpp";
    g_INT_01cc4804 = 0x86;
    core_main_c_FUN_004c8440
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count,
               this_ptr->broken_polygon_count);
  }
  local_2c = (this_ptr->glass_size).x / (float)this_ptr->grid_cols;
  local_3c.y = (this_ptr->glass_size).y / (float)this_ptr->grid_rows;
  iVar4 = 0;
  fVar13 = 0.0;
  local_30 = this_ptr->broken_vertices;
  for (local_28 = 0; local_28 < this_ptr->grid_rows + 1; local_28 = local_28 + 1) {
    fVar12 = -(this_ptr->glass_size).x * (float)0.5;
    pCVar5 = local_30 + iVar4;
    pcVar9 = (this_ptr->base).actor_name + iVar4 * 4;
    for (iVar7 = 0; iVar7 < this_ptr->grid_cols + 1; iVar7 = iVar7 + 1) {
      if (pCVar5 != (CVector3f *)&stack0xffffff20) {
        pCVar5->x = fVar12;
        pCVar5->y = fVar13;
        pCVar5->z = 0.0;
      }
      dVar3 = 131072;
      dVar10 = 16515072;
      local_1c = iVar7;
      dVar11 = round
                         (((double)iVar7 / (double)this_ptr->grid_cols) * 16515072 +
                          131072);
      *(int *)(pcVar9 + 0x5dc) = (int)ROUND(dVar11);
      local_20 = this_ptr->grid_rows - (int)local_2c;
      fVar12 = 6.865027e-39;
      dVar10 = round
                         (dVar3 + ((double)local_20 / (double)this_ptr->grid_rows) * dVar10);
      local_24 = (int)ROUND(dVar10);
      pCVar5 = pCVar5 + 1;
      *(int *)(pcVar9 + 0x640) = local_24;
      iVar4 = iVar4 + 1;
      fVar12 = fVar12 + local_3c.z;
      pcVar9 = pcVar9 + 4;
    }
    fVar13 = fVar13 + local_3c.y;
  }
  local_24 = 0;
  local_20 = 0;
  if (0 < this_ptr->grid_rows) {
    local_3c.z = (float)this_ptr->broken_quads;
    do {
      iVar4 = 0;
      if (0 < this_ptr->grid_cols) {
        pSVar6 = (SMRGLPrimitiveQuad *)((int)local_3c.z + local_20 * 0x48);
        do {
          (pSVar6->base).base.count = 4;
          (pSVar6->base).surface_normal.D.i = 0;
          UVar2 = (pSVar6->base).surface_normal.D;
          (pSVar6->base).surface_normal.C = UVar2;
          (pSVar6->base).surface_normal.B = UVar2;
          (pSVar6->base).surface_normal.A = UVar2;
          iVar7 = (this_ptr->grid_cols + 1) * local_24 + iVar4;
          pSVar6->vertices[0].vertex_index = iVar7;
          pSVar6->vertices[0].texture_u = this_ptr->texture_u[iVar7];
          pSVar6->vertices[0].texture_v = this_ptr->texture_v[iVar7];
          pSVar6->vertices[1].vertex_index = iVar7 + 1;
          pSVar6->vertices[1].texture_u = this_ptr->texture_u[iVar7 + 1];
          pSVar6->vertices[1].texture_v = this_ptr->texture_v[iVar7 + 1];
          pSVar6->vertices[2].vertex_index = this_ptr->grid_cols + iVar7 + 2;
          pSVar6->vertices[2].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar7 + 2];
          pSVar6->vertices[2].texture_v = this_ptr->texture_v[this_ptr->grid_cols + iVar7 + 2];
          pSVar6->vertices[3].vertex_index = this_ptr->grid_cols + iVar7 + 1;
          pSVar6->vertices[3].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar7 + 1];
          pSVar6->vertices[3].texture_v = this_ptr->texture_v[iVar7 + this_ptr->grid_cols + 1];
          iVar4 = iVar4 + 1;
          local_20 = local_20 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar4 < this_ptr->grid_cols);
      }
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->grid_rows);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar4 = _stricmp(this_ptr->break_event,"none");
  if (iVar4 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar1 = this_ptr->break_event[0];
  (this_ptr->base).process_disabled = 0;
  if (cVar1 == '\0') {
    (this_ptr->base).process_disabled = 1;
  }
  this_ptr->pending_background_render = 0;
  if (this_ptr->background_flag != 0) {
    pcVar9 = (this_ptr->broken_texture).texture_name;
    iVar4 = _strcmp(pcVar9,"7YEARS.RAW");
    if (iVar4 == 0) {
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "factwinx.raw";
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "dockwinx.raw";
        pcVar9 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo10x.raw";
        pcVar9 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo11x.raw";
        pcVar9 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
