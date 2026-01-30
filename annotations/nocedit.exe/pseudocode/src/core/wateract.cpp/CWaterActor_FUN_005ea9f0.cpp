// Name: core_wateract.cpp_CWaterActor_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CWaterActor *pCVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
  uint uStack_4c;
  int local_30;
  float local_2c;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar5 = this_ptr->round_flag;
  *(float *)(this_ptr->unk5 + 0x2af98) =
       (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param;
  if (iVar5 == 0) {
    while( true ) {
      fVar4 = 1.0 / this_ptr->patch_size;
      fVar1 = (this_ptr->size).x;
      dVar19 = round((double)((this_ptr->size).z * fVar4));
      dVar20 = round((double)(fVar1 * fVar4));
      *(int *)(this_ptr->unk5 + 0x7d08) = (int)ROUND(dVar20);
      iVar11 = (int)ROUND(dVar20) + 1;
      *(uint *)(this_ptr->unk5 + 0x7d0c) = uStack_4c;
      iVar5 = ((int)ROUND(dVar19) + 1) * iVar11;
      *(int *)this_ptr->unk5 = iVar5;
      if (iVar5 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).z;
    fVar4 = (float)0.5;
    iVar5 = 0;
    if (0 < (int)ROUND(dVar19) + 1) {
      do {
        iVar8 = 0;
        if (0 < iVar11) {
          fVar15 = (float10)252;
          fVar16 = (float10)65536;
          fVar17 = (float10)0.5;
          pfVar6 = (float *)(iVar5 * 0x20);
          do {
            pfVar6[1] = 0.0;
            *pfVar6 = 0.0;
            pfVar6[2] = local_2c;
            fVar18 = (float10)(this_ptr->size).x;
            dVar19 = round
                               ((double)(((fVar18 * fVar17 + (float10)*pfVar6) / fVar18) * fVar15 *
                                        fVar16));
            pfVar6[6] = (float)((int)ROUND(dVar19) + 0x20000);
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 1;
            dVar19 = round
                               ((double)(((float10)1 -
                                         (float10)pfVar6[2] / (float10)(this_ptr->size).z) * fVar15
                                        * fVar16));
            pfVar6[7] = (float)((int)ROUND(dVar19) + 0x20000);
            pfVar6 = pfVar6 + 8;
          } while (iVar8 < iVar11);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)(-fVar1 * fVar4));
    }
    pcVar9 = this_ptr->unk5 + 0x7d10;
    local_30 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x7d0c)) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(this_ptr->unk5 + 0x7d08)) {
          iVar11 = local_30 % 4 << 0x16;
          iVar8 = (local_30 % 4 + 1) * 0x400000;
          do {
            pcVar9[4] = '\x03';
            pcVar9[5] = '\0';
            pcVar9[6] = '\0';
            pcVar9[7] = '\0';
            pcVar9[0x14] = '\0';
            pcVar9[0x15] = '\0';
            pcVar9[0x16] = '\0';
            pcVar9[0x17] = '\0';
            uVar2 = *(uint *)(pcVar9 + 0x14);
            *(uint *)(pcVar9 + 0x10) = uVar2;
            *(uint *)(pcVar9 + 0xc) = uVar2;
            *(uint *)(pcVar9 + 8) = uVar2;
            iVar12 = (*(int *)(this_ptr->unk5 + 0x7d08) + 1) * local_30 + iVar5;
            *(int *)(pcVar9 + 0x30) = iVar12;
            iVar12 = iVar12 + 1;
            *(int *)(pcVar9 + 0x38) = iVar11;
            *(int *)(pcVar9 + 0x24) = iVar12;
            iVar7 = iVar5 % 4 << 0x16;
            iVar10 = (iVar5 % 4 + 1) * 0x400000;
            *(int *)(pcVar9 + 0x34) = iVar7;
            *(int *)(pcVar9 + 0x28) = iVar10;
            *(int *)(pcVar9 + 0x2c) = iVar11;
            *(int *)(pcVar9 + 0x18) = iVar12 + *(int *)(this_ptr->unk5 + 0x7d08) + 1;
            *(int *)(pcVar9 + 0x1c) = iVar10;
            *(int *)(pcVar9 + 0x20) = iVar8;
            pcVar9[0x4c] = '\x03';
            pcVar9[0x4d] = '\0';
            pcVar9[0x4e] = '\0';
            pcVar9[0x4f] = '\0';
            pcVar9[0x5c] = '\0';
            pcVar9[0x5d] = '\0';
            pcVar9[0x5e] = '\0';
            pcVar9[0x5f] = '\0';
            uVar2 = *(uint *)(pcVar9 + 0x5c);
            *(uint *)(pcVar9 + 0x58) = uVar2;
            *(uint *)(pcVar9 + 0x54) = uVar2;
            *(uint *)(pcVar9 + 0x50) = uVar2;
            iVar12 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar9 + 0x7c) = iVar7;
            iVar12 = iVar5 + (iVar12 + 1) * local_30;
            *(int *)(pcVar9 + 0x78) = iVar12;
            *(int *)(pcVar9 + 0x80) = iVar11;
            iVar3 = *(int *)(this_ptr->unk5 + 0x7d08);
            *(int *)(pcVar9 + 100) = iVar7;
            iVar12 = iVar12 + iVar3 + 2;
            *(int *)(pcVar9 + 0x6c) = iVar12;
            *(int *)(pcVar9 + 0x70) = iVar10;
            *(int *)(pcVar9 + 0x60) = iVar12 + -1;
            *(int *)(pcVar9 + 0x74) = iVar8;
            *(int *)(pcVar9 + 0x68) = iVar8;
            iVar5 = iVar5 + 1;
            pcVar9 = pcVar9 + 0x90;
          } while (iVar5 < *(int *)(this_ptr->unk5 + 0x7d08));
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
    this_ptr->unk5[1] = '\0';
    this_ptr->unk5[2] = '\0';
    this_ptr->unk5[3] = '\0';
    iVar5 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x2af9c)) {
      fVar15 = (float10)8388608;
      fVar16 = (float10)65536;
      fVar17 = (float10)128;
      do {
        fVar18 = ((float10)iVar5 / (float10)*(int *)(this_ptr->unk5 + 0x2af9c)) *
                 (float10)3.1415926535000001 * (float10)2;
        fVar14 = (float10)fcos(fVar18);
        fVar18 = (float10)fsin(fVar18);
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 4) =
             (float)(fVar14 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        pcVar9 = this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 8;
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        *(float *)(this_ptr->unk5 + *(int *)this_ptr->unk5 * 0x20 + 0xc) =
             (float)(fVar18 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        iVar11 = *(int *)this_ptr->unk5 * 0x20;
        dVar19 = round
                           ((double)(((float10)*(float *)(this_ptr->unk5 + iVar11 + 4) /
                                     (float10)(this_ptr->size).x) * fVar17 * fVar16 + fVar15));
        *(int *)(this_ptr->unk5 + iVar11 + 0x1c) = (int)ROUND(dVar19);
        iVar11 = *(int *)this_ptr->unk5 * 0x20;
        dVar19 = round
                           ((double)(((float10)*(float *)(this_ptr->unk5 + iVar11 + 0xc) /
                                     (float10)(this_ptr->size).z) * fVar17 * fVar16 + fVar15));
        *(int *)(this_ptr->unk5 + iVar11 + 0x20) = (int)ROUND(dVar19);
        iVar5 = iVar5 + 1;
        iVar11 = *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
      } while (iVar5 < iVar11);
    }
    iVar5 = *(int *)this_ptr->unk5 * 0x20;
    pcVar9 = this_ptr->unk5 + iVar5 + 0xc;
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    *(uint *)(this_ptr->unk5 + iVar5 + 8) = *(uint *)(this_ptr->unk5 + iVar5 + 0xc);
    *(uint *)(this_ptr->unk5 + iVar5 + 4) = *(uint *)(this_ptr->unk5 + iVar5 + 8);
    iVar5 = *(int *)(this_ptr->unk5 + 0x2af9c);
    local_1c = 0;
    *(int *)this_ptr->unk5 = *(int *)this_ptr->unk5 + 1;
    if (0 < iVar5) {
      pcVar9 = this_ptr->unk5 + 0x7d10;
      pCVar13 = this_ptr;
      do {
        pcVar9[4] = '\x03';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar9[0x14] = '\0';
        pcVar9[0x15] = '\0';
        pcVar9[0x16] = '\0';
        pcVar9[0x17] = '\0';
        uVar2 = *(uint *)(pcVar9 + 0x14);
        *(uint *)(pcVar9 + 0x10) = uVar2;
        *(uint *)(pcVar9 + 0xc) = uVar2;
        *(uint *)(pcVar9 + 8) = uVar2;
        iVar11 = local_1c + 1;
        uVar2 = *(uint *)(this_ptr->unk5 + 0x2af9c);
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x20] = '\0';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        *(uint *)(pcVar9 + 0x18) = uVar2;
        iVar5 = iVar11 % *(int *)(this_ptr->unk5 + 0x2af9c);
        *(int *)(pcVar9 + 0x24) = local_1c;
        *(uint *)(pcVar9 + 0x28) = *(uint *)(pCVar13->unk5 + 0x1c);
        uVar2 = *(uint *)(pCVar13->unk5 + 0x20);
        *(int *)(pcVar9 + 0x30) = iVar5;
        *(uint *)(pcVar9 + 0x2c) = uVar2;
        *(uint *)(pcVar9 + 0x34) = *(uint *)(this_ptr->unk5 + iVar5 * 0x20 + 0x1c);
        pCVar13 = (CWaterActor *)&(pCVar13->base).location;
        *(uint *)(pcVar9 + 0x38) = *(uint *)(this_ptr->unk5 + iVar5 * 0x20 + 0x20);
        pcVar9 = pcVar9 + 0x48;
        local_1c = iVar11;
      } while (iVar11 < *(int *)(this_ptr->unk5 + 0x2af9c));
    }
  }
  core_wateract_cpp_FUN_005eafa0();
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
