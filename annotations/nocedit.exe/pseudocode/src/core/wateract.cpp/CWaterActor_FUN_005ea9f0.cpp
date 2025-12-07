// Name: core_wateract.cpp_CWaterActor_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ea9f0(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CWaterActor *pCVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  double dVar19;
  uint local_40;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar12 = this_ptr->round_flag;
  *(float *)(this_ptr->field21_0x298 + 0x2af98) =
       (this_ptr->base_actor).location.position.y - this_ptr->height_delta * this_ptr->param;
  if (iVar12 == 0) {
    while( true ) {
      fVar2 = 1.0 / this_ptr->patch_size;
      fVar1 = (this_ptr->size).x;
      dVar18 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->size).z * fVar2));
      dVar19 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * fVar2));
      iVar4 = (int)ROUND(dVar18) + 1;
      iVar12 = (int)ROUND(dVar19);
      *(int *)(this_ptr->field21_0x298 + 0x7d08) = iVar12;
      iVar10 = iVar12 + 1;
      *(uint *)(this_ptr->field21_0x298 + 0x7d0c) = local_40;
      *(int *)this_ptr->field21_0x298 = iVar4 * iVar10;
      if (iVar4 * iVar10 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    local_30 = -(this_ptr->size).z * (float)0.5;
    iVar8 = 0;
    local_14 = 0;
    if (0 < iVar4) {
      do {
        local_24 = -(this_ptr->size).x * (float)0.5;
        iVar6 = 0;
        if (0 < iVar10) {
          fVar13 = (float10)252;
          fVar14 = (float10)65536;
          fVar15 = (float10)0.5;
          fVar16 = (float10)(fVar1 / (float)iVar12);
          pcVar7 = this_ptr->field21_0x298 + iVar8 * 0x20 + 4;
          do {
            *(float *)(pcVar7 + 4) = 0.0;
            *(float *)pcVar7 = local_24;
            *(float *)(pcVar7 + 8) = local_30;
            fVar17 = (float10)(this_ptr->size).x;
            dVar19 = crt_math_c_round_FUN_005fe6b0
                               ((double)(((fVar17 * fVar15 + (float10)*(float *)pcVar7) / fVar17) *
                                         fVar13 * fVar14));
            local_14 = (int)ROUND(dVar19);
            *(int *)(pcVar7 + 0x18) = local_14 + 0x20000;
            iVar8 = iVar8 + 1;
            iVar6 = iVar6 + 1;
            dVar19 = crt_math_c_round_FUN_005fe6b0
                               ((double)(((float10)1 -
                                         (float10)*(float *)(pcVar7 + 8) /
                                         (float10)(this_ptr->size).z) * fVar13 * fVar14));
            local_24 = (float)((float10)local_28 + fVar16);
            *(int *)(pcVar7 + 0x1c) = (int)ROUND(dVar19) + 0x20000;
            pcVar7 = pcVar7 + 0x20;
          } while (iVar6 < iVar10);
        }
        local_30 = local_30 + fVar2 / (float)(int)ROUND(dVar18);
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
    }
    pcVar7 = this_ptr->field21_0x298 + 0x7d10;
    iVar10 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
    local_2c = 0;
    if (0 < iVar10) {
      do {
        iVar12 = 0;
        if (0 < *(int *)(this_ptr->field21_0x298 + 0x7d08)) {
          iVar4 = local_2c % 4 << 0x16;
          iVar10 = (local_2c % 4 + 1) * 0x400000;
          do {
            pcVar7[4] = '\x03';
            pcVar7[5] = '\0';
            pcVar7[6] = '\0';
            pcVar7[7] = '\0';
            pcVar7[0x14] = '\0';
            pcVar7[0x15] = '\0';
            pcVar7[0x16] = '\0';
            pcVar7[0x17] = '\0';
            uVar3 = *(uint *)(pcVar7 + 0x14);
            *(uint *)(pcVar7 + 0x10) = uVar3;
            *(uint *)(pcVar7 + 0xc) = uVar3;
            *(uint *)(pcVar7 + 8) = uVar3;
            iVar8 = (*(int *)(this_ptr->field21_0x298 + 0x7d08) + 1) * local_2c + iVar12;
            *(int *)(pcVar7 + 0x30) = iVar8;
            iVar8 = iVar8 + 1;
            *(int *)(pcVar7 + 0x38) = iVar4;
            *(int *)(pcVar7 + 0x24) = iVar8;
            iVar5 = iVar12 % 4 << 0x16;
            iVar9 = (iVar12 % 4 + 1) * 0x400000;
            *(int *)(pcVar7 + 0x34) = iVar5;
            *(int *)(pcVar7 + 0x28) = iVar9;
            *(int *)(pcVar7 + 0x2c) = iVar4;
            *(int *)(pcVar7 + 0x18) = iVar8 + *(int *)(this_ptr->field21_0x298 + 0x7d08) + 1;
            *(int *)(pcVar7 + 0x1c) = iVar9;
            *(int *)(pcVar7 + 0x20) = iVar10;
            pcVar7[0x4c] = '\x03';
            pcVar7[0x4d] = '\0';
            pcVar7[0x4e] = '\0';
            pcVar7[0x4f] = '\0';
            pcVar7[0x5c] = '\0';
            pcVar7[0x5d] = '\0';
            pcVar7[0x5e] = '\0';
            pcVar7[0x5f] = '\0';
            uVar3 = *(uint *)(pcVar7 + 0x5c);
            *(uint *)(pcVar7 + 0x58) = uVar3;
            *(uint *)(pcVar7 + 0x54) = uVar3;
            *(uint *)(pcVar7 + 0x50) = uVar3;
            iVar8 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar7 + 0x7c) = iVar5;
            iVar8 = iVar12 + (iVar8 + 1) * local_2c;
            *(int *)(pcVar7 + 0x78) = iVar8;
            *(int *)(pcVar7 + 0x80) = iVar4;
            iVar6 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar7 + 100) = iVar5;
            iVar8 = iVar8 + iVar6 + 2;
            *(int *)(pcVar7 + 0x6c) = iVar8;
            *(int *)(pcVar7 + 0x70) = iVar9;
            *(int *)(pcVar7 + 0x60) = iVar8 + -1;
            *(int *)(pcVar7 + 0x74) = iVar10;
            *(int *)(pcVar7 + 0x68) = iVar10;
            iVar12 = iVar12 + 1;
            pcVar7 = pcVar7 + 0x90;
          } while (iVar12 < *(int *)(this_ptr->field21_0x298 + 0x7d08));
        }
        local_2c = local_2c + 1;
        iVar10 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
      } while (local_2c < iVar10);
    }
    iVar4 = *(int *)(this_ptr->field21_0x298 + 0x7d08) * *(int *)(this_ptr->field21_0x298 + 0x7d0c)
            * 2;
    *(int *)(this_ptr->field21_0x298 + 0x2af9c) = iVar4;
  }
  else {
    this_ptr->field21_0x298[0x2af9c] = ' ';
    this_ptr->field21_0x298[0x2af9d] = '\0';
    this_ptr->field21_0x298[0x2af9e] = '\0';
    this_ptr->field21_0x298[0x2af9f] = '\0';
    this_ptr->field21_0x298[0] = '\0';
    this_ptr->field21_0x298[1] = '\0';
    this_ptr->field21_0x298[2] = '\0';
    this_ptr->field21_0x298[3] = '\0';
    iVar12 = 0;
    if (0 < *(int *)(this_ptr->field21_0x298 + 0x2af9c)) {
      fVar13 = (float10)8388608;
      fVar14 = (float10)65536;
      fVar15 = (float10)128;
      do {
        fVar16 = ((float10)iVar12 / (float10)*(int *)(this_ptr->field21_0x298 + 0x2af9c)) *
                 (float10)3.1415926535000001 * (float10)2;
        fVar17 = (float10)fcos(fVar16);
        fVar16 = (float10)fsin(fVar16);
        *(float *)(this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 4) =
             (float)(fVar17 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        pcVar7 = this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 8;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        *(float *)(this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 0xc) =
             (float)(fVar16 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        iVar4 = *(int *)this_ptr->field21_0x298 * 0x20;
        dVar18 = crt_math_c_round_FUN_005fe6b0
                           ((double)(((float10)*(float *)(this_ptr->field21_0x298 + iVar4 + 4) /
                                     (float10)(this_ptr->size).x) * fVar15 * fVar14 + fVar13));
        *(int *)(this_ptr->field21_0x298 + iVar4 + 0x1c) = (int)ROUND(dVar18);
        iVar4 = *(int *)this_ptr->field21_0x298 * 0x20;
        dVar18 = crt_math_c_round_FUN_005fe6b0
                           ((double)(((float10)*(float *)(this_ptr->field21_0x298 + iVar4 + 0xc) /
                                     (float10)(this_ptr->size).z) * fVar15 * fVar14 + fVar13));
        *(int *)(this_ptr->field21_0x298 + iVar4 + 0x20) = (int)ROUND(dVar18);
        iVar12 = iVar12 + 1;
        iVar4 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)this_ptr->field21_0x298 = *(int *)this_ptr->field21_0x298 + 1;
      } while (iVar12 < iVar4);
    }
    iVar12 = *(int *)this_ptr->field21_0x298 * 0x20;
    pcVar7 = this_ptr->field21_0x298 + iVar12 + 0xc;
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    *(uint *)(this_ptr->field21_0x298 + iVar12 + 8) =
         *(uint *)(this_ptr->field21_0x298 + iVar12 + 0xc);
    *(uint *)(this_ptr->field21_0x298 + iVar12 + 4) =
         *(uint *)(this_ptr->field21_0x298 + iVar12 + 8);
    iVar12 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar4 = 0;
    iVar10 = *(int *)this_ptr->field21_0x298 + 1;
    local_18 = 0;
    *(int *)this_ptr->field21_0x298 = iVar10;
    if (0 < iVar12) {
      pcVar7 = this_ptr->field21_0x298 + 0x7d10;
      pCVar11 = this_ptr;
      do {
        pcVar7[4] = '\x03';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        pcVar7[0x14] = '\0';
        pcVar7[0x15] = '\0';
        pcVar7[0x16] = '\0';
        pcVar7[0x17] = '\0';
        uVar3 = *(uint *)(pcVar7 + 0x14);
        *(uint *)(pcVar7 + 0x10) = uVar3;
        *(uint *)(pcVar7 + 0xc) = uVar3;
        *(uint *)(pcVar7 + 8) = uVar3;
        iVar8 = local_18 + 1;
        uVar3 = *(uint *)(this_ptr->field21_0x298 + 0x2af9c);
        pcVar7[0x1c] = '\0';
        pcVar7[0x1d] = '\0';
        pcVar7[0x1e] = '\0';
        pcVar7[0x1f] = '\0';
        pcVar7[0x20] = '\0';
        pcVar7[0x21] = '\0';
        pcVar7[0x22] = '\0';
        pcVar7[0x23] = '\0';
        *(uint *)(pcVar7 + 0x18) = uVar3;
        iVar12 = iVar8 % *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)(pcVar7 + 0x24) = local_18;
        *(uint *)(pcVar7 + 0x28) = *(uint *)(pCVar11->field21_0x298 + 0x1c);
        uVar3 = *(uint *)(pCVar11->field21_0x298 + 0x20);
        *(int *)(pcVar7 + 0x30) = iVar12;
        *(uint *)(pcVar7 + 0x2c) = uVar3;
        iVar10 = *(int *)(this_ptr->field21_0x298 + iVar12 * 0x20 + 0x1c);
        *(int *)(pcVar7 + 0x34) = iVar10;
        pCVar11 = (CWaterActor *)&(pCVar11->base_actor).location;
        *(uint *)(pcVar7 + 0x38) =
             *(uint *)(this_ptr->field21_0x298 + iVar12 * 0x20 + 0x20);
        pcVar7 = pcVar7 + 0x48;
        iVar4 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        local_18 = iVar8;
      } while (iVar8 < iVar4);
    }
  }
  core_wateract_cpp_FUN_005eafa0(iVar4,iVar10);
  this_ptr->field21_0x298[0x2af90] = '\0';
  this_ptr->field21_0x298[0x2af91] = '\0';
  this_ptr->field21_0x298[0x2af92] = '\0';
  this_ptr->field21_0x298[0x2af93] = '\0';
  this_ptr->field21_0x298[0x2af94] = '\0';
  this_ptr->field21_0x298[0x2af95] = '\0';
  this_ptr->field21_0x298[0x2af96] = '\0';
  this_ptr->field21_0x298[0x2af97] = '\0';
  return;
}
