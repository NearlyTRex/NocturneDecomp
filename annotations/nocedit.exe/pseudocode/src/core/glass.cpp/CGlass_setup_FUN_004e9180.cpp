// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// Address Range: [[004e9180, 004e9197]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

{
  char cVar1;
  double dVar2;
  int iVar3;
  CVector3f *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
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
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    local_84.z = 0.0;
    local_84.y = 0.0;
    local_84.x = (this_ptr->glass_size).x * 0.5f;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_a8,&local_84);
    local_78.x = (this_ptr->base).location.position.x + pCVar4->x;
    local_78.y = (this_ptr->base).location.position.y + pCVar4->y;
    local_78.z = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_48 != &local_78) {
      local_48.x = local_78.x;
      local_48.y = local_78.y;
      local_48.z = local_78.z;
    }
    local_84.x = -local_84.x;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_54,&local_84);
    local_3c.x = (this_ptr->base).location.position.x + pCVar4->x;
    local_3c.y = (this_ptr->base).location.position.y + pCVar4->y;
    local_3c.z = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_60 != &local_3c) {
      local_60.x = local_3c.x;
      local_60.y = local_3c.y;
      local_60.z = local_3c.z;
    }
    local_84.y = (this_ptr->glass_size).y;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_6c,&local_84);
    local_cc.x = (this_ptr->base).location.position.x + pCVar4->x;
    local_cc.y = (this_ptr->base).location.position.y + pCVar4->y;
    local_cc.z = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_c0 != &local_cc) {
      local_c0.x = local_cc.x;
      local_c0.y = local_cc.y;
      local_c0.z = local_cc.z;
    }
    local_84.x = -local_84.x;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_9c,&local_84);
    local_90.x = (this_ptr->base).location.position.x + pCVar4->x;
    local_90.y = (this_ptr->base).location.position.y + pCVar4->y;
    local_90.z = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_b4 != &local_90) {
      local_b4.x = local_90.x;
      local_b4.y = local_90.y;
      local_b4.z = local_90.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00521400
              (&this_ptr->mirror,&local_48,&local_60,&local_c0,&local_b4);
  }
  dVar9 = round((double)((this_ptr->glass_size).x * (float)0.5))
  ;
  local_18 = (int)ROUND(dVar9);
  this_ptr->grid_cols = local_18 + 1;
  if (4 < local_18 + 1) {
    this_ptr->grid_cols = 4;
  }
  dVar9 = round((double)((this_ptr->glass_size).y * (float)0.5))
  ;
  local_1c = (int)ROUND(dVar9);
  this_ptr->grid_rows = local_1c + 1;
  if (4 < local_1c + 1) {
    this_ptr->grid_rows = 4;
  }
  iVar3 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar3;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar3)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count,
               this_ptr->broken_polygon_count);
  }
  local_2c = (this_ptr->glass_size).x / (float)this_ptr->grid_cols;
  local_3c.y = (this_ptr->glass_size).y / (float)this_ptr->grid_rows;
  iVar3 = 0;
  fVar12 = 0.0;
  local_30 = this_ptr->broken_vertices;
  for (local_28 = 0; local_28 < this_ptr->grid_rows + 1; local_28 = local_28 + 1) {
    fVar11 = -(this_ptr->glass_size).x * (float)0.5;
    pCVar4 = local_30 + iVar3;
    pcVar8 = (this_ptr->base).actor_name + iVar3 * 4;
    for (iVar6 = 0; iVar6 < this_ptr->grid_cols + 1; iVar6 = iVar6 + 1) {
      if (pCVar4 != (CVector3f *)&stack0xffffff20) {
        pCVar4->x = fVar11;
        pCVar4->y = fVar12;
        pCVar4->z = 0.0;
      }
      dVar2 = 131072;
      dVar9 = 16515072;
      local_1c = iVar6;
      dVar10 = round
                         (((double)iVar6 / (double)this_ptr->grid_cols) * 16515072 +
                          131072);
      *(int *)(pcVar8 + 0x5e4) = (int)ROUND(dVar10);
      local_20 = this_ptr->grid_rows - (int)local_2c;
      fVar11 = 7.216921e-39;
      dVar9 = round
                        (dVar2 + ((double)local_20 / (double)this_ptr->grid_rows) * dVar9);
      local_24 = (int)ROUND(dVar9);
      pCVar4 = pCVar4 + 1;
      *(int *)(pcVar8 + 0x648) = local_24;
      iVar3 = iVar3 + 1;
      fVar11 = fVar11 + local_3c.z;
      pcVar8 = pcVar8 + 4;
    }
    fVar12 = fVar12 + local_3c.y;
  }
  local_24 = 0;
  local_20 = 0;
  if (0 < this_ptr->grid_rows) {
    local_3c.z = (float)this_ptr->broken_quads;
    do {
      iVar3 = 0;
      if (0 < this_ptr->grid_cols) {
        pSVar5 = (SMRGLPrimitiveQuad *)((int)local_3c.z + local_20 * 0x48);
        do {
          (pSVar5->base).base.count = 4;
          (pSVar5->base).surface_normal.D = 0;
          iVar6 = (pSVar5->base).surface_normal.D;
          (pSVar5->base).surface_normal.C = iVar6;
          (pSVar5->base).surface_normal.B = iVar6;
          (pSVar5->base).surface_normal.A = iVar6;
          iVar6 = (this_ptr->grid_cols + 1) * local_24 + iVar3;
          pSVar5->vertices[0].vertex_index = iVar6;
          pSVar5->vertices[0].texture_u = this_ptr->texture_u[iVar6];
          pSVar5->vertices[0].texture_v = this_ptr->texture_v[iVar6];
          pSVar5->vertices[1].vertex_index = iVar6 + 1;
          pSVar5->vertices[1].texture_u = this_ptr->texture_u[iVar6 + 1];
          pSVar5->vertices[1].texture_v = this_ptr->texture_v[iVar6 + 1];
          pSVar5->vertices[2].vertex_index = this_ptr->grid_cols + iVar6 + 2;
          pSVar5->vertices[2].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar6 + 2];
          pSVar5->vertices[2].texture_v = this_ptr->texture_v[this_ptr->grid_cols + iVar6 + 2];
          pSVar5->vertices[3].vertex_index = this_ptr->grid_cols + iVar6 + 1;
          pSVar5->vertices[3].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar6 + 1];
          pSVar5->vertices[3].texture_v = this_ptr->texture_v[iVar6 + this_ptr->grid_cols + 1];
          iVar3 = iVar3 + 1;
          local_20 = local_20 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar3 < this_ptr->grid_cols);
      }
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->grid_rows);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar3 = stricmp(this_ptr->break_event,"none");
  if (iVar3 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar1 = this_ptr->break_event[0];
  (this_ptr->base).process_disabled = 0;
  if (cVar1 == '\0') {
    (this_ptr->base).process_disabled = 1;
  }
  this_ptr->pending_background_render = 0;
  if (this_ptr->background_flag != 0) {
    pcVar8 = (this_ptr->broken_texture).texture_name;
    iVar3 = strcmp(pcVar8,"7YEARS.RAW");
    if (iVar3 == 0) {
      iVar3 = stricmp
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "factwinx.raw";
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = stricmp
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "dockwinx.raw";
        pcVar8 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = stricmp
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo10x.raw";
        pcVar8 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = stricmp
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo11x.raw";
        pcVar8 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
