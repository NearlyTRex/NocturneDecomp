// Name: core_glass.cpp_CGlass_setup_FUN_004e1150
// Address: 004e1150
// Address Range: [[004e1150, 004e19b7]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004e1150(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e1150(CGlass *this_ptr)

{
  float fVar1;
  char cVar2;
  UIntegerFloat UVar3;
  int iVar4;
  SMRGLPrimitiveQuad *pSVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  CVector3f *pCVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_1120 [1013];
  float fStack_138;
  char *pcStack_134;
  float fStack_130;
  float in_stack_fffffed4;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
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
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f aCStack_9c [2];
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [4];
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  float afStack_38 [7];
  int iStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  int iVar15;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,&this_ptr->glass_texture);
  if (this_ptr->mirror_flag != 0) {
    uStack_40 = 0;
    fStack_44 = 0.0;
    fStack_48 = (this_ptr->glass_size).x * _DAT_005e3f0c;
    core_dirmat_cpp_FUN_0045f690(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_e4 = fStack_3c;
    afStack_e0[(uint)bVar11 * -2] = afStack_38[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
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
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_0045f690(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    afStack_74[2] = fStack_c0;
    afStack_74[(uint)bVar11 * -2 + 3] = afStack_e0[(uint)bVar11 * -2 + 9];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    fStack_78 = (this_ptr->base).location.position.x + afStack_74[2];
    afStack_74[0] = (this_ptr->base).location.position.y + afStack_74[3];
    afStack_74[1] = (this_ptr->base).location.position.z + fStack_64;
    CStack_54.x = fStack_78;
    afStack_74[(uint)bVar11 * -2 + 9] = afStack_74[(uint)bVar11 * -2];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (aCStack_9c != (CVector3f *)(afStack_74 + 8)) {
      aCStack_9c[0].x = CStack_54.x;
      aCStack_9c[0].y = CStack_54.y;
      aCStack_9c[0].z = CStack_54.z;
    }
    fStack_44 = (this_ptr->glass_size).y;
    core_dirmat_cpp_FUN_0045f690(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_b4 = fStack_138;
    afStack_e0[(uint)bVar11 * -2 + 0xc] = (float)(&pcStack_134)[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         (&fStack_130)[(uint)bVar11 * -2 + (uint)bVar11 * -2];
    fStack_cc = (this_ptr->base).location.position.x + fStack_b4;
    fStack_c8 = (this_ptr->base).location.position.y + fStack_b0;
    fStack_c4 = (this_ptr->base).location.position.z + fStack_ac;
    CStack_84.x = fStack_cc;
    *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + 4) = afStack_e0[(uint)bVar11 * -2 + 6];
    *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (&CStack_108 != &CStack_84) {
      CStack_108.x = CStack_84.x;
      CStack_108.y = CStack_84.y;
      CStack_108.z = CStack_84.z;
    }
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_0045f690(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_120 = in_stack_fffffed4;
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar11 * -8) =
         *(uint *)(&stack0xfffffed8 + (uint)bVar11 * -8);
    *(uint *)((int)&stack0xfffffee4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
         *(uint *)(&stack0xfffffedc + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    fStack_a8 = (this_ptr->base).location.position.x + fStack_120;
    fStack_a4 = (this_ptr->base).location.position.y + fStack_11c;
    fStack_a0 = (this_ptr->base).location.position.z + fStack_118;
    CStack_60.x = fStack_a8;
    afStack_74[(uint)bVar11 * -2 + 6] = afStack_e0[(uint)bVar11 * -2 + 0xf];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    if (&CStack_114 != (CVector3f *)(afStack_74 + 5)) {
      CStack_114.x = CStack_60.x;
      CStack_114.y = CStack_60.y;
      CStack_114.z = CStack_60.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00518820
              (&this_ptr->mirror,&CStack_f0,aCStack_9c,&CStack_108,&CStack_114);
  }
  fVar12 = (float10)(this_ptr->glass_size).x * (float10)_DAT_005e3f14;
  round();
  this_ptr->grid_cols = (int)ROUND(fVar12) + 1;
  if (4 < (int)ROUND(fVar12) + 1) {
    this_ptr->grid_cols = 4;
  }
  fVar12 = (float10)(this_ptr->glass_size).y * (float10)_DAT_005e3f14;
  round();
  this_ptr->grid_rows = (int)ROUND(fVar12) + 1;
  if (4 < (int)ROUND(fVar12) + 1) {
    this_ptr->grid_rows = 4;
  }
  iVar4 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar4;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar4)) {
    fStack_130 = (float)"CGlass::setup - Too many verticies(%d) or faces(%d)!";
    _DAT_01d1d400 = "..\\core\\glass.cpp";
    _DAT_01d1d404 = 0x86;
    pcStack_134 = (char *)0x4e1262;
    core_main_c_FUN_005030e0();
  }
  iVar4 = this_ptr->grid_cols;
  fVar1 = (this_ptr->glass_size).x;
  fStack_14 = (this_ptr->glass_size).y / (float)this_ptr->grid_rows;
  iVar9 = 0;
  CStack_84.z = 0.0;
  fStack_78 = 0.0;
  afStack_74[0] = 0.0;
  pCStack_18 = this_ptr->broken_vertices;
  for (iVar15 = 0; iVar15 < this_ptr->grid_rows + 1; iVar15 = iVar15 + 1) {
    CStack_84.z = -(this_ptr->glass_size).x * (float)_DAT_005e3f14;
    pCVar6 = pCStack_18 + iVar9;
    for (iVar7 = 0; iVar7 < this_ptr->grid_cols + 1; iVar7 = iVar7 + 1) {
      if (pCVar6 != (CVector3f *)&CStack_84.z) {
        pCVar6->x = CStack_84.z;
        pCVar6->y = fStack_78;
        pCVar6->z = afStack_74[0];
      }
      fVar12 = (float10)_DAT_005e3f1c;
      fVar13 = (float10)_DAT_005e3f24;
      fVar14 = ((float10)iVar7 / (float10)this_ptr->grid_cols) * fVar12 + fVar13;
      round();
      *(int *)(extraout_ECX + 0x5e4) = (int)ROUND(fVar14);
      fVar13 = fVar13 + ((float10)(this_ptr->grid_rows - iVar15) / (float10)this_ptr->grid_rows) *
                        fVar12;
      round();
      pCVar6 = (CVector3f *)(extraout_EDX + 0xc);
      *(int *)(extraout_ECX_00 + 0x644) = (int)ROUND(fVar13);
      iVar9 = iVar9 + 1;
      CStack_84.z = CStack_84.z + fVar1 / (float)iVar4;
    }
    fStack_78 = fStack_78 + fStack_14;
  }
  iVar4 = 0;
  iStack_1c = 0;
  if (0 < this_ptr->grid_rows) {
    do {
      iVar15 = 0;
      if (0 < this_ptr->grid_cols) {
        pSVar5 = this_ptr->broken_quads + iStack_1c;
        do {
          (pSVar5->base).base.count = 4;
          (pSVar5->base).surface_normal.D.i = 0;
          UVar3 = (pSVar5->base).surface_normal.D;
          (pSVar5->base).surface_normal.C = UVar3;
          (pSVar5->base).surface_normal.B = UVar3;
          (pSVar5->base).surface_normal.A = UVar3;
          iVar9 = (this_ptr->grid_cols + 1) * iVar4 + iVar15;
          pSVar5->vertices[0].vertex_index = iVar9;
          pSVar5->vertices[0].texture_u = this_ptr->texture_u[iVar9];
          pSVar5->vertices[0].texture_v = this_ptr->texture_v[iVar9];
          pSVar5->vertices[1].vertex_index = iVar9 + 1;
          pSVar5->vertices[1].texture_u = this_ptr->texture_u[iVar9 + 1];
          pSVar5->vertices[1].texture_v = this_ptr->texture_v[iVar9 + 1];
          pSVar5->vertices[2].vertex_index = this_ptr->grid_cols + iVar9 + 2;
          pSVar5->vertices[2].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar9 + 2];
          pSVar5->vertices[2].texture_v = this_ptr->texture_v[this_ptr->grid_cols + iVar9 + 2];
          pSVar5->vertices[3].vertex_index = this_ptr->grid_cols + iVar9 + 1;
          pSVar5->vertices[3].texture_u = this_ptr->texture_u[this_ptr->grid_cols + iVar9 + 1];
          pSVar5->vertices[3].texture_v = this_ptr->texture_v[iVar9 + this_ptr->grid_cols + 1];
          iVar15 = iVar15 + 1;
          iStack_1c = iStack_1c + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar15 < this_ptr->grid_cols);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->grid_rows);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  fStack_130 = 7.1719e-39;
  iVar4 = _stricmp(this_ptr->break_event,"none");
  if (iVar4 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar2 = this_ptr->break_event[0];
  (this_ptr->base).process_disabled = 0;
  if (cVar2 == '\0') {
    (this_ptr->base).process_disabled = 1;
  }
  this_ptr->pending_background_render = 0;
  if (this_ptr->background_flag != 0) {
    pcVar10 = (this_ptr->broken_texture).texture_name;
    fStack_130 = 7.172024e-39;
    iVar4 = _strcmp(pcVar10,"7YEARS.RAW");
    if (iVar4 == 0) {
      fStack_130 = 7.172057e-39;
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "factwinx.raw";
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.172096e-39;
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar4 == 0) {
        pcVar8 = "dockwinx.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.172182e-39;
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo10x.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.172267e-39;
      iVar4 = _stricmp
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar4 == 0) {
        pcVar8 = "windo11x.raw";
        pcVar10 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar8;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') {
            return;
          }
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  return;
}
