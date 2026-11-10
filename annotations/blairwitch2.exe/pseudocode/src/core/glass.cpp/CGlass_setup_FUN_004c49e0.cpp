// Name: core_glass.cpp_CGlass_setup_FUN_004c49e0
// Address: 004c49e0
// Address Range: [[004c49e0, 004c5247]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_setup_FUN_004c49e0(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_setup_FUN_004c49e0(CGlass *this_ptr)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  CVector3f *pCVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
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
  int iVar14;
  
  bVar10 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->field_0x2c0);
  if (this_ptr->mirror_flag != 0) {
    uStack_40 = 0;
    fStack_44 = 0.0;
    fStack_48 = (this_ptr->glass_size).x * _DAT_005d9352;
    core_dirmat_cpp_FUN_00449530(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_e4 = fStack_3c;
    afStack_e0[(uint)bVar10 * -2] = afStack_38[(uint)bVar10 * -2];
    afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_38[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_fc = *(float *)&(this_ptr->base).field_0x20 + fStack_e4;
    afStack_f8[0] = *(float *)&(this_ptr->base).field_0x24 + afStack_e0[0];
    afStack_f8[1] = *(float *)&(this_ptr->base).field_0x28 + afStack_e0[1];
    CStack_d8.x = fStack_fc;
    afStack_e0[(uint)bVar10 * -2 + 3] = afStack_f8[(uint)bVar10 * -2];
    afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (&CStack_f0 != (CVector3f *)(afStack_e0 + 2)) {
      CStack_f0.x = CStack_d8.x;
      CStack_f0.y = CStack_d8.y;
      CStack_f0.z = CStack_d8.z;
    }
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_00449530(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    afStack_74[2] = fStack_c0;
    afStack_74[(uint)bVar10 * -2 + 3] = afStack_e0[(uint)bVar10 * -2 + 9];
    afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    fStack_78 = *(float *)&(this_ptr->base).field_0x20 + afStack_74[2];
    afStack_74[0] = *(float *)&(this_ptr->base).field_0x24 + afStack_74[3];
    afStack_74[1] = *(float *)&(this_ptr->base).field_0x28 + fStack_64;
    CStack_54.x = fStack_78;
    afStack_74[(uint)bVar10 * -2 + 9] = afStack_74[(uint)bVar10 * -2];
    afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (aCStack_9c != (CVector3f *)(afStack_74 + 8)) {
      aCStack_9c[0].x = CStack_54.x;
      aCStack_9c[0].y = CStack_54.y;
      aCStack_9c[0].z = CStack_54.z;
    }
    fStack_44 = (this_ptr->glass_size).y;
    core_dirmat_cpp_FUN_00449530(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_b4 = fStack_138;
    afStack_e0[(uint)bVar10 * -2 + 0xc] = (float)(&pcStack_134)[(uint)bVar10 * -2];
    afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         (&fStack_130)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    fStack_cc = *(float *)&(this_ptr->base).field_0x20 + fStack_b4;
    fStack_c8 = *(float *)&(this_ptr->base).field_0x24 + fStack_b0;
    fStack_c4 = *(float *)&(this_ptr->base).field_0x28 + fStack_ac;
    CStack_84.x = fStack_cc;
    *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + 4) = afStack_e0[(uint)bVar10 * -2 + 6];
    *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (&CStack_108 != &CStack_84) {
      CStack_108.x = CStack_84.x;
      CStack_108.y = CStack_84.y;
      CStack_108.z = CStack_84.z;
    }
    fStack_48 = -fStack_48;
    core_dirmat_cpp_FUN_00449530(&(this_ptr->base).orient_matrix,afStack_74 + 0xb);
    fStack_120 = in_stack_fffffed4;
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar10 * -8) =
         *(uint *)(&stack0xfffffed8 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xfffffee4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4) =
         *(uint *)(&stack0xfffffedc + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    fStack_a8 = *(float *)&(this_ptr->base).field_0x20 + fStack_120;
    fStack_a4 = *(float *)&(this_ptr->base).field_0x24 + fStack_11c;
    fStack_a0 = *(float *)&(this_ptr->base).field_0x28 + fStack_118;
    CStack_60.x = fStack_a8;
    afStack_74[(uint)bVar10 * -2 + 6] = afStack_e0[(uint)bVar10 * -2 + 0xf];
    afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    if (&CStack_114 != (CVector3f *)(afStack_74 + 5)) {
      CStack_114.x = CStack_60.x;
      CStack_114.y = CStack_60.y;
      CStack_114.z = CStack_60.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_004f98d0
              (&this_ptr->mirror,&CStack_f0,aCStack_9c,&CStack_108,&CStack_114);
  }
  fVar11 = (float10)(this_ptr->glass_size).x * (float10)_DAT_005d935a;
  round();
  this_ptr->grid_cols = (int)ROUND(fVar11) + 1;
  if (4 < (int)ROUND(fVar11) + 1) {
    this_ptr->grid_cols = 4;
  }
  fVar11 = (float10)(this_ptr->glass_size).y * (float10)_DAT_005d935a;
  round();
  this_ptr->grid_rows = (int)ROUND(fVar11) + 1;
  if (4 < (int)ROUND(fVar11) + 1) {
    this_ptr->grid_rows = 4;
  }
  iVar3 = this_ptr->grid_cols * this_ptr->grid_rows;
  this_ptr->broken_vertex_count = (this_ptr->grid_cols + 1) * (this_ptr->grid_rows + 1);
  this_ptr->broken_polygon_count = iVar3;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar3)) {
    fStack_130 = (float)"CGlass::setup - Too many verticies(%d) or faces(%d)!";
    _DAT_01d046a0 = "..\\core\\glass.cpp";
    _DAT_01d046a4 = 0x86;
    pcStack_134 = (char *)0x4c4af2;
    core_main_c_FUN_004e4500();
  }
  iVar3 = this_ptr->grid_cols;
  fVar1 = (this_ptr->glass_size).x;
  fStack_14 = (this_ptr->glass_size).y / (float)this_ptr->grid_rows;
  iVar8 = 0;
  CStack_84.z = 0.0;
  fStack_78 = 0.0;
  afStack_74[0] = 0.0;
  pCStack_18 = this_ptr->broken_vertices;
  for (iVar14 = 0; iVar14 < this_ptr->grid_rows + 1; iVar14 = iVar14 + 1) {
    CStack_84.z = -(this_ptr->glass_size).x * (float)_DAT_005d935a;
    pCVar5 = pCStack_18 + iVar8;
    for (iVar6 = 0; iVar6 < this_ptr->grid_cols + 1; iVar6 = iVar6 + 1) {
      if (pCVar5 != (CVector3f *)&CStack_84.z) {
        pCVar5->x = CStack_84.z;
        pCVar5->y = fStack_78;
        pCVar5->z = afStack_74[0];
      }
      fVar11 = (float10)_DAT_005d9362;
      fVar12 = (float10)_DAT_005d936a;
      fVar13 = ((float10)iVar6 / (float10)this_ptr->grid_cols) * fVar11 + fVar12;
      round();
      *(int *)(extraout_ECX + 0x740) = (int)ROUND(fVar13);
      fVar12 = fVar12 + ((float10)(this_ptr->grid_rows - iVar14) / (float10)this_ptr->grid_rows) *
                        fVar11;
      round();
      pCVar5 = (CVector3f *)(extraout_EDX + 0xc);
      *(int *)(extraout_ECX_00 + 0x7a0) = (int)ROUND(fVar12);
      iVar8 = iVar8 + 1;
      CStack_84.z = CStack_84.z + fVar1 / (float)iVar3;
    }
    fStack_78 = fStack_78 + fStack_14;
  }
  iVar3 = 0;
  iStack_1c = 0;
  if (0 < this_ptr->grid_rows) {
    do {
      iVar14 = 0;
      if (0 < this_ptr->grid_cols) {
        piVar4 = this_ptr->texture_v + iStack_1c * 0x12 + 0x19;
        do {
          piVar4[1] = 4;
          piVar4[5] = 0;
          iVar8 = piVar4[5];
          piVar4[4] = iVar8;
          piVar4[3] = iVar8;
          piVar4[2] = iVar8;
          iVar8 = (this_ptr->grid_cols + 1) * iVar3 + iVar14;
          piVar4[6] = iVar8;
          piVar4[7] = this_ptr->texture_u[iVar8];
          piVar4[8] = this_ptr->texture_v[iVar8];
          piVar4[9] = iVar8 + 1;
          piVar4[10] = this_ptr->texture_u[iVar8 + 1];
          piVar4[0xb] = this_ptr->texture_v[iVar8 + 1];
          piVar4[0xc] = this_ptr->grid_cols + iVar8 + 2;
          piVar4[0xd] = this_ptr->texture_u[this_ptr->grid_cols + iVar8 + 2];
          piVar4[0xe] = this_ptr->texture_v[this_ptr->grid_cols + iVar8 + 2];
          piVar4[0xf] = this_ptr->grid_cols + iVar8 + 1;
          piVar4[0x10] = this_ptr->texture_u[this_ptr->grid_cols + iVar8 + 1];
          piVar4[0x11] = this_ptr->texture_v[iVar8 + this_ptr->grid_cols + 1];
          iVar14 = iVar14 + 1;
          iStack_1c = iStack_1c + 1;
          piVar4 = piVar4 + 0x12;
        } while (iVar14 < this_ptr->grid_cols);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->grid_rows);
  }
  *(uint *)&(this_ptr->base).field_0xfc = (uint)(this_ptr->opacity < 0xfde9);
  fStack_130 = 7.00852e-39;
  iVar3 = _stricmp(this_ptr->break_event,(char *)0x5d92dd);
  if (iVar3 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar2 = this_ptr->break_event[0];
  *(uint *)&(this_ptr->base).field_0x104 = 0;
  if (cVar2 == '\0') {
    *(uint *)&(this_ptr->base).field_0x104 = 1;
  }
  this_ptr->pending_background_render = 0;
  if (this_ptr->background_flag != 0) {
    pcVar9 = &this_ptr->field_0x4d8;
    fStack_130 = 7.008643e-39;
    iVar3 = _strcmp(pcVar9,"7YEARS.RAW");
    if (iVar3 == 0) {
      fStack_130 = 7.008677e-39;
      iVar3 = _stricmp(&this_ptr->field_0x2c8,"factwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "factwinx.raw";
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008716e-39;
      iVar3 = _stricmp(&this_ptr->field_0x2c8,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "dockwinx.raw";
        pcVar9 = &this_ptr->field_0x4d8;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008802e-39;
      iVar3 = _stricmp(&this_ptr->field_0x2c8,"windo10.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo10x.raw";
        pcVar9 = &this_ptr->field_0x4d8;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
      }
      fStack_130 = 7.008887e-39;
      iVar3 = _stricmp(&this_ptr->field_0x2c8,"windo11.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo11x.raw";
        pcVar9 = &this_ptr->field_0x4d8;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') {
            return;
          }
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  return;
}
