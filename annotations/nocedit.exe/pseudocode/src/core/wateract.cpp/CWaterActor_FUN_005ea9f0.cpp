// Name: core_wateract.cpp_CWaterActor_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ea9f0(CWaterActor * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int extraout_EAX;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char *pcVar8;
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
  double dVar20;
  double dVar21;
  undefined4 local_40;
  float local_30;
  int local_2c;
  float local_24;
  float local_20;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar13 = this_ptr->round_flag;
  *(float *)(this_ptr->field21_0x298 + 0x2af98) =
       (this_ptr->base_actor).location.position.y - this_ptr->height_delta * this_ptr->param;
  iVar5 = extraout_EAX;
  if (iVar13 == 0) {
    while( true ) {
      fVar14 = (float10)1 / (float10)this_ptr->patch_size;
      fVar15 = (float10)(this_ptr->size).z * fVar14;
      fVar14 = (float10)(this_ptr->size).x * fVar14;
      dVar20 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar13,iVar5));
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),(int)ROUND(fVar15)));
      iVar13 = (int)((ulonglong)dVar20 >> 0x20);
      iVar4 = SUB84(dVar20,0) + 1;
      iVar9 = (int)ROUND(fVar14);
      *(int *)(this_ptr->field21_0x298 + 0x7d08) = iVar9;
      iVar11 = iVar9 + 1;
      *(undefined4 *)(this_ptr->field21_0x298 + 0x7d0c) = local_40;
      iVar5 = iVar4 * iVar11;
      *(int *)this_ptr->field21_0x298 = iVar5;
      if (iVar5 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)DOUBLE_0065727f;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    local_30 = -(this_ptr->size).z * (float)DOUBLE_00657277;
    local_14 = 0;
    if (0 < iVar4) {
      dVar21 = 0.0;
      do {
        iVar13 = (int)((ulonglong)dVar21 >> 0x20);
        local_24 = -(this_ptr->size).x * (float)DOUBLE_00657277;
        if (0 < iVar11) {
          fVar15 = (float10)DOUBLE_006572a7;
          fVar14 = (float10)DOUBLE_0065729f;
          fVar16 = (float10)DOUBLE_00657277;
          fVar17 = (float10)(fVar1 / (float)iVar9);
          dVar21 = (double)CONCAT44(iVar13,this_ptr->field21_0x298 + iVar13 * 0x20 + 4);
          do {
            pfVar6 = SUB84(dVar21,0);
            pfVar6[1] = 0.0;
            *pfVar6 = local_24;
            pfVar6[2] = local_30;
            fVar18 = (float10)(this_ptr->size).x;
            fVar18 = ((fVar18 * fVar16 + (float10)*pfVar6) / fVar18) * fVar15 * fVar14;
            dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
            iVar13 = SUB84(dVar21,0);
            *(int *)(iVar13 + 0x18) = (int)ROUND(fVar18) + 0x20000;
            fVar19 = ((float10)1 - (float10)*(float *)(iVar13 + 8) / (float10)(this_ptr->size).z) *
                     fVar15 * fVar14;
            fVar18 = (float10)local_20;
            dVar21 = crt_math_c_round_FUN_005fe6b0
                               ((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20) + 1,iVar13 + 0x20)
                               );
            local_24 = (float)(fVar18 + fVar17);
            *(int *)(SUB84(dVar21,0) + -4) = (int)ROUND(fVar19) + 0x20000;
          } while (extraout_ECX_01 < iVar11);
        }
        local_30 = local_30 + fVar2 / (float)SUB84(dVar20,0);
        local_14 = local_14 + 1;
      } while (local_14 < iVar4);
    }
    pcVar8 = this_ptr->field21_0x298 + 0x7d10;
    iVar9 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
    local_2c = 0;
    if (0 < iVar9) {
      do {
        iVar13 = 0;
        if (0 < *(int *)(this_ptr->field21_0x298 + 0x7d08)) {
          iVar5 = local_2c % 4 << 0x16;
          iVar9 = (local_2c % 4 + 1) * 0x400000;
          do {
            pcVar8[4] = '\x03';
            pcVar8[5] = '\0';
            pcVar8[6] = '\0';
            pcVar8[7] = '\0';
            pcVar8[0x14] = '\0';
            pcVar8[0x15] = '\0';
            pcVar8[0x16] = '\0';
            pcVar8[0x17] = '\0';
            uVar3 = *(undefined4 *)(pcVar8 + 0x14);
            *(undefined4 *)(pcVar8 + 0x10) = uVar3;
            *(undefined4 *)(pcVar8 + 0xc) = uVar3;
            *(undefined4 *)(pcVar8 + 8) = uVar3;
            iVar4 = (*(int *)(this_ptr->field21_0x298 + 0x7d08) + 1) * local_2c + iVar13;
            *(int *)(pcVar8 + 0x30) = iVar4;
            iVar4 = iVar4 + 1;
            *(int *)(pcVar8 + 0x38) = iVar5;
            *(int *)(pcVar8 + 0x24) = iVar4;
            iVar7 = iVar13 % 4 << 0x16;
            iVar10 = (iVar13 % 4 + 1) * 0x400000;
            *(int *)(pcVar8 + 0x34) = iVar7;
            *(int *)(pcVar8 + 0x28) = iVar10;
            *(int *)(pcVar8 + 0x2c) = iVar5;
            *(int *)(pcVar8 + 0x18) = iVar4 + *(int *)(this_ptr->field21_0x298 + 0x7d08) + 1;
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
            uVar3 = *(undefined4 *)(pcVar8 + 0x5c);
            *(undefined4 *)(pcVar8 + 0x58) = uVar3;
            *(undefined4 *)(pcVar8 + 0x54) = uVar3;
            *(undefined4 *)(pcVar8 + 0x50) = uVar3;
            iVar4 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar8 + 0x7c) = iVar7;
            iVar4 = iVar13 + (iVar4 + 1) * local_2c;
            *(int *)(pcVar8 + 0x78) = iVar4;
            *(int *)(pcVar8 + 0x80) = iVar5;
            iVar11 = *(int *)(this_ptr->field21_0x298 + 0x7d08);
            *(int *)(pcVar8 + 100) = iVar7;
            iVar4 = iVar4 + iVar11 + 2;
            *(int *)(pcVar8 + 0x6c) = iVar4;
            *(int *)(pcVar8 + 0x70) = iVar10;
            *(int *)(pcVar8 + 0x60) = iVar4 + -1;
            *(int *)(pcVar8 + 0x74) = iVar9;
            *(int *)(pcVar8 + 0x68) = iVar9;
            iVar13 = iVar13 + 1;
            pcVar8 = pcVar8 + 0x90;
          } while (iVar13 < *(int *)(this_ptr->field21_0x298 + 0x7d08));
        }
        local_2c = local_2c + 1;
        iVar9 = *(int *)(this_ptr->field21_0x298 + 0x7d0c);
      } while (local_2c < iVar9);
    }
    iVar5 = *(int *)(this_ptr->field21_0x298 + 0x7d08) * *(int *)(this_ptr->field21_0x298 + 0x7d0c)
            * 2;
    *(int *)(this_ptr->field21_0x298 + 0x2af9c) = iVar5;
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
    iVar13 = 0;
    if (0 < *(int *)(this_ptr->field21_0x298 + 0x2af9c)) {
      fVar15 = (float10)DOUBLE_006572af;
      fVar14 = (float10)DOUBLE_0065729f;
      fVar16 = (float10)DOUBLE_00657297;
      do {
        fVar17 = ((float10)iVar13 / (float10)*(int *)(this_ptr->field21_0x298 + 0x2af9c)) *
                 (float10)DOUBLE_00657287 * (float10)DOUBLE_0065727f;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        *(float *)(this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 4) =
             (float)(fVar18 * (float10)(this_ptr->size).x * (float10)DOUBLE_0065728f);
        pcVar8 = this_ptr->field21_0x298 + *(int *)this_ptr->field21_0x298 * 0x20 + 8;
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        iVar5 = *(int *)this_ptr->field21_0x298 * 0x20;
        *(float *)(this_ptr->field21_0x298 + iVar5 + 0xc) =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)DOUBLE_0065728f);
        fVar17 = ((float10)*(float *)(this_ptr->field21_0x298 +
                                     *(int *)this_ptr->field21_0x298 * 0x20 + 4) /
                 (float10)(this_ptr->size).x) * fVar16 * fVar14 + fVar15;
        dVar20 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar13,iVar5));
        *(int *)(this_ptr->field21_0x298 + extraout_ECX + 0x1c) = (int)ROUND(fVar17);
        fVar18 = ((float10)*(float *)(this_ptr->field21_0x298 +
                                     *(int *)this_ptr->field21_0x298 * 0x20 + 0xc) /
                 (float10)(this_ptr->size).z) * fVar16 * fVar14 + fVar15;
        dVar20 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),(int)ROUND(fVar17)));
        *(int *)(this_ptr->field21_0x298 + extraout_ECX_00 + 0x20) = (int)ROUND(fVar18);
        iVar13 = (int)((ulonglong)dVar20 >> 0x20) + 1;
        iVar5 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)this_ptr->field21_0x298 = *(int *)this_ptr->field21_0x298 + 1;
      } while (iVar13 < iVar5);
    }
    iVar13 = *(int *)this_ptr->field21_0x298 * 0x20;
    pcVar8 = this_ptr->field21_0x298 + iVar13 + 0xc;
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    *(undefined4 *)(this_ptr->field21_0x298 + iVar13 + 8) =
         *(undefined4 *)(this_ptr->field21_0x298 + iVar13 + 0xc);
    *(undefined4 *)(this_ptr->field21_0x298 + iVar13 + 4) =
         *(undefined4 *)(this_ptr->field21_0x298 + iVar13 + 8);
    iVar13 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar5 = 0;
    iVar9 = *(int *)this_ptr->field21_0x298 + 1;
    local_18 = 0;
    *(int *)this_ptr->field21_0x298 = iVar9;
    if (0 < iVar13) {
      pcVar8 = this_ptr->field21_0x298 + 0x7d10;
      pCVar12 = this_ptr;
      do {
        pcVar8[4] = '\x03';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        pcVar8[0x14] = '\0';
        pcVar8[0x15] = '\0';
        pcVar8[0x16] = '\0';
        pcVar8[0x17] = '\0';
        uVar3 = *(undefined4 *)(pcVar8 + 0x14);
        *(undefined4 *)(pcVar8 + 0x10) = uVar3;
        *(undefined4 *)(pcVar8 + 0xc) = uVar3;
        *(undefined4 *)(pcVar8 + 8) = uVar3;
        iVar4 = local_18 + 1;
        uVar3 = *(undefined4 *)(this_ptr->field21_0x298 + 0x2af9c);
        pcVar8[0x1c] = '\0';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
        pcVar8[0x20] = '\0';
        pcVar8[0x21] = '\0';
        pcVar8[0x22] = '\0';
        pcVar8[0x23] = '\0';
        *(undefined4 *)(pcVar8 + 0x18) = uVar3;
        iVar13 = iVar4 % *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        *(int *)(pcVar8 + 0x24) = local_18;
        *(undefined4 *)(pcVar8 + 0x28) = *(undefined4 *)(pCVar12->field21_0x298 + 0x1c);
        uVar3 = *(undefined4 *)(pCVar12->field21_0x298 + 0x20);
        *(int *)(pcVar8 + 0x30) = iVar13;
        *(undefined4 *)(pcVar8 + 0x2c) = uVar3;
        iVar9 = *(int *)(this_ptr->field21_0x298 + iVar13 * 0x20 + 0x1c);
        *(int *)(pcVar8 + 0x34) = iVar9;
        pCVar12 = (CWaterActor *)&(pCVar12->base_actor).location;
        *(undefined4 *)(pcVar8 + 0x38) =
             *(undefined4 *)(this_ptr->field21_0x298 + iVar13 * 0x20 + 0x20);
        pcVar8 = pcVar8 + 0x48;
        iVar5 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
        local_18 = iVar4;
      } while (iVar4 < iVar5);
    }
  }
  core_wateract_cpp_FUN_005eafa0(iVar5,iVar9);
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


// Assembly code:
// 005ea9f0: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_FUN_005ea9f0
// 005ea9f1: PUSH ESI
// 005ea9f2: PUSH EDI
// 005ea9f3: PUSH EBP
// 005ea9f4: MOV EBP,ESP
// 005ea9f6: SUB ESP,0x40
// 005ea9f9: AND ESP,0xfffffff8
// 005ea9fc: MOV EDI,dword ptr [EBP + 0x14]
// 005ea9ff: PUSH EDI
// 005eaa00: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
