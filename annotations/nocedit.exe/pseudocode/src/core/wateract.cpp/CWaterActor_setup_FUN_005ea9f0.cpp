// Name: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  CWaterActor *pCVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float local_34;
  int local_30;
  float local_28;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar16 = this_ptr->round_flag;
  *(float *)(this_ptr->unk5 + 0x2af98) =
       (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param;
  if (iVar16 == 0) {
    while( true ) {
      fVar1 = 1.0 / this_ptr->patch_size;
      iVar16 = (int)ROUND(ROUND((this_ptr->size).z * fVar1));
      iVar8 = iVar16 + 1;
      iVar9 = (int)ROUND(ROUND((this_ptr->size).x * fVar1));
      *(int *)(this_ptr->unk5 + 0x7d08) = iVar9;
      iVar14 = iVar9 + 1;
      *(int *)(this_ptr->unk5 + 0x7d0c) = iVar16;
      *(int *)this_ptr->unk5 = iVar8 * iVar14;
      if (iVar8 * iVar14 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    local_34 = -(this_ptr->size).z * (float)0.5;
    iVar12 = 0;
    local_18 = 0;
    if (0 < iVar8) {
      do {
        dVar7 = 252;
        dVar6 = 65536;
        dVar5 = 0.5;
        local_28 = -(this_ptr->size).x * (float)0.5;
        iVar10 = 0;
        if (0 < iVar14) {
          pcVar11 = this_ptr->unk5 + iVar12 * 0x20 + 4;
          do {
            *(float *)(pcVar11 + 4) = 0.0;
            *(float *)pcVar11 = local_28;
            *(float *)(pcVar11 + 8) = local_34;
            dVar4 = (double)(this_ptr->size).x;
            *(int *)(pcVar11 + 0x18) =
                 (int)ROUND(ROUND(((dVar4 * dVar5 + (double)*(float *)pcVar11) / dVar4) * dVar7 *
                                  dVar6)) + 0x20000;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 1;
            local_28 = local_28 + fVar1 / (float)iVar9;
            *(int *)(pcVar11 + 0x1c) =
                 (int)ROUND(ROUND((1.0 - (double)*(float *)(pcVar11 + 8) /
                                         (double)(this_ptr->size).z) * dVar7 * dVar6)) + 0x20000;
            pcVar11 = pcVar11 + 0x20;
          } while (iVar10 < iVar14);
        }
        local_34 = local_34 + fVar2 / (float)iVar16;
        local_18 = local_18 + 1;
      } while (local_18 < iVar8);
    }
    pcVar11 = this_ptr->unk5 + 0x7d10;
    local_30 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x7d0c)) {
      do {
        iVar16 = 0;
        if (0 < *(int *)(this_ptr->unk5 + 0x7d08)) {
          iVar9 = local_30 % 4 << 0x16;
          iVar8 = (local_30 % 4 + 1) * 0x400000;
          do {
            pcVar11[4] = '\x03';
            pcVar11[5] = '\0';
            pcVar11[6] = '\0';
            pcVar11[7] = '\0';
            pcVar11[0x14] = '\0';
            pcVar11[0x15] = '\0';
            pcVar11[0x16] = '\0';
            pcVar11[0x17] = '\0';
            uVar3 = *(uint *)(pcVar11 + 0x14);
            *(uint *)(pcVar11 + 0x10) = uVar3;
            *(uint *)(pcVar11 + 0xc) = uVar3;
            *(uint *)(pcVar11 + 8) = uVar3;
            iVar14 = (*(int *)(this_ptr->unk5 + 0x7d08) + 1) * local_30 + iVar16;
            *(int *)(pcVar11 + 0x30) = iVar14;
            iVar14 = iVar14 + 1;
            *(int *)(pcVar11 + 0x38) = iVar9;
            *(int *)(pcVar11 + 0x24) = iVar14;
            iVar10 = iVar16 % 4 << 0x16;
            iVar13 = (iVar16 % 4 + 1) * 0x400000;
            *(int *)(pcVar11 + 0x34) = iVar10;
            *(int *)(pcVar11 + 0x28) = iVar13;
            *(int *)(pcVar11 + 0x2c) = iVar9;
            *(int *)(pcVar11 + 0x18) = iVar14 + *(int *)(this_ptr->unk5 + 0x7d08) + 1;
            *(int *)(pcVar11 + 0x1c) = iVar13;
            *(int *)(pcVar11 + 0x20) = iVar8;
            pcVar11[0x4c] = '\x03';
            pcVar11[0x4d] = '\0';
            pcVar11[0x4e] = '\0';
            pcVar11[0x4f] = '\0';
            pcVar11[0x5c] = '\0';
            pcVar11[0x5d] = '\0';
            pcVar11[0x5e] = '\0';
            pcVar11[0x5f] = '\0';
            uVar3 = *(uint *)(pcVar11 + 0x5c);
            *(uint *)(pcVar11 + 0x58) = uVar3;
            *(uint *)(pcVar11 + 0x54) = uVar3;
            *(uint *)(pcVar11 + 0x50) = uVar3;
            iVar14 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar11 + 0x7c) = iVar10;
            iVar14 = iVar16 + (iVar14 + 1) * local_30;
            *(int *)(pcVar11 + 0x78) = iVar14;
            *(int *)(pcVar11 + 0x80) = iVar9;
            iVar12 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar11 + 100) = iVar10;
            iVar14 = iVar14 + iVar12 + 2;
            *(int *)(pcVar11 + 0x6c) = iVar14;
            *(int *)(pcVar11 + 0x70) = iVar13;
            *(int *)(pcVar11 + 0x60) = iVar14 + -1;
            *(int *)(pcVar11 + 0x74) = iVar8;
            *(int *)(pcVar11 + 0x68) = iVar8;
            iVar16 = iVar16 + 1;
            pcVar11 = pcVar11 + 0x90;
          } while (iVar16 < *(int *)(this_ptr->unk5 + 0x7d08));
        }
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)(this_ptr->unk5 + 0x7d0c));
    }
    *(int *)(this_ptr->unk5 + 0x2af9c) =
         *(int *)(this_ptr->unk5 + 0x7d08) * *(int *)(this_ptr->unk5 + 0x7d0c) * 2;
  }
  else {
    this_ptr->unk5[0x2af9c] = ' ';
    this_ptr->unk5[0x2af9d] = '\0';
    this_ptr->unk5[0x2af9e] = '\0';
    this_ptr->unk5[0x2af9f] = '\0';
    this_ptr->unk5[0] = '\0';
    dVar7 = 8388608;
    dVar6 = 65536;
    dVar5 = 128;
    this_ptr->unk5[1] = '\0';
    this_ptr->unk5[2] = '\0';
    this_ptr->unk5[3] = '\0';
    iVar16 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x2af9c)) {
      do {
        fVar17 = ((float10)iVar16 / (float10)*(int *)(this_ptr->unk5 + 0x2af9c)) *
                 (float10)3.1415926535000001 * (float10)2;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 4) =
             (float)(fVar18 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        pcVar11 = this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 8;
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 0xc) =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        iVar9 = *(int *)this_ptr->unk5 * 0x20;
        *(int *)(this_ptr->unk5 + iVar9 + 0x1c) =
             (int)ROUND(ROUND(((double)*(float *)(this_ptr->unk5 + iVar9 + 4) /
                              (double)(this_ptr->size).x) * dVar5 * dVar6 + dVar7));
        iVar9 = *(int *)this_ptr->unk5 * 0x20;
        *(int *)(this_ptr->unk5 + iVar9 + 0x20) =
             (int)ROUND(ROUND(((double)*(float *)(this_ptr->unk5 + iVar9 + 0xc) /
                              (double)(this_ptr->size).z) * dVar5 * dVar6 + dVar7));
        iVar16 = iVar16 + 1;
        iVar9 = *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
      } while (iVar16 < iVar9);
    }
    iVar16 = *(int *)this_ptr->unk5 * 0x20;
    pcVar11 = this_ptr->unk5 + iVar16 + 0xc;
    pcVar11[0] = '\0';
    pcVar11[1] = '\0';
    pcVar11[2] = '\0';
    pcVar11[3] = '\0';
    *(uint *)(this_ptr->unk5 + iVar16 + 8) = *(uint *)(this_ptr->unk5 + iVar16 + 0xc);
    *(uint *)(this_ptr->unk5 + iVar16 + 4) = *(uint *)(this_ptr->unk5 + iVar16 + 8);
    iVar16 = *(int *)(this_ptr->unk5 + 0x2af9c);
    local_1c = 0;
    *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
    if (0 < iVar16) {
      pcVar11 = this_ptr->unk5 + 0x7d10;
      pCVar15 = this_ptr;
      do {
        pcVar11[4] = '\x03';
        pcVar11[5] = '\0';
        pcVar11[6] = '\0';
        pcVar11[7] = '\0';
        pcVar11[0x14] = '\0';
        pcVar11[0x15] = '\0';
        pcVar11[0x16] = '\0';
        pcVar11[0x17] = '\0';
        uVar3 = *(uint *)(pcVar11 + 0x14);
        *(uint *)(pcVar11 + 0x10) = uVar3;
        *(uint *)(pcVar11 + 0xc) = uVar3;
        *(uint *)(pcVar11 + 8) = uVar3;
        iVar9 = local_1c + 1;
        uVar3 = *(uint *)(this_ptr->unk5 + 0x2af9c);
        pcVar11[0x1c] = '\0';
        pcVar11[0x1d] = '\0';
        pcVar11[0x1e] = '\0';
        pcVar11[0x1f] = '\0';
        pcVar11[0x20] = '\0';
        pcVar11[0x21] = '\0';
        pcVar11[0x22] = '\0';
        pcVar11[0x23] = '\0';
        *(uint *)(pcVar11 + 0x18) = uVar3;
        iVar16 = iVar9 % *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)(pcVar11 + 0x24) = local_1c;
        *(uint *)(pcVar11 + 0x28) = *(uint *)(pCVar15->unk5 + 0x1c);
        uVar3 = *(uint *)(pCVar15->unk5 + 0x20);
        *(int *)(pcVar11 + 0x30) = iVar16;
        *(uint *)(pcVar11 + 0x2c) = uVar3;
        *(uint *)(pcVar11 + 0x34) = *(uint *)(this_ptr->unk5 + iVar16 * 0x20 + 0x1c);
        pCVar15 = (CWaterActor *)&(pCVar15->base).location;
        *(uint *)(pcVar11 + 0x38) = *(uint *)(this_ptr->unk5 + iVar16 * 0x20 + 0x20);
        pcVar11 = pcVar11 + 0x48;
        local_1c = iVar9;
      } while (iVar9 < *(int *)(this_ptr->unk5 + 0x2af9c));
    }
  }
  core_wateract_cpp_CWaterActor_FUN_005eafa0(this_ptr);
  this_ptr->unk5[0x2af90] = '\0';
  this_ptr->unk5[0x2af91] = '\0';
  this_ptr->unk5[0x2af92] = '\0';
  this_ptr->unk5[0x2af93] = '\0';
  this_ptr->unk5[0x2af94] = '\0';
  this_ptr->unk5[0x2af95] = '\0';
  this_ptr->unk5[0x2af96] = '\0';
  this_ptr->unk5[0x2af97] = '\0';
  return;
}
