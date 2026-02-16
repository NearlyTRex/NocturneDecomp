// Name: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  CWaterActor *pCVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uStack_4c;
  int local_30;
  float local_2c;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar6 = this_ptr->round_flag;
  *(float *)(this_ptr->unk5 + 0x2af98) =
       (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param;
  if (iVar6 == 0) {
    while( true ) {
      fVar4 = 1.0 / this_ptr->patch_size;
      fVar1 = (this_ptr->size).x;
      dVar17 = round((double)((this_ptr->size).z * fVar4));
      dVar18 = round((double)(fVar1 * fVar4));
      *(int *)(this_ptr->unk5 + 0x7d08) = (int)ROUND(dVar18);
      iVar12 = (int)ROUND(dVar18) + 1;
      *(uint *)(this_ptr->unk5 + 0x7d0c) = uStack_4c;
      iVar6 = ((int)ROUND(dVar17) + 1) * iVar12;
      *(int *)this_ptr->unk5 = iVar6;
      if (iVar6 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).z;
    fVar4 = (float)0.5;
    iVar6 = 0;
    if (0 < (int)ROUND(dVar17) + 1) {
      do {
        dVar5 = 252;
        dVar18 = 65536;
        dVar17 = 0.5;
        iVar9 = 0;
        if (0 < iVar12) {
          pfVar7 = (float *)(iVar6 * 0x20);
          do {
            pfVar7[1] = 0.0;
            *pfVar7 = 0.0;
            pfVar7[2] = local_2c;
            dVar19 = (double)(this_ptr->size).x;
            dVar19 = round
                               (((dVar19 * dVar17 + (double)*pfVar7) / dVar19) * dVar5 * dVar18);
            pfVar7[6] = (float)((int)ROUND(dVar19) + 0x20000);
            iVar6 = iVar6 + 1;
            iVar9 = iVar9 + 1;
            dVar19 = round
                               ((1.0 - (double)pfVar7[2] / (double)(this_ptr->size).z) * dVar5 *
                                dVar18);
            pfVar7[7] = (float)((int)ROUND(dVar19) + 0x20000);
            pfVar7 = pfVar7 + 8;
          } while (iVar9 < iVar12);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)(-fVar1 * fVar4));
    }
    pcVar10 = this_ptr->unk5 + 0x7d10;
    local_30 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x7d0c)) {
      do {
        iVar6 = 0;
        if (0 < *(int *)(this_ptr->unk5 + 0x7d08)) {
          iVar12 = local_30 % 4 << 0x16;
          iVar9 = (local_30 % 4 + 1) * 0x400000;
          do {
            pcVar10[4] = '\x03';
            pcVar10[5] = '\0';
            pcVar10[6] = '\0';
            pcVar10[7] = '\0';
            pcVar10[0x14] = '\0';
            pcVar10[0x15] = '\0';
            pcVar10[0x16] = '\0';
            pcVar10[0x17] = '\0';
            uVar2 = *(uint *)(pcVar10 + 0x14);
            *(uint *)(pcVar10 + 0x10) = uVar2;
            *(uint *)(pcVar10 + 0xc) = uVar2;
            *(uint *)(pcVar10 + 8) = uVar2;
            iVar13 = (*(int *)(this_ptr->unk5 + 0x7d08) + 1) * local_30 + iVar6;
            *(int *)(pcVar10 + 0x30) = iVar13;
            iVar13 = iVar13 + 1;
            *(int *)(pcVar10 + 0x38) = iVar12;
            *(int *)(pcVar10 + 0x24) = iVar13;
            iVar8 = iVar6 % 4 << 0x16;
            iVar11 = (iVar6 % 4 + 1) * 0x400000;
            *(int *)(pcVar10 + 0x34) = iVar8;
            *(int *)(pcVar10 + 0x28) = iVar11;
            *(int *)(pcVar10 + 0x2c) = iVar12;
            *(int *)(pcVar10 + 0x18) = iVar13 + *(int *)(this_ptr->unk5 + 0x7d08) + 1;
            *(int *)(pcVar10 + 0x1c) = iVar11;
            *(int *)(pcVar10 + 0x20) = iVar9;
            pcVar10[0x4c] = '\x03';
            pcVar10[0x4d] = '\0';
            pcVar10[0x4e] = '\0';
            pcVar10[0x4f] = '\0';
            pcVar10[0x5c] = '\0';
            pcVar10[0x5d] = '\0';
            pcVar10[0x5e] = '\0';
            pcVar10[0x5f] = '\0';
            uVar2 = *(uint *)(pcVar10 + 0x5c);
            *(uint *)(pcVar10 + 0x58) = uVar2;
            *(uint *)(pcVar10 + 0x54) = uVar2;
            *(uint *)(pcVar10 + 0x50) = uVar2;
            iVar13 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar10 + 0x7c) = iVar8;
            iVar13 = iVar6 + (iVar13 + 1) * local_30;
            *(int *)(pcVar10 + 0x78) = iVar13;
            *(int *)(pcVar10 + 0x80) = iVar12;
            iVar3 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar10 + 100) = iVar8;
            iVar13 = iVar13 + iVar3 + 2;
            *(int *)(pcVar10 + 0x6c) = iVar13;
            *(int *)(pcVar10 + 0x70) = iVar11;
            *(int *)(pcVar10 + 0x60) = iVar13 + -1;
            *(int *)(pcVar10 + 0x74) = iVar9;
            *(int *)(pcVar10 + 0x68) = iVar9;
            iVar6 = iVar6 + 1;
            pcVar10 = pcVar10 + 0x90;
          } while (iVar6 < *(int *)(this_ptr->unk5 + 0x7d08));
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
    dVar5 = 8388608;
    dVar18 = 65536;
    dVar17 = 128;
    this_ptr->unk5[1] = '\0';
    this_ptr->unk5[2] = '\0';
    this_ptr->unk5[3] = '\0';
    iVar6 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x2af9c)) {
      do {
        fVar15 = ((float10)iVar6 / (float10)*(int *)(this_ptr->unk5 + 0x2af9c)) *
                 (float10)3.1415926535000001 * (float10)2;
        fVar16 = (float10)fcos(fVar15);
        fVar15 = (float10)fsin(fVar15);
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 4) =
             (float)(fVar16 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        pcVar10 = this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 8;
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 0xc) =
             (float)(fVar15 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        iVar12 = *(int *)this_ptr->unk5 * 0x20;
        dVar19 = round
                           (((double)*(float *)(this_ptr->unk5 + iVar12 + 4) /
                            (double)(this_ptr->size).x) * dVar17 * dVar18 + dVar5);
        *(int *)(this_ptr->unk5 + iVar12 + 0x1c) = (int)ROUND(dVar19);
        iVar12 = *(int *)this_ptr->unk5 * 0x20;
        dVar19 = round
                           (((double)*(float *)(this_ptr->unk5 + iVar12 + 0xc) /
                            (double)(this_ptr->size).z) * dVar17 * dVar18 + dVar5);
        *(int *)(this_ptr->unk5 + iVar12 + 0x20) = (int)ROUND(dVar19);
        iVar6 = iVar6 + 1;
        iVar12 = *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
      } while (iVar6 < iVar12);
    }
    iVar6 = *(int *)this_ptr->unk5 * 0x20;
    pcVar10 = this_ptr->unk5 + iVar6 + 0xc;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    *(uint *)(this_ptr->unk5 + iVar6 + 8) = *(uint *)(this_ptr->unk5 + iVar6 + 0xc);
    *(uint *)(this_ptr->unk5 + iVar6 + 4) = *(uint *)(this_ptr->unk5 + iVar6 + 8);
    iVar6 = *(int *)(this_ptr->unk5 + 0x2af9c);
    local_1c = 0;
    *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
    if (0 < iVar6) {
      pcVar10 = this_ptr->unk5 + 0x7d10;
      pCVar14 = this_ptr;
      do {
        pcVar10[4] = '\x03';
        pcVar10[5] = '\0';
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        pcVar10[0x14] = '\0';
        pcVar10[0x15] = '\0';
        pcVar10[0x16] = '\0';
        pcVar10[0x17] = '\0';
        uVar2 = *(uint *)(pcVar10 + 0x14);
        *(uint *)(pcVar10 + 0x10) = uVar2;
        *(uint *)(pcVar10 + 0xc) = uVar2;
        *(uint *)(pcVar10 + 8) = uVar2;
        iVar12 = local_1c + 1;
        uVar2 = *(uint *)(this_ptr->unk5 + 0x2af9c);
        pcVar10[0x1c] = '\0';
        pcVar10[0x1d] = '\0';
        pcVar10[0x1e] = '\0';
        pcVar10[0x1f] = '\0';
        pcVar10[0x20] = '\0';
        pcVar10[0x21] = '\0';
        pcVar10[0x22] = '\0';
        pcVar10[0x23] = '\0';
        *(uint *)(pcVar10 + 0x18) = uVar2;
        iVar6 = iVar12 % *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)(pcVar10 + 0x24) = local_1c;
        *(uint *)(pcVar10 + 0x28) = *(uint *)(pCVar14->unk5 + 0x1c);
        uVar2 = *(uint *)(pCVar14->unk5 + 0x20);
        *(int *)(pcVar10 + 0x30) = iVar6;
        *(uint *)(pcVar10 + 0x2c) = uVar2;
        *(uint *)(pcVar10 + 0x34) = *(uint *)(this_ptr->unk5 + iVar6 * 0x20 + 0x1c);
        pCVar14 = (CWaterActor *)&(pCVar14->base).location;
        *(uint *)(pcVar10 + 0x38) = *(uint *)(this_ptr->unk5 + iVar6 * 0x20 + 0x20);
        pcVar10 = pcVar10 + 0x48;
        local_1c = iVar12;
      } while (iVar12 < *(int *)(this_ptr->unk5 + 0x2af9c));
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
