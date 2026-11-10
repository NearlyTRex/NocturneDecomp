// Name: core_wateract.cpp_CWaterActor_setup_FUN_00586af0
// Address: 00586af0
// Address Range: [[00586af0, 00587098]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00586af0(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00586af0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  SWaterVertex *pSVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *puVar8;
  int extraout_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  CWaterActor *pCVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  ulonglong uVar20;
  float fStack_34;
  int iStack_30;
  float fStack_28;
  int iStack_1c;
  int iStack_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  this_ptr->base_y =
       *(float *)&(this_ptr->base).field_0x24 - this_ptr->height_delta * this_ptr->param;
  if (this_ptr->round_flag == 0) {
    while( true ) {
      fVar14 = (float10)1 / (float10)this_ptr->patch_size;
      fVar15 = (float10)(this_ptr->size).z * fVar14;
      fVar14 = (float10)(this_ptr->size).x * fVar14;
      round();
      iVar4 = round();
      iVar5 = iVar4 + 1;
      iVar13 = (int)ROUND(fVar14);
      this_ptr->grid_cols = iVar13;
      iVar11 = iVar13 + 1;
      this_ptr->grid_rows = (int)ROUND(fVar15);
      this_ptr->vertex_count = iVar5 * iVar11;
      if (iVar5 * iVar11 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)_DAT_005edf36;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    fStack_34 = -(this_ptr->size).z * (float)_DAT_005edf2e;
    iVar9 = 0;
    iStack_18 = 0;
    if (0 < iVar5) {
      do {
        fStack_28 = -(this_ptr->size).x * (float)_DAT_005edf2e;
        if (0 < iVar11) {
          fVar15 = (float10)_DAT_005edf5e;
          fVar14 = (float10)_DAT_005edf56;
          fVar16 = (float10)_DAT_005edf2e;
          fVar17 = (float10)(fVar1 / (float)iVar13);
          pSVar6 = this_ptr->vertices + iVar9;
          do {
            *(uint *)&pSVar6->field_0x4 = 0;
            *(float *)pSVar6 = fStack_28;
            *(float *)&pSVar6->field_0x8 = fStack_34;
            fVar18 = (float10)(this_ptr->size).x;
            fVar18 = ((fVar18 * fVar16 + (float10)*(float *)pSVar6) / fVar18) * fVar15 * fVar14;
            iVar9 = round();
            *(int *)(iVar9 + 0x18) = (int)ROUND(fVar18) + 0x20000;
            fVar19 = ((float10)1 - (float10)*(float *)(iVar9 + 8) / (float10)(this_ptr->size).z) *
                     fVar15 * fVar14;
            fVar18 = (float10)fStack_28;
            uVar20 = round();
            iVar9 = (int)((ulonglong)uVar20 >> 0x20);
            pSVar6 = (SWaterVertex *)uVar20;
            fStack_28 = (float)(fVar18 + fVar17);
            *(int *)((int)(pSVar6 + -1) + 0x1c) = (int)ROUND(fVar19) + 0x20000;
          } while (extraout_ECX_01 < iVar11);
        }
        fStack_34 = fStack_34 + fVar2 / (float)iVar4;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iVar5);
    }
    puVar8 = &this_ptr->field_0x8104;
    iStack_30 = 0;
    if (0 < this_ptr->grid_rows) {
      do {
        iVar13 = 0;
        if (0 < this_ptr->grid_cols) {
          iVar4 = iStack_30 % 4 << 0x16;
          iVar5 = (iStack_30 % 4 + 1) * 0x400000;
          do {
            *(uint *)(puVar8 + 4) = 3;
            *(uint *)(puVar8 + 0x14) = 0;
            uVar3 = *(uint *)(puVar8 + 0x14);
            *(uint *)(puVar8 + 0x10) = uVar3;
            *(uint *)(puVar8 + 0xc) = uVar3;
            *(uint *)(puVar8 + 8) = uVar3;
            iVar11 = (this_ptr->grid_cols + 1) * iStack_30 + iVar13;
            *(int *)(puVar8 + 0x30) = iVar11;
            iVar11 = iVar11 + 1;
            *(int *)(puVar8 + 0x38) = iVar4;
            *(int *)(puVar8 + 0x24) = iVar11;
            iVar7 = iVar13 % 4 << 0x16;
            iVar10 = (iVar13 % 4 + 1) * 0x400000;
            *(int *)(puVar8 + 0x34) = iVar7;
            *(int *)(puVar8 + 0x28) = iVar10;
            *(int *)(puVar8 + 0x2c) = iVar4;
            *(int *)(puVar8 + 0x18) = iVar11 + this_ptr->grid_cols + 1;
            *(int *)(puVar8 + 0x1c) = iVar10;
            *(int *)(puVar8 + 0x20) = iVar5;
            *(uint *)(puVar8 + 0x4c) = 3;
            *(uint *)(puVar8 + 0x5c) = 0;
            uVar3 = *(uint *)(puVar8 + 0x5c);
            *(uint *)(puVar8 + 0x58) = uVar3;
            *(uint *)(puVar8 + 0x54) = uVar3;
            *(uint *)(puVar8 + 0x50) = uVar3;
            iVar11 = this_ptr->grid_cols;
            *(int *)(puVar8 + 0x7c) = iVar7;
            iVar11 = iVar13 + (iVar11 + 1) * iStack_30;
            *(int *)(puVar8 + 0x78) = iVar11;
            *(int *)(puVar8 + 0x80) = iVar4;
            iVar9 = this_ptr->grid_cols;
            *(int *)(puVar8 + 100) = iVar7;
            iVar11 = iVar11 + iVar9 + 2;
            *(int *)(puVar8 + 0x6c) = iVar11;
            *(int *)(puVar8 + 0x70) = iVar10;
            *(int *)(puVar8 + 0x60) = iVar11 + -1;
            *(int *)(puVar8 + 0x74) = iVar5;
            *(int *)(puVar8 + 0x68) = iVar5;
            iVar13 = iVar13 + 1;
            puVar8 = puVar8 + 0x90;
          } while (iVar13 < this_ptr->grid_cols);
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < this_ptr->grid_rows);
    }
    this_ptr->primitive_count = this_ptr->grid_cols * this_ptr->grid_rows * 2;
  }
  else {
    this_ptr->primitive_count = 0x20;
    this_ptr->vertex_count = 0;
    iVar13 = 0;
    if (0 < this_ptr->primitive_count) {
      fVar15 = (float10)_DAT_005edf66;
      fVar14 = (float10)_DAT_005edf56;
      fVar16 = (float10)_DAT_005edf4e;
      do {
        fVar17 = ((float10)iVar13 / (float10)this_ptr->primitive_count) * (float10)_DAT_005edf3e *
                 (float10)_DAT_005edf36;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(this_ptr->vertices + this_ptr->vertex_count) =
             (float)(fVar18 * (float10)(this_ptr->size).x * (float10)_DAT_005edf46);
        *(uint *)&this_ptr->vertices[this_ptr->vertex_count].field_0x4 = 0;
        *(float *)&this_ptr->vertices[this_ptr->vertex_count].field_0x8 =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)_DAT_005edf46);
        fVar17 = ((float10)*(float *)(this_ptr->vertices + this_ptr->vertex_count) /
                 (float10)(this_ptr->size).x) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)(&this_ptr->vertices[0].field_0x18 + extraout_ECX) = (int)ROUND(fVar17);
        fVar17 = ((float10)*(float *)&this_ptr->vertices[this_ptr->vertex_count].field_0x8 /
                 (float10)(this_ptr->size).z) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)(&this_ptr->vertices[0].field_0x1c + extraout_ECX_00) = (int)ROUND(fVar17);
        iVar13 = extraout_EDX + 1;
        this_ptr->vertex_count = this_ptr->vertex_count + 1;
      } while (iVar13 < this_ptr->primitive_count);
    }
    iVar13 = this_ptr->vertex_count;
    *(uint *)&this_ptr->vertices[iVar13].field_0x8 = 0;
    *(uint *)&this_ptr->vertices[iVar13].field_0x4 =
         *(uint *)&this_ptr->vertices[iVar13].field_0x8;
    *(uint *)(this_ptr->vertices + iVar13) =
         *(uint *)&this_ptr->vertices[iVar13].field_0x4;
    iStack_1c = 0;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (0 < this_ptr->primitive_count) {
      puVar8 = &this_ptr->field_0x8104;
      pCVar12 = this_ptr;
      do {
        *(uint *)(puVar8 + 4) = 3;
        *(uint *)(puVar8 + 0x14) = 0;
        uVar3 = *(uint *)(puVar8 + 0x14);
        *(uint *)(puVar8 + 0x10) = uVar3;
        *(uint *)(puVar8 + 0xc) = uVar3;
        *(uint *)(puVar8 + 8) = uVar3;
        iVar4 = iStack_1c + 1;
        iVar13 = this_ptr->primitive_count;
        *(uint *)(puVar8 + 0x1c) = 0;
        *(uint *)(puVar8 + 0x20) = 0;
        *(int *)(puVar8 + 0x18) = iVar13;
        iVar13 = iVar4 % this_ptr->primitive_count;
        *(int *)(puVar8 + 0x24) = iStack_1c;
        *(uint *)(puVar8 + 0x28) = *(uint *)&pCVar12->vertices[0].field_0x18;
        uVar3 = *(uint *)&pCVar12->vertices[0].field_0x1c;
        *(int *)(puVar8 + 0x30) = iVar13;
        *(uint *)(puVar8 + 0x2c) = uVar3;
        *(uint *)(puVar8 + 0x34) = *(uint *)&this_ptr->vertices[iVar13].field_0x18;
        pCVar12 = (CWaterActor *)&(pCVar12->base).field_0x20;
        *(uint *)(puVar8 + 0x38) = *(uint *)&this_ptr->vertices[iVar13].field_0x1c;
        puVar8 = puVar8 + 0x48;
        iStack_1c = iVar4;
      } while (iVar4 < this_ptr->primitive_count);
    }
  }
  core_wateract_cpp_FUN_005870a0(this_ptr);
  this_ptr->texture_frame = 0;
  this_ptr->texture_anim_accum = 0;
  return;
}
