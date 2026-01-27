// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// Address Range: [[004e9180, 004e9197]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_setup_FUN_004e9180(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

{
  char cVar1;
  int iVar2;
  CVector3f *pCVar3;
  SMRGLPrimitiveQuad *pSVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  float10 fVar9;
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
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_a8,&local_84);
    local_78.x = (this_ptr->base).location.position.x + pCVar3->x;
    local_78.y = (this_ptr->base).location.position.y + pCVar3->y;
    local_78.z = (this_ptr->base).location.position.z + pCVar3->z;
    if (&local_48 != &local_78) {
      local_48.x = local_78.x;
      local_48.y = local_78.y;
      local_48.z = local_78.z;
    }
    local_84.x = -local_84.x;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_54,&local_84);
    local_3c.x = (this_ptr->base).location.position.x + pCVar3->x;
    local_3c.y = (this_ptr->base).location.position.y + pCVar3->y;
    local_3c.z = (this_ptr->base).location.position.z + pCVar3->z;
    if (&local_60 != &local_3c) {
      local_60.x = local_3c.x;
      local_60.y = local_3c.y;
      local_60.z = local_3c.z;
    }
    local_84.y = (this_ptr->glass_size).y;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_6c,&local_84);
    local_cc.x = (this_ptr->base).location.position.x + pCVar3->x;
    local_cc.y = (this_ptr->base).location.position.y + pCVar3->y;
    local_cc.z = (this_ptr->base).location.position.z + pCVar3->z;
    if (&local_c0 != &local_cc) {
      local_c0.x = local_cc.x;
      local_c0.y = local_cc.y;
      local_c0.z = local_cc.z;
    }
    local_84.x = -local_84.x;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_9c,&local_84);
    local_90.x = (this_ptr->base).location.position.x + pCVar3->x;
    local_90.y = (this_ptr->base).location.position.y + pCVar3->y;
    local_90.z = (this_ptr->base).location.position.z + pCVar3->z;
    if (&local_b4 != &local_90) {
      local_b4.x = local_90.x;
      local_b4.y = local_90.y;
      local_b4.z = local_90.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00521400
              (&this_ptr->mirror,&local_48,&local_60,&local_c0,&local_b4);
  }
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)((this_ptr->glass_size).x * (float)0.5));
  local_18 = (int)ROUND(dVar10);
  this_ptr->unk2 = local_18 + 1;
  if (4 < local_18 + 1) {
    this_ptr->unk2 = 4;
  }
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)((this_ptr->glass_size).y * (float)0.5));
  local_1c = (int)ROUND(dVar10);
  this_ptr->unk3 = local_1c + 1;
  if (4 < local_1c + 1) {
    this_ptr->unk3 = 4;
  }
  iVar2 = this_ptr->unk2 * this_ptr->unk3;
  this_ptr->broken_vertex_count = (this_ptr->unk2 + 1) * (this_ptr->unk3 + 1);
  this_ptr->broken_polygon_count = iVar2;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar2)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count,
               this_ptr->broken_polygon_count);
  }
  local_2c = (this_ptr->glass_size).x / (float)this_ptr->unk2;
  local_3c.y = (this_ptr->glass_size).y / (float)this_ptr->unk3;
  iVar2 = 0;
  fVar12 = 0.0;
  local_30 = this_ptr->broken_vertices;
  for (local_28 = 0; local_28 < this_ptr->unk3 + 1; local_28 = local_28 + 1) {
    fVar11 = -(this_ptr->glass_size).x * (float)0.5;
    pCVar3 = local_30 + iVar2;
    pcVar7 = (this_ptr->base).actor_name + iVar2 * 4;
    for (iVar5 = 0; iVar5 < this_ptr->unk2 + 1; iVar5 = iVar5 + 1) {
      if (pCVar3 != (CVector3f *)&stack0xffffff20) {
        pCVar3->x = fVar11;
        pCVar3->y = fVar12;
        pCVar3->z = 0.0;
      }
      fVar8 = (float10)16515072;
      fVar9 = (float10)131072;
      local_1c = iVar5;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)(((float10)iVar5 / (float10)this_ptr->unk2) * fVar8 + fVar9));
      *(int *)(pcVar7 + 0x5e4) = (int)ROUND(dVar10);
      local_20 = this_ptr->unk3 - (int)local_2c;
      fVar11 = 7.216921e-39;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)(fVar9 + ((float10)local_20 / (float10)this_ptr->unk3) * fVar8));
      local_24 = (int)ROUND(dVar10);
      pCVar3 = pCVar3 + 1;
      *(int *)(pcVar7 + 0x648) = local_24;
      iVar2 = iVar2 + 1;
      fVar11 = fVar11 + local_3c.z;
      pcVar7 = pcVar7 + 4;
    }
    fVar12 = fVar12 + local_3c.y;
  }
  local_24 = 0;
  local_20 = 0;
  if (0 < this_ptr->unk3) {
    local_3c.z = (float)this_ptr->broken_quads;
    do {
      iVar2 = 0;
      if (0 < this_ptr->unk2) {
        pSVar4 = (SMRGLPrimitiveQuad *)((int)local_3c.z + local_20 * 0x48);
        do {
          (pSVar4->base).base.count = 4;
          (pSVar4->base).surface_normal.D = 0;
          iVar5 = (pSVar4->base).surface_normal.D;
          (pSVar4->base).surface_normal.C = iVar5;
          (pSVar4->base).surface_normal.B = iVar5;
          (pSVar4->base).surface_normal.A = iVar5;
          iVar5 = (this_ptr->unk2 + 1) * local_24 + iVar2;
          pSVar4->vertices[0].vertex_index = iVar5;
          pSVar4->vertices[0].texture_u = *(int *)(this_ptr->unk1 + iVar5 * 4 + 300);
          pSVar4->vertices[0].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices + iVar5 * 4 + -0x7c);
          pSVar4->vertices[1].vertex_index = iVar5 + 1;
          pSVar4->vertices[1].texture_u = *(int *)(this_ptr->unk1 + iVar5 * 4 + 0x130);
          pSVar4->vertices[1].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) + iVar5 * 4);
          pSVar4->vertices[2].vertex_index = this_ptr->unk2 + iVar5 + 2;
          pSVar4->vertices[2].texture_u =
               *(int *)(this_ptr->unk1 + (this_ptr->unk2 + iVar5) * 4 + 0x134);
          pSVar4->vertices[2].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices +
                       (this_ptr->unk2 + iVar5) * 4 + -0x74);
          pSVar4->vertices[3].vertex_index = this_ptr->unk2 + iVar5 + 1;
          pSVar4->vertices[3].texture_u =
               *(int *)(this_ptr->unk1 + (this_ptr->unk2 + iVar5) * 4 + 0x130);
          pSVar4->vertices[3].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) +
                       (iVar5 + this_ptr->unk2) * 4);
          iVar2 = iVar2 + 1;
          local_20 = local_20 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar2 < this_ptr->unk2);
      }
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->unk3);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->break_event,"none");
  if (iVar2 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar1 = this_ptr->break_event[0];
  (this_ptr->base).unk7 = 0;
  if (cVar1 == '\0') {
    (this_ptr->base).unk7 = 1;
  }
  this_ptr->unk4 = 0;
  if (this_ptr->background_flag != 0) {
    pcVar7 = (this_ptr->broken_texture).texture_name;
    iVar2 = crt_string_c_strcmp_FUN_005fef20(pcVar7,"7YEARS.RAW");
    if (iVar2 == 0) {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar2 == 0) {
        pcVar6 = "factwinx.raw";
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar2 == 0) {
        pcVar6 = "dockwinx.raw";
        pcVar7 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar2 == 0) {
        pcVar6 = "windo10x.raw";
        pcVar7 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar2 == 0) {
        pcVar6 = "windo11x.raw";
        pcVar7 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
