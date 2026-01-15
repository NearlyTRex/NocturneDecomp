// Name: core_wateract.cpp_CWaterActor_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ea9f0(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int extraout_EAX;
  int iVar5;
  float *pfVar6;
  int extraout_EAX_00;
  float *extraout_EAX_01;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char *pcVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar9;
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
  uint uStack_4c;
  int local_30;
  float local_2c;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar5 = this_ptr->round_flag;
  *(float *)(this_ptr->field21_0x298 + 0x2af98) =
       (this_ptr->base_actor).location.position.y - this_ptr->height_delta * this_ptr->param;
  if (iVar5 == 0) {
    while( true ) {
      fVar14 = (float10)1 / (float10)this_ptr->patch_size;
      fVar18 = (float10)(this_ptr->size).x * fVar14;
      crt_math_c_round_FUN_005fe6b0((double)((float10)(this_ptr->size).z * fVar14));
      dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar18);
      *(int *)(this_ptr->field21_0x298 + 0x7d08) = (int)ROUND(dVar19);
      iVar11 = (int)ROUND(dVar19) + 1;
      *(uint *)(this_ptr->field21_0x298 + 0x7d0c) = uStack_4c;
      iVar5 = (extraout_EAX + 1) * iVar11;
      *(int *)this_ptr->field21_0x298 = iVar5;
      if (iVar5 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).z;
    fVar4 = (float)0.5;
    iVar5 = 0;
    if (0 < extraout_EAX + 1) {
      do {
        if (0 < iVar11) {
          fVar14 = (float10)252;
          fVar18 = (float10)65536;
          fVar16 = (float10)0.5;
          pfVar6 = (float *)(iVar5 * 0x20);
          do {
            pfVar6[1] = 0.0;
            *pfVar6 = 0.0;
            pfVar6[2] = local_2c;
            fVar17 = (float10)(this_ptr->size).x;
            dVar19 = crt_math_c_round_FUN_005fe6b0
                               ((double)(((fVar17 * fVar16 + (float10)*pfVar6) / fVar17) * fVar14 *
                                        fVar18));
            *(int *)(extraout_EAX_00 + 0x18) = (int)ROUND(dVar19) + 0x20000;
            dVar19 = crt_math_c_round_FUN_005fe6b0
                               ((double)(((float10)1 -
                                         (float10)*(float *)(extraout_EAX_00 + 8) /
                                         (float10)(this_ptr->size).z) * fVar14 * fVar18));
            extraout_EAX_01[-1] = (float)((int)ROUND(dVar19) + 0x20000);
            pfVar6 = extraout_EAX_01;
            iVar5 = extraout_EDX_00;
          } while (extraout_ECX_01 < iVar11);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)(-fVar1 * fVar4));
    }
    pcVar8 = this_ptr->field21_0x298 + 0x7d10;
    iVar9 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
    local_30 = 0;
    if (0 < iVar9) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(this_ptr->field21_0x298 + 0x7d08)) {
          iVar11 = local_30 % 4 << 0x16;
          iVar9 = (local_30 % 4 + 1) * 0x400000;
          do {
            pcVar8[4] = '\x03';
            pcVar8[5] = '\0';
            pcVar8[6] = '\0';
            pcVar8[7] = '\0';
            pcVar8[0x14] = '\0';
            pcVar8[0x15] = '\0';
            pcVar8[0x16] = '\0';
            pcVar8[0x17] = '\0';
            uVar2 = *(uint *)(pcVar8 + 0x14);
            *(uint *)(pcVar8 + 0x10) = uVar2;
            *(uint *)(pcVar8 + 0xc) = uVar2;
            *(uint *)(pcVar8 + 8) = uVar2;
            iVar12 = (*(int *)(this_ptr->field21_0x298 + 0x7d08) + 1) * local_30 + iVar5;
            *(int *)(pcVar8 + 0x30) = iVar12;
            iVar12 = iVar12 + 1;
            *(int *)(pcVar8 + 0x38) = iVar11;
            *(int *)(pcVar8 + 0x24) = iVar12;
            iVar7 = iVar5 % 4 << 0x16;
            iVar10 = (iVar5 % 4 + 1) * 0x400000;
            *(int *)(pcVar8 + 0x34) = iVar7;
            *(int *)(pcVar8 + 0x28) = iVar10;
            *(int *)(pcVar8 + 0x2c) = iVar11;
            *(int *)(pcVar8 + 0x18) = iVar12 + *(int *)(this_ptr->field21_0x298 + 0x7d08) + 1;
            *(int *)(pcVar8 + 0x1c) = iVar10;
            *(int *)(pcVar8 + 0x20) = iVar9;
            pcVar8[0x4c] = '\x03';
            pcVar8[0x4d] = '\0';
            pcVar8[0x4e] = '\0';
            pcVar8[0x4f] = '\0';
            pcVar8[0x5c] = '\0';
            pcVar8[0x5d] = '\0';
            pcVar8[0x5e] = '\0';
            pcVar8[0x5f] = '\0';
            uVar2 = *(uint *)(pcVar8 + 0x5c);
            *(uint *)(pcVar8 + 0x58) = uVar2;
            *(uint *)(pcVar8 + 0x54) = uVar2;
            *(uint *)(pcVar8 + 0x50) = uVar2;
            iVar12 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar8 + 0x7c) = iVar7;
            iVar12 = iVar5 + (iVar12 + 1) * local_30;
            *(int *)(pcVar8 + 0x78) = iVar12;
            *(int *)(pcVar8 + 0x80) = iVar11;
            iVar3 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar8 + 100) = iVar7;
            iVar12 = iVar12 + iVar3 + 2;
            *(int *)(pcVar8 + 0x6c) = iVar12;
            *(int *)(pcVar8 + 0x70) = iVar10;
            *(int *)(pcVar8 + 0x60) = iVar12 + -1;
            *(int *)(pcVar8 + 0x74) = iVar9;
            *(int *)(pcVar8 + 0x68) = iVar9;
            iVar5 = iVar5 + 1;
            pcVar8 = pcVar8 + 0x90;
          } while (iVar5 < *(int *)(this_ptr->field21_0x298 + 0x7d08));
        }
        local_30 = local_30 + 1;
        iVar9 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
      } while (local_30 < iVar9);
    }
    iVar11 = *(int *)(this_ptr->field21_0x298 + 0x7d08) * *(int *)(this_ptr->field21_0x298 + 0x7d0c)
             * 2;
    *(int *)(this_ptr->field21_0x298 + 0x2af9c) = iVar11;
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
    iVar5 = 0;
    if (0 < *(int *)(this_ptr->field21_0x298 + 0x2af9c)) {
      fVar14 = (float10)8388608;
      fVar18 = (float10)65536;
      fVar16 = (float10)128;
      do {
        fVar17 = ((float10)iVar5 / (float10)*(int *)(this_ptr->field21_0x298 + 0x2af9c)) *
                 (float10)3.1415926535000001 * (float10)2;
        fVar15 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 4) =
             (float)(fVar15 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        pcVar8 = this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 8;
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        *(float *)(this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 0xc) =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        dVar19 = crt_math_c_round_FUN_005fe6b0
                           ((double)(((float10)*(float *)(this_ptr->field21_0x298 +
                                                         *(int *)this_ptr->field21_0x298 * 0x20 + 4)
                                     / (float10)(this_ptr->size).x) * fVar16 * fVar18 + fVar14));
        *(int *)(this_ptr->field21_0x298 + extraout_ECX + 0x1c) = (int)ROUND(dVar19);
        dVar19 = crt_math_c_round_FUN_005fe6b0
                           ((double)(((float10)*(float *)(this_ptr->field21_0x298 +
                                                         *(int *)this_ptr->field21_0x298 * 0x20 +
                                                         0xc) / (float10)(this_ptr->size).z) *
                                     fVar16 * fVar18 + fVar14));
        *(int *)(this_ptr->field21_0x298 + extraout_ECX_00 + 0x20) = (int)ROUND(dVar19);
        iVar5 = extraout_EDX + 1;
        iVar11 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)this_ptr->field21_0x298 = *(int *)this_ptr->field21_0x298 + 1;
      } while (iVar5 < iVar11);
    }
    iVar5 = *(int *)this_ptr->field21_0x298 * 0x20;
    pcVar8 = this_ptr->field21_0x298 + iVar5 + 0xc;
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    *(uint *)(this_ptr->field21_0x298 + iVar5 + 8) =
         *(uint *)(this_ptr->field21_0x298 + iVar5 + 0xc);
    *(uint *)(this_ptr->field21_0x298 + iVar5 + 4) =
         *(uint *)(this_ptr->field21_0x298 + iVar5 + 8);
    iVar5 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar11 = 0;
    iVar9 = *(int *)this_ptr->field21_0x298 + 1;
    local_1c = 0;
    *(int *)this_ptr->field21_0x298 = iVar9;
    if (0 < iVar5) {
      pcVar8 = this_ptr->field21_0x298 + 0x7d10;
      pCVar13 = this_ptr;
      do {
        pcVar8[4] = '\x03';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        pcVar8[0x14] = '\0';
        pcVar8[0x15] = '\0';
        pcVar8[0x16] = '\0';
        pcVar8[0x17] = '\0';
        uVar2 = *(uint *)(pcVar8 + 0x14);
        *(uint *)(pcVar8 + 0x10) = uVar2;
        *(uint *)(pcVar8 + 0xc) = uVar2;
        *(uint *)(pcVar8 + 8) = uVar2;
        iVar12 = local_1c + 1;
        uVar2 = *(uint *)(this_ptr->field21_0x298 + 0x2af9c);
        pcVar8[0x1c] = '\0';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
        pcVar8[0x20] = '\0';
        pcVar8[0x21] = '\0';
        pcVar8[0x22] = '\0';
        pcVar8[0x23] = '\0';
        *(uint *)(pcVar8 + 0x18) = uVar2;
        iVar5 = iVar12 % *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)(pcVar8 + 0x24) = local_1c;
        *(uint *)(pcVar8 + 0x28) = *(uint *)(pCVar13->field21_0x298 + 0x1c);
        uVar2 = *(uint *)(pCVar13->field21_0x298 + 0x20);
        *(int *)(pcVar8 + 0x30) = iVar5;
        *(uint *)(pcVar8 + 0x2c) = uVar2;
        iVar9 = *(int *)(this_ptr->field21_0x298 + iVar5 * 0x20 + 0x1c);
        *(int *)(pcVar8 + 0x34) = iVar9;
        pCVar13 = (CWaterActor *)&(pCVar13->base_actor).location;
        *(uint *)(pcVar8 + 0x38) =
             *(uint *)(this_ptr->field21_0x298 + iVar5 * 0x20 + 0x20);
        pcVar8 = pcVar8 + 0x48;
        iVar11 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        local_1c = iVar12;
      } while (iVar12 < iVar11);
    }
  }
  core_wateract_cpp_FUN_005eafa0(iVar11,iVar9);
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
