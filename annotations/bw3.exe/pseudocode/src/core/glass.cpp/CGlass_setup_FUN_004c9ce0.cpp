// Name: core_glass.cpp_CGlass_setup_FUN_004c9ce0
// Address: 004c9ce0
// Address Range: [[004c9ce0, 004ca547]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004c9ce0(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004c9ce0(CGlass *this_ptr)

{
  char cVar1;
  UIntegerFloat UVar2;
  double dVar3;
  int iVar4;
  SMRGLPrimitiveQuad *pSVar5;
  CVector3f *pCVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  float afStackY_1120 [1013];
  float in_stack_fffffec8;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_8c;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [4];
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f aCStack_3c [2];
  int iStack_24;
  CVector3f *pCStack_20;
  float fStack_1c;
  SMRGLPrimitiveQuad *pSStack_18;
  float fStack_14;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,(SMRGLTextureBasic *)&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    CStack_48.z = 0.0;
    CStack_48.y = 0.0;
    CStack_48.x = (this_ptr->glass_size).x * 0.5f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&CStack_48,aCStack_3c);
    fStack_e4 = aCStack_3c[0].x;
    afStack_e0[(uint)bVar11 * -2] = *(float *)((int)aCStack_3c + (uint)bVar11 * -8 + 4);
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)aCStack_3c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    fStack_fc = (this_ptr->base).location.position.x + fStack_e4;
    afStack_f8[0] = (this_ptr->base).location.position.y + afStack_e0[0];
    afStack_f8[1] = (this_ptr->base).location.position.z + afStack_e0[1];
    CStack_d8.x = fStack_fc;
    afStack_e0[(uint)bVar11 * -2 + 3] = afStack_f8[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&CStack_f0 != (CVector3f *)(afStack_e0 + 2)) {
      CStack_f0.x = CStack_d8.x;
      CStack_f0.y = CStack_d8.y;
      CStack_f0.z = CStack_d8.z;
    }
    CStack_48.x = -CStack_48.x;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&CStack_48,&CStack_c0);
    afStack_74[2] = CStack_c0.x;
    afStack_74[(uint)bVar11 * -2 + 3] = *(float *)((int)&CStack_c0 + (uint)bVar11 * -8 + 4);
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         *(float *)((int)&CStack_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    fStack_78 = (this_ptr->base).location.position.x + afStack_74[2];
    afStack_74[0] = (this_ptr->base).location.position.y + afStack_74[3];
    afStack_74[1] = (this_ptr->base).location.position.z + fStack_64;
    CStack_54.x = fStack_78;
    afStack_74[(uint)bVar11 * -2 + 9] = afStack_74[(uint)bVar11 * -2];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&CStack_9c != (CVector3f *)(afStack_74 + 8)) {
      CStack_9c.x = CStack_54.x;
      CStack_9c.y = CStack_54.y;
      CStack_9c.z = CStack_54.z;
    }
    CStack_48.y = (this_ptr->glass_size).y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&CStack_48,(CVector3f *)&stack0xfffffec8);
    fStack_b4 = in_stack_fffffec8;
    afStack_b0[(uint)bVar11 * -2] = *(float *)(&stack0xfffffecc + (uint)bVar11 * -8);
    afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)(&stack0xfffffed0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    fStack_cc = (this_ptr->base).location.position.x + fStack_b4;
    fStack_c8 = (this_ptr->base).location.position.y + afStack_b0[0];
    fStack_c4 = (this_ptr->base).location.position.z + afStack_b0[1];
    CStack_84.x = fStack_cc;
    *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + 4) = afStack_e0[(uint)bVar11 * -2 + 6];
    *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (&CStack_108 != &CStack_84) {
      CStack_108.x = CStack_84.x;
      CStack_108.y = CStack_84.y;
      CStack_108.z = CStack_84.z;
    }
    CStack_48.x = -CStack_48.x;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&CStack_48,&CStack_12c);
    fStack_120 = CStack_12c.x;
    afStack_11c[(uint)bVar11 * -2] = *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + 4);
    afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    afStack_b0[2] = (this_ptr->base).location.position.x + fStack_120;
    afStack_b0[3] = (this_ptr->base).location.position.y + afStack_11c[0];
    fStack_a0 = (this_ptr->base).location.position.z + afStack_11c[1];
    CStack_60.x = afStack_b0[2];
    afStack_74[(uint)bVar11 * -2 + 6] = afStack_b0[(uint)bVar11 * -2 + 3];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (&CStack_114 != (CVector3f *)(afStack_74 + 5)) {
      CStack_114.x = CStack_60.x;
      CStack_114.y = CStack_60.y;
      CStack_114.z = CStack_60.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_004f3ff0
              (&this_ptr->mirror,&CStack_f0,&CStack_9c,&CStack_108,&CStack_114);
  }
  CStack_12c.y = 7.035886e-39;
  dVar12 = round
                     ((double)((this_ptr->glass_size).x * (float)0.5));
  this_ptr->grid_cols = (int)ROUND(dVar12) + 1;
  if (4 < (int)ROUND(dVar12) + 1) {
    this_ptr->grid_cols = 4;
  }
  CStack_12c.x = 7.03596e-39;
  dVar12 = round
                     ((double)((this_ptr->glass_size).y * (float)0.5));
  this_ptr->grid_rows = (int)ROUND(dVar12) + 1;
  if (4 < (int)ROUND(dVar12) + 1) {
    this_ptr->grid_rows = 4;
  }
  iVar4 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar4;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar4)) {
    g_CHAR_PTR_01d71de0 = "..\\core\\glass.cpp";
    g_INT_01d71de4 = 0x86;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CGlass::setup - Too many verticies(%d) or faces(%d)!");
  }
  fStack_14 = (this_ptr->glass_size).x / (float)this_ptr->grid_cols;
  fStack_1c = (this_ptr->glass_size).y / (float)this_ptr->grid_rows;
  iVar9 = 0;
  CStack_84.x = 0.0;
  CStack_84.y = 0.0;
  CStack_84.z = 0.0;
  pCStack_20 = this_ptr->broken_vertices;
  for (iVar4 = 0; iVar4 < this_ptr->grid_rows + 1; iVar4 = iVar4 + 1) {
    CStack_84.x = -(this_ptr->glass_size).x * (float)0.5;
    pCVar6 = pCStack_20 + iVar9;
    pcVar10 = (this_ptr->base).actor_name + iVar9 * 4;
    for (iVar7 = 0; iVar7 < this_ptr->grid_cols + 1; iVar7 = iVar7 + 1) {
      if (pCVar6 != &CStack_84) {
        pCVar6->x = CStack_84.x;
        pCVar6->y = CStack_84.y;
        pCVar6->z = CStack_84.z;
      }
      dVar3 = 131072;
      dVar12 = 16515072;
      dVar13 = round
                         (((double)iVar7 / (double)this_ptr->grid_cols) * 16515072 +
                          131072);
      *(int *)(pcVar10 + 0x614) = (int)ROUND(dVar13);
      CStack_12c.x = 7.037709e-39;
      dVar12 = round
                         (dVar3 + ((double)(this_ptr->grid_rows - (int)fStack_14) /
                                  (double)this_ptr->grid_rows) * dVar12);
      iVar4 = (int)ROUND(dVar12);
      pCVar6 = pCVar6 + 1;
      *(int *)(pcVar10 + 0x678) = iVar4;
      iVar9 = iVar9 + 1;
      fStack_8c = fStack_8c + fStack_1c;
      pcVar10 = pcVar10 + 4;
    }
    CStack_84.y = CStack_84.y + fStack_1c;
  }
  iVar4 = 0;
  iStack_24 = 0;
  if (0 < this_ptr->grid_rows) {
    pSStack_18 = this_ptr->broken_quads;
    do {
      iVar9 = 0;
      if (0 < this_ptr->grid_cols) {
        pSVar5 = pSStack_18 + iStack_24;
        do {
          (pSVar5->base).base.count = 4;
          (pSVar5->base).surface_normal.D.i = 0;
          UVar2 = (pSVar5->base).surface_normal.D;
          (pSVar5->base).surface_normal.C = UVar2;
          (pSVar5->base).surface_normal.B = UVar2;
          (pSVar5->base).surface_normal.A = UVar2;
          iVar7 = (this_ptr->grid_cols + 1) * iVar4 + iVar9;
          pSVar5->vertices[0].vertex_index = iVar7;
          pSVar5->vertices[0].texture_u = this_ptr->texture_u[iVar7];
          pSVar5->vertices[0].texture_v = this_ptr->texture_v[iVar7];
          pSVar5->vertices[1].vertex_index = iVar7 + 1;
          pSVar5->vertices[1].texture_u = this_ptr->texture_u[iVar7 + 1];
          pSVar5->vertices[1].texture_v = this_ptr->texture_v[iVar7 + 1];
          pSVar5->vertices[2].vertex_index = this_ptr->grid_cols + iVar7 + 2;
          pSVar5->vertices[2].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar7 + 2];
          pSVar5->vertices[2].texture_v = this_ptr->texture_v[this_ptr->grid_cols + iVar7 + 2];
          pSVar5->vertices[3].vertex_index = this_ptr->grid_cols + iVar7 + 1;
          pSVar5->vertices[3].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar7 + 1];
          pSVar5->vertices[3].texture_v = this_ptr->texture_v[iVar7 + this_ptr->grid_cols + 1];
          iVar9 = iVar9 + 1;
          iStack_24 = iStack_24 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar9 < this_ptr->grid_cols);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->grid_rows);
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
    pcVar10 = (this_ptr->broken_texture).texture_name;
    iVar4 = _strcmp(pcVar10,"7YEARS.RAW");
    if (iVar4 == 0) {
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar4 == 0) {
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
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar4 == 0) {
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
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar4 == 0) {
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
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar4 == 0) {
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
