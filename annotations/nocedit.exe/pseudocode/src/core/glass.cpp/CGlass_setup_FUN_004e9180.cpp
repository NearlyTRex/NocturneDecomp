// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// Address Range: [[004e9180, 004e9197]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_setup_FUN_004e9180(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

{
  char cVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_ac;
  byte local_a8 [12];
  CVector3f local_9c;
  CVector3f local_88;
  byte local_7c [8];
  byte local_74 [8];
  float local_6c;
  float fStack_68;
  float fStack_64;
  CVector3f local_5c;
  float fStack_50;
  float fStack_4c;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_1c;
  SMRGLPrimitiveQuad *local_18;
  CVector3f *local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    local_74._0_4_ = 0.0;
    local_7c._4_4_ = 0.0;
    local_7c._0_4_ = (this_ptr->glass_size).x * 0.5f;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,(CVector3f *)(local_a8 + 8),
                        (CVector3f *)local_7c);
    local_6c = (this_ptr->base).location.position.x + pCVar4->x;
    fStack_68 = (this_ptr->base).location.position.y + pCVar4->y;
    fStack_64 = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_3c != &local_6c) {
      local_3c = local_6c;
      local_38 = fStack_68;
      local_34 = fStack_64;
    }
    local_7c._4_4_ = local_7c._4_4_ ^ 0x80000000;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_48,(CVector3f *)(local_7c + 4));
    local_30.y = (this_ptr->base).location.position.x + pCVar4->x;
    local_30.z = (this_ptr->base).location.position.y + pCVar4->y;
    local_24 = (this_ptr->base).location.position.z + pCVar4->z;
    if (&fStack_50 != &local_30.y) {
      fStack_50 = local_30.y;
      fStack_4c = local_30.z;
      local_48.x = local_24;
    }
    local_74._4_4_ = (this_ptr->glass_size).y;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_5c,(CVector3f *)local_74);
    if (&local_ac != (float *)&stack0xffffff48) {
      local_ac = (this_ptr->base).location.position.x + pCVar4->x;
      local_a8._0_4_ = (this_ptr->base).location.position.y + pCVar4->y;
      local_a8._4_4_ = (this_ptr->base).location.position.z + pCVar4->z;
    }
    local_74._4_4_ = local_74._4_4_ ^ 0x80000000;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_88,(CVector3f *)(local_74 + 4));
    local_7c._4_4_ = (this_ptr->base).location.position.x + pCVar4->x;
    local_74._0_4_ = (this_ptr->base).location.position.y + pCVar4->y;
    local_74._4_4_ = (this_ptr->base).location.position.z + pCVar4->z;
    if (&local_9c != (CVector3f *)(local_7c + 4)) {
      local_9c.x = (float)local_7c._4_4_;
      local_9c.y = (float)local_74._0_4_;
      local_9c.z = (float)local_74._4_4_;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00521400
              (&this_ptr->mirror,&local_30,&local_48,(CVector3f *)local_a8,&local_9c);
  }
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)((this_ptr->glass_size).x * (float)0.5));
  this_ptr->field14_0xb2c = (int)ROUND(dVar13) + 1;
  if (4 < (int)ROUND(dVar13) + 1) {
    this_ptr->field14_0xb2c = 4;
  }
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)((this_ptr->glass_size).y * (float)0.5));
  this_ptr->field15_0xb30 = (int)ROUND(dVar13) + 1;
  if (4 < (int)ROUND(dVar13) + 1) {
    this_ptr->field15_0xb30 = 4;
  }
  iVar3 = this_ptr->field14_0xb2c * this_ptr->field15_0xb30;
  this_ptr->broken_vertex_count = (this_ptr->field14_0xb2c + 1) * (this_ptr->field15_0xb30 + 1);
  this_ptr->broken_polygon_count = iVar3;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar3)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count,
               this_ptr->broken_polygon_count);
  }
  fVar2 = (this_ptr->glass_size).x / (float)this_ptr->field14_0xb2c;
  local_1c = (this_ptr->glass_size).y / (float)this_ptr->field15_0xb30;
  iVar9 = 0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  local_14 = this_ptr->broken_vertices;
  for (iVar3 = 0; iVar3 < this_ptr->field15_0xb30 + 1; iVar3 = iVar3 + 1) {
    fVar14 = -(this_ptr->glass_size).x * (float)0.5;
    pCVar4 = local_14 + iVar9;
    pcVar10 = (this_ptr->base).actor_name + iVar9 * 4;
    for (iVar7 = 0; iVar7 < this_ptr->field14_0xb2c + 1; iVar7 = iVar7 + 1) {
      if (pCVar4 != (CVector3f *)&stack0xffffff3c) {
        pCVar4->x = fVar14;
        pCVar4->y = fVar15;
        pCVar4->z = fVar16;
      }
      fVar11 = (float10)16515072;
      fVar12 = (float10)131072;
      dVar13 = crt_math_c_round_FUN_005fe6b0
                         ((double)(((float10)iVar7 / (float10)this_ptr->field14_0xb2c) * fVar11 +
                                  fVar12));
      *(int *)(pcVar10 + 0x5e4) = (int)ROUND(dVar13);
      dVar13 = crt_math_c_round_FUN_005fe6b0
                         ((double)(fVar12 + ((float10)(this_ptr->field15_0xb30 - (int)fVar2) /
                                            (float10)this_ptr->field15_0xb30) * fVar11));
      pCVar4 = pCVar4 + 1;
      *(int *)(pcVar10 + 0x648) = (int)ROUND(dVar13);
      iVar9 = iVar9 + 1;
      fVar14 = fVar14 + fVar2;
      pcVar10 = pcVar10 + 4;
    }
    fVar15 = fVar15 + local_1c;
  }
  iVar3 = 0;
  iVar9 = 0;
  if (0 < this_ptr->field15_0xb30) {
    local_18 = this_ptr->broken_quads;
    do {
      iVar7 = 0;
      if (0 < this_ptr->field14_0xb2c) {
        pSVar5 = local_18 + iVar9;
        do {
          (pSVar5->base).base.count = 4;
          (pSVar5->base).surface_normal.D = 0;
          iVar6 = (pSVar5->base).surface_normal.D;
          (pSVar5->base).surface_normal.C = iVar6;
          (pSVar5->base).surface_normal.B = iVar6;
          (pSVar5->base).surface_normal.A = iVar6;
          iVar6 = (this_ptr->field14_0xb2c + 1) * iVar3 + iVar7;
          pSVar5->vertices[0].vertex_index = iVar6;
          pSVar5->vertices[0].texture_u = *(int *)(this_ptr->field12_0x4b8 + iVar6 * 4 + 300);
          pSVar5->vertices[0].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices + iVar6 * 4 + -0x7c);
          pSVar5->vertices[1].vertex_index = iVar6 + 1;
          pSVar5->vertices[1].texture_u = *(int *)(this_ptr->field12_0x4b8 + iVar6 * 4 + 0x130);
          pSVar5->vertices[1].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) + iVar6 * 4);
          pSVar5->vertices[2].vertex_index = this_ptr->field14_0xb2c + iVar6 + 2;
          pSVar5->vertices[2].texture_u =
               *(int *)(this_ptr->field12_0x4b8 + (this_ptr->field14_0xb2c + iVar6) * 4 + 0x134);
          pSVar5->vertices[2].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices +
                       (this_ptr->field14_0xb2c + iVar6) * 4 + -0x74);
          pSVar5->vertices[3].vertex_index = this_ptr->field14_0xb2c + iVar6 + 1;
          pSVar5->vertices[3].texture_u =
               *(int *)(this_ptr->field12_0x4b8 + (this_ptr->field14_0xb2c + iVar6) * 4 + 0x130);
          pSVar5->vertices[3].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) +
                       (iVar6 + this_ptr->field14_0xb2c) * 4);
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar7 < this_ptr->field14_0xb2c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->field15_0xb30);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->break_event,"none");
  if (iVar3 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar1 = this_ptr->break_event[0];
  (this_ptr->base).field17_0x104 = 0;
  if (cVar1 == '\0') {
    (this_ptr->base).field17_0x104 = 1;
  }
  this_ptr->field18_0xb3c = 0;
  if (this_ptr->background_flag != 0) {
    pcVar10 = (this_ptr->broken_texture).texture_name;
    iVar3 = crt_string_c_strcmp_FUN_005fef20(pcVar10,"7YEARS.RAW");
    if (iVar3 == 0) {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar3 == 0) {
        pcVar8 = "factwinx.raw";
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar8 = "dockwinx.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar3 == 0) {
        pcVar8 = "windo10x.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar3 == 0) {
        pcVar8 = "windo11x.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
