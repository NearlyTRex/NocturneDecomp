// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// MANUAL RECONSTRUCTION
// Address Range: [[004e9180, 004e98d1]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar8;
  int iVar7;
  char *pcVar8;
  char *pcVar10;
  int iVar11;
  char *pcVar9;
  char *pcVar12;
  float local_d8;
  float local_d4;
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
  int local_20;
  int local_1c;
  int local_18;
  double dVar3;
  double dVar2;
  char cVar1;
  uint local_d0;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    local_84.z = 0.0;
    local_84.y = 0.0;
    local_84.x = (this_ptr->glass_size).x * 0.5f;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
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
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_54,&local_84);
    local_3c.x = (this_ptr->base).location.position.x + pCVar6->x;
    local_3c.y = (this_ptr->base).location.position.y + pCVar6->y;
    local_3c.z = (this_ptr->base).location.position.z + pCVar6->z;
    if (&local_60 != &local_3c) {
      local_60.x = local_3c.x;
      local_60.y = local_3c.y;
      local_60.z = local_3c.z;
    }
    local_84.y = (this_ptr->glass_size).y;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_6c,&local_84);
    local_cc.x = (this_ptr->base).location.position.x + pCVar6->x;
    local_cc.y = (this_ptr->base).location.position.y + pCVar6->y;
    local_cc.z = (this_ptr->base).location.position.z + pCVar6->z;
    if (&local_c0 != &local_cc) {
      local_c0.x = local_cc.x;
      local_c0.y = local_cc.y;
      local_c0.z = local_cc.z;
    }
    local_84.x = -local_84.x;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_9c,&local_84);
    local_90.x = (this_ptr->base).location.position.x + pCVar6->x;
    local_90.y = (this_ptr->base).location.position.y + pCVar6->y;
    local_90.z = (this_ptr->base).location.position.z + pCVar6->z;
    if (&local_b4 != &local_90) {
      local_b4.x = local_90.x;
      local_b4.y = local_90.y;
      local_b4.z = local_90.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00521400
              (&this_ptr->mirror,&local_48,&local_60,&local_c0,&local_b4);
  }
  iVar4 = (int)ROUND(ROUND((this_ptr->glass_size).x * (float)0.5)) + 1;
  this_ptr->grid_cols = iVar4;
  if (4 < iVar4) {
    this_ptr->grid_cols = 4;
  }
  iVar5 = (int)ROUND(ROUND((this_ptr->glass_size).y * (float)0.5)) + 1;
  this_ptr->grid_rows = iVar5;
  if (4 < iVar5) {
    this_ptr->grid_rows = 4;
  }
  iVar5 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar5;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar5)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count,
               this_ptr->broken_polygon_count);
  }
  iVar5 = this_ptr->grid_cols;
  fVar1 = (this_ptr->glass_size).x;
  iVar8 = this_ptr->grid_rows;
  fVar2 = (this_ptr->glass_size).y;
  iVar11 = 0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  local_d0 = 0;
  for (local_20 = 0; local_20 < this_ptr->grid_rows + 1; local_20 = local_20 + 1) {
    local_d8 = -(this_ptr->glass_size).x * (float)0.5;
    pCVar6 = this_ptr->broken_vertices + iVar11;
    for (iVar7 = 0; iVar7 < this_ptr->grid_cols + 1; iVar7 = iVar7 + 1) {
      if (pCVar6 != (CVector3f *)&local_d8) {
        pCVar6->x = local_d8;
        pCVar6->y = local_d4;
        pCVar6->z = 0.0;
      }
      dVar3 = 131072;
      dVar2 = 16515072;
      this_ptr->texture_u[iVar11] =
           (int)ROUND(ROUND(((double)iVar7 / (double)this_ptr->grid_cols) * 16515072 +
                            131072));
      pCVar6 = pCVar6 + 1;
      this_ptr->texture_v[iVar11] =
           (int)ROUND(ROUND(dVar3 + ((double)(this_ptr->grid_rows - local_20) /
                                    (double)this_ptr->grid_rows) * dVar2));
      iVar11 = iVar11 + 1;
      local_d8 = local_d8 + fVar1 / (float)iVar5;
    }
    local_d4 = local_d4 + fVar2 / (float)iVar8;
  }
  local_1c = 0;
  local_18 = 0;
  if (0 < this_ptr->grid_rows) {
    do {
      iVar5 = 0;
      if (0 < this_ptr->grid_cols) {
        pSVar6 = this_ptr->broken_quads + local_18;
        do {
          (pSVar6->base).base.count = 4;
          (pSVar6->base).surface_normal.D.i = 0;
          iVar8 = (pSVar6->base).surface_normal.D.i;
          (pSVar6->base).surface_normal.C.i = iVar8;
          (pSVar6->base).surface_normal.B.i = iVar8;
          (pSVar6->base).surface_normal.A.i = iVar8;
          iVar8 = (this_ptr->grid_cols + 1) * local_1c + iVar5;
          pSVar6->vertices[0].vertex_index = iVar8;
          pSVar6->vertices[0].texture_u = this_ptr->texture_u[iVar8];
          pSVar6->vertices[0].texture_v = this_ptr->texture_v[iVar8];
          pSVar6->vertices[1].vertex_index = iVar8 + 1;
          pSVar6->vertices[1].texture_u = this_ptr->texture_u[iVar8 + 1];
          pSVar6->vertices[1].texture_v = this_ptr->texture_v[iVar8 + 1];
          pSVar6->vertices[2].vertex_index = this_ptr->grid_cols + iVar8 + 2;
          pSVar6->vertices[2].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar8 + 2];
          pSVar6->vertices[2].texture_v = this_ptr->texture_v[this_ptr->grid_cols + iVar8 + 2];
          pSVar6->vertices[3].vertex_index = this_ptr->grid_cols + iVar8 + 1;
          pSVar6->vertices[3].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar8 + 1];
          pSVar6->vertices[3].texture_v = this_ptr->texture_v[iVar8 + this_ptr->grid_cols + 1];
          iVar5 = iVar5 + 1;
          local_18 = local_18 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar5 < this_ptr->grid_cols);
      }
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->grid_rows);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar5 = _stricmp(this_ptr->break_event,"none");
  if (iVar5 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar1 = this_ptr->break_event[0];
  (this_ptr->base).process_disabled = 0;
  if (cVar1 == '\0') {
    (this_ptr->base).process_disabled = 1;
  }
  this_ptr->pending_background_render = 0;
  if (this_ptr->background_flag != 0) {
    pcVar12 = (this_ptr->broken_texture).texture_name;
    iVar5 = _strcmp(pcVar12,"7YEARS.RAW");
    if (iVar5 == 0) {
      iVar5 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar5 == 0) {
        pcVar10 = "factwinx.raw";
        do {
          cVar3 = *pcVar10;
          *pcVar12 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar12[1] = cVar3;
          pcVar12 = pcVar12 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar5 == 0) {
        pcVar8 = "dockwinx.raw";
        pcVar9 = (this_ptr->broken_texture).texture_name;
        do {
          cVar3 = *pcVar8;
          *pcVar9 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar3;
          pcVar9 = pcVar9 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar5 == 0) {
        pcVar10 = "windo10x.raw";
        pcVar12 = (this_ptr->broken_texture).texture_name;
        do {
          cVar3 = *pcVar10;
          *pcVar12 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar12[1] = cVar3;
          pcVar12 = pcVar12 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar5 == 0) {
        pcVar10 = "windo11x.raw";
        pcVar12 = (this_ptr->broken_texture).texture_name;
        do {
          cVar3 = *pcVar10;
          *pcVar12 = cVar3;
          if (cVar3 == '\0') {
            return;
          }
          cVar3 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar12[1] = cVar3;
          pcVar12 = pcVar12 + 2;
        } while (cVar3 != '\0');
        return;
      }
    }
  }
  return;
}
