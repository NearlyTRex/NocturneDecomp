// Name: core_box.cpp_CBox_processPhysics_FUN_005b22f0
// Address: 005b22f0
// Address Range: [[005b22f0, 005b42fa]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_processPhysics_FUN_005b22f0(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_processPhysics_FUN_005b22f0(CBox *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBox *pCVar4;
  int iVar5;
  int iVar6;
  CBox *pCVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_1614 [978];
  CMatrix3x3f *this_ptr_00;
  CBox *pCVar10;
  CVector3f *euler_angles;
  float local_69c;
  float local_698;
  float local_694;
  float local_690;
  float local_68c;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  float local_674;
  float local_670;
  float local_66c;
  float local_668;
  float local_664;
  float local_660;
  float local_65c;
  float local_658;
  float local_654;
  int aiStack_650 [9];
  float local_62c;
  float afStack_628 [4];
  float local_618;
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  uint local_5a0;
  float local_59c;
  float local_598 [4];
  float local_588;
  float local_584;
  float local_580;
  float local_57c;
  byte local_578 [12];
  float local_56c;
  float local_568 [4];
  float local_558;
  float local_554;
  float local_550;
  float local_54c;
  uint local_548;
  float local_544;
  uint local_540;
  float local_53c;
  float local_538 [4];
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc [4];
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  uint local_4d0;
  float local_4cc [4];
  float local_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float afStack_3d0 [4];
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c [5];
  uint local_338;
  float local_334 [4];
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  uint local_2d8;
  float local_2d4;
  uint local_2d0;
  float local_2cc;
  float local_2c8 [4];
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  uint local_200;
  float afStack_1fc [5];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float afStack_1a8 [2];
  float local_1a0;
  float local_19c [4];
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178 [4];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4 [5];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CBox *local_a0;
  float local_9c;
  CBox *local_98;
  float local_90;
  float local_8c;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  CBox *local_5c;
  CBox *local_58;
  CBox *local_54;
  CBox *local_50;
  CBox *local_4c;
  CBox *local_48;
  CBox *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CBox *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar9 = 0;
  if (*(int *)(this_ptr + 0x254) == 0) {
    return;
  }
  if ((CBox *)&local_548 != this_ptr) {
    local_548 = *(uint *)this_ptr;
    local_544 = *(float *)(this_ptr + 4);
    local_540 = *(uint *)(this_ptr + 8);
  }
  if ((CBox *)&local_2d8 != this_ptr) {
    local_2d8 = *(uint *)this_ptr;
    local_2d4 = *(float *)(this_ptr + 4);
    local_2d0 = *(uint *)(this_ptr + 8);
  }
  local_544 = local_544 + 1.0;
  local_2d4 = local_2d4 + _DAT_005f12e8;
  local_2c = (CBox *)core_dtrace_cpp_FUN_00472c60
                               (&g_CDemonRaytraceInstance,&local_548,&local_2d8,local_578,0);
  if (((float)local_2c <= 0.0) || (1.0 <= (float)local_2c)) {
    *(uint *)(this_ptr + 600) = 0xc61c3c00;
  }
  else {
    *(float *)(this_ptr + 600) = (local_2d4 - local_544) * (float)local_2c + local_544;
  }
  pCVar4 = this_ptr + 0xc0;
  pCVar7 = this_ptr + 0xcc;
  do {
    if (pCVar7 != pCVar4) {
      *(uint *)pCVar7 = *(uint *)pCVar4;
      *(uint *)(pCVar7 + 4) = *(uint *)(pCVar4 + 4);
      *(uint *)(pCVar7 + 8) = *(uint *)(pCVar4 + 8);
    }
    pCVar4 = pCVar4 + 0x34;
    pCVar7 = pCVar7 + 0x34;
  } while (pCVar4 != this_ptr + 0x260);
  local_5a0 = 0;
  local_5a8 = 0.0;
  local_5a4 = -*(float *)(this_ptr + 0x94) * (float)_DAT_005f12f0;
  core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,afStack_628 + 0x20);
  pCVar4 = this_ptr + 100;
  local_41c = local_29c;
  local_4cc[(uint)bVar9 * -2 + 0x2d] = local_2c8[(uint)bVar9 * -2 + 0xc];
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  *(float *)pCVar4 = *(float *)pCVar4 + local_41c;
  *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x68) + local_418;
  *(float *)(this_ptr + 0x6c) = *(float *)(this_ptr + 0x6c) + local_414;
  fVar1 = 1.0 / *(float *)(this_ptr + 0x94);
  local_26c = *(float *)pCVar4 * fVar1;
  local_268 = *(float *)(this_ptr + 0x68) * fVar1;
  local_264 = fVar1 * *(float *)(this_ptr + 0x6c);
  local_56c = *(float *)pCVar4 * fVar1;
  local_568[(uint)bVar9 * -2] = local_2c8[(uint)bVar9 * -2 + 0x18];
  local_568[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
  if (this_ptr + 0x58 != (CBox *)&local_56c) {
    *(float *)(this_ptr + 0x58) = local_56c;
    *(float *)(this_ptr + 0x5c) = local_568[0];
    *(float *)(this_ptr + 0x60) = local_568[1];
  }
  *(float *)(this_ptr + 0x7c) = *(float *)(this_ptr + 0x88) / *(float *)(this_ptr + 0x98);
  *(float *)(this_ptr + 0x80) = *(float *)(this_ptr + 0x8c) / *(float *)(this_ptr + 0x9c);
  *(float *)(this_ptr + 0x84) = *(float *)(this_ptr + 0x90) / *(float *)(this_ptr + 0xa0);
  *(uint *)(this_ptr + 0x6c) = 0;
  *(uint *)(this_ptr + 0x68) = *(uint *)(this_ptr + 0x6c);
  *(uint *)(this_ptr + 100) = *(uint *)(this_ptr + 0x68);
  *(uint *)(this_ptr + 0x90) = 0;
  *(uint *)(this_ptr + 0x8c) = *(uint *)(this_ptr + 0x90);
  *(uint *)(this_ptr + 0x88) = *(uint *)(this_ptr + 0x8c);
  local_2c = this_ptr + 0x18;
  core_dirmat_cpp_FUN_00449530(local_2c,this_ptr + 0x58);
  local_224 = local_f4[2];
  local_2c8[(uint)bVar9 * -2 + 0x2a] = local_f4[(uint)bVar9 * -2 + 3];
  pCVar7 = local_2c;
  local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
       local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  pCVar4 = this_ptr + 0x40;
  local_1dc = local_224 * delta_time;
  local_1d8 = local_220 * delta_time;
  local_1d4 = local_21c * delta_time;
  local_4e8 = local_224 * delta_time;
  local_4fc[(uint)bVar9 * -2 + 6] = afStack_1fc[(uint)bVar9 * -2 + 9];
  pCVar10 = pCVar4;
  local_4fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  *(float *)pCVar4 = *(float *)pCVar4 + local_4e8;
  *(float *)(this_ptr + 0x44) = *(float *)(this_ptr + 0x44) + local_4e4;
  *(float *)(this_ptr + 0x48) = *(float *)(this_ptr + 0x48) + local_4e0;
  core_dirmat_cpp_FUN_004495a0(pCVar7,pCVar10);
  local_4d0 = local_34c[2];
  local_4cc[(uint)bVar9 * -2] = local_34c[(uint)bVar9 * -2 + 3];
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_34c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  if (this_ptr + 0x4c != (CBox *)&local_4d0) {
    *(uint *)(this_ptr + 0x4c) = local_4d0;
    *(float *)(this_ptr + 0x50) = local_4cc[0];
    *(float *)(this_ptr + 0x54) = local_4cc[1];
  }
  local_d4 = *(float *)(this_ptr + 0x7c) * delta_time;
  local_d0 = *(float *)(this_ptr + 0x80) * delta_time;
  pCVar4 = this_ptr + 0x70;
  local_cc = delta_time * *(float *)(this_ptr + 0x84);
  local_488 = *(float *)(this_ptr + 0x7c) * delta_time;
  local_4cc[(uint)bVar9 * -2 + 0x12] = local_f4[(uint)bVar9 * -2 + 9];
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
       local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  fVar1 = *(float *)(this_ptr + 0x74);
  *(float *)pCVar4 = *(float *)pCVar4 + local_488;
  *(float *)(this_ptr + 0x74) = fVar1 + local_484;
  fVar2 = *(float *)(this_ptr + 0x78);
  *(float *)(this_ptr + 0x78) = fVar2 + local_480;
  local_18 = SQRT((fVar2 + local_480) * *(float *)(this_ptr + 0x78) +
                  *(float *)pCVar4 * *(float *)pCVar4 +
                  (fVar1 + local_484) * *(float *)(this_ptr + 0x74));
  if (_DAT_005f12f8 < local_18) {
    local_9c = _DAT_005f12f8 / local_18;
    *(float *)pCVar4 = *(float *)pCVar4 * local_9c;
    *(float *)(this_ptr + 0x74) = *(float *)(this_ptr + 0x74) * local_9c;
    *(float *)(this_ptr + 0x78) = *(float *)(this_ptr + 0x78) * local_9c;
  }
  local_110 = *(float *)(this_ptr + 0x40) * delta_time;
  local_10c = *(float *)(this_ptr + 0x44) * delta_time;
  local_108 = *(float *)(this_ptr + 0x48) * delta_time;
  local_47c = *(float *)(this_ptr + 0x40) * delta_time;
  local_4cc[(uint)bVar9 * -2 + 0x15] = local_178[(uint)bVar9 * -2 + 0x1b];
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
       local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
  *(float *)this_ptr = *(float *)this_ptr + local_47c;
  *(float *)(this_ptr + 4) = *(float *)(this_ptr + 4) + local_478;
  *(float *)(this_ptr + 8) = *(float *)(this_ptr + 8) + local_474;
  local_5b4 = *(float *)(this_ptr + 0x70) * delta_time;
  local_5b0 = *(float *)(this_ptr + 0x74) * delta_time;
  euler_angles = (CVector3f *)&local_3d4;
  this_ptr_00 = (CMatrix3x3f *)&local_674;
  local_5ac = delta_time * *(float *)(this_ptr + 0x78);
  local_3d4 = *(float *)(this_ptr + 0x70) * delta_time;
  afStack_3d0[(uint)bVar9 * -2] = afStack_628[(uint)bVar9 * -2 + 0x1e];
  afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
  core_dirmat_cpp_FUN_00449280(this_ptr_00,euler_angles);
  local_69c = *(float *)(this_ptr + 0x20) * local_65c +
              *(float *)(this_ptr + 0x18) * local_674 + *(float *)(this_ptr + 0x1c) * local_668;
  local_698 = *(float *)(this_ptr + 0x20) * local_658 +
              *(float *)(this_ptr + 0x1c) * local_664 + *(float *)(this_ptr + 0x18) * local_670;
  local_694 = *(float *)(this_ptr + 0x20) * local_654 +
              *(float *)(this_ptr + 0x1c) * local_660 + *(float *)(this_ptr + 0x18) * local_66c;
  local_690 = *(float *)(this_ptr + 0x2c) * local_65c +
              *(float *)(this_ptr + 0x24) * local_674 + *(float *)(this_ptr + 0x28) * local_668;
  local_68c = *(float *)(this_ptr + 0x2c) * local_658 +
              *(float *)(this_ptr + 0x28) * local_664 + *(float *)(this_ptr + 0x24) * local_670;
  local_688 = *(float *)(this_ptr + 0x2c) * local_654 +
              *(float *)(this_ptr + 0x28) * local_660 + *(float *)(this_ptr + 0x24) * local_66c;
  local_684 = *(float *)(this_ptr + 0x38) * local_65c +
              *(float *)(this_ptr + 0x30) * local_674 + *(float *)(this_ptr + 0x34) * local_668;
  local_680 = *(float *)(this_ptr + 0x38) * local_658 +
              *(float *)(this_ptr + 0x34) * local_664 + *(float *)(this_ptr + 0x30) * local_670;
  local_67c = *(float *)(this_ptr + 0x38) * local_654 +
              *(float *)(this_ptr + 0x34) * local_660 + *(float *)(this_ptr + 0x30) * local_66c;
  puVar8 = &stack0xfffff964;
  pCVar4 = this_ptr + 0x18;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pCVar4 = *puVar8;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    pCVar4 = pCVar4 + (uint)bVar9 * -8 + 4;
  }
  core_dirmat_cpp_FUN_004496e0(this_ptr + 0x18);
  local_338 = local_200;
  local_334[(uint)bVar9 * -2] = afStack_1fc[(uint)bVar9 * -2];
  local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  if (this_ptr + 0xc != (CBox *)&local_338) {
    *(uint *)(this_ptr + 0xc) = local_338;
    *(float *)(this_ptr + 0x10) = local_334[0];
    *(float *)(this_ptr + 0x14) = local_334[1];
  }
  local_34 = 0;
  if (0 < *(int *)(this_ptr + 0xb0)) {
    local_98 = this_ptr + 0xb4;
    local_a0 = this_ptr + 0x18;
    local_54 = this_ptr + 0xc0;
    do {
      core_dirmat_cpp_FUN_00449530(local_a0,local_98 + local_34 * 0x34);
      local_1d0 = local_464;
      afStack_1fc[(uint)bVar9 * -2 + 0xc] = local_4cc[(uint)bVar9 * -2 + 0x1b];
      afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      local_14c = *(float *)this_ptr + local_1d0;
      local_148 = *(float *)(this_ptr + 4) + local_1cc;
      local_144 = *(float *)(this_ptr + 8) + local_1c8;
      local_1a0 = *(float *)this_ptr + local_1d0;
      local_19c[(uint)bVar9 * -2] = local_178[(uint)bVar9 * -2 + 0xc];
      local_19c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      if ((CBox *)&local_1a0 != local_54) {
        *(float *)local_54 = local_1a0;
        *(float *)(local_54 + 4) = local_19c[0];
        *(float *)(local_54 + 8) = local_19c[1];
      }
      local_34 = local_34 + 1;
      local_54 = local_54 + 0x34;
    } while (local_34 < *(int *)(this_ptr + 0xb0));
  }
  local_5c = this_ptr + 0xb4;
  local_38 = 0;
  local_50 = this_ptr + 0xcc;
  local_7c = 0;
  local_4c = this_ptr + 0xc0;
  local_48 = this_ptr;
  if (0 < *(int *)(this_ptr + 0xb0)) {
    local_44 = this_ptr + 0xb4;
    do {
      if (*(float *)(this_ptr + 600) <= *(float *)(local_48 + 0xc4)) {
        local_380 = *(float *)local_4c - *(float *)local_50;
        local_37c = *(float *)(local_4c + 4) - *(float *)(local_50 + 4);
        local_378 = *(float *)(local_4c + 8) - *(float *)(local_50 + 8);
        local_23c = *(float *)local_4c - *(float *)local_50;
        local_2c8[(uint)bVar9 * -2 + 0x24] = afStack_3d0[(uint)bVar9 * -2 + 0x15];
        local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
             afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        if ((float)_DAT_005f1328 <
            SQRT(local_234 * local_234 + local_23c * local_23c + local_238 * local_238)) {
          local_2c = (CBox *)core_dtrace_cpp_FUN_00472c60
                                       (&g_CDemonRaytraceInstance,local_50,local_4c,local_44 + 0x28,
                                        0);
          *(CBox **)(local_48 + 0xd8) = local_2c;
          if ((0.0 < *(float *)(local_48 + 0xd8)) && (*(float *)(local_48 + 0xd8) < 1.0)) {
            aiStack_650[local_7c + 1] = local_38;
            local_7c = local_7c + 1;
          }
        }
      }
      else {
        if (local_50 != local_4c) {
          *(float *)local_50 = *(float *)local_4c;
          *(float *)(local_50 + 4) = *(float *)(local_4c + 4);
          *(float *)(local_50 + 8) = *(float *)(local_4c + 8);
        }
        *(float *)(local_48 + 0xd0) = *(float *)(this_ptr + 600) + (float)_DAT_005f1330;
        fVar1 = *(float *)(this_ptr + 600);
        *(uint *)(local_48 + 0xdc) = 0;
        *(uint *)(local_48 + 0xe0) = 0x3f800000;
        *(uint *)(local_48 + 0xe4) = 0;
        *(float *)(local_48 + 0xd8) =
             (fVar1 - *(float *)(local_48 + 0xd0)) /
             (*(float *)(local_48 + 0xc4) - *(float *)(local_48 + 0xd0));
        aiStack_650[local_7c + 1] = local_38;
        local_7c = local_7c + 1;
      }
      local_38 = local_38 + 1;
      local_50 = local_50 + 0x34;
      local_4c = local_4c + 0x34;
      local_48 = local_48 + 0x34;
      local_44 = local_44 + 0x34;
    } while (local_38 < *(int *)(this_ptr + 0xb0));
  }
  if (local_7c == 1) {
    local_20 = aiStack_650[1];
    iVar6 = aiStack_650[1] * 0x34;
    local_584 = *(float *)(local_5c + iVar6 + 0xc) - *(float *)(local_5c + iVar6 + 0x18);
    local_580 = *(float *)(local_5c + iVar6 + 0x10) - *(float *)(local_5c + iVar6 + 0x1c);
    local_57c = *(float *)(local_5c + iVar6 + 0x14) - *(float *)(local_5c + iVar6 + 0x20);
    local_2a8 = *(float *)(local_5c + iVar6 + 0xc) - *(float *)(local_5c + iVar6 + 0x18);
    local_2c8[(uint)bVar9 * -2 + 9] = local_598[(uint)bVar9 * -2 + 6];
    iVar5 = local_20;
    local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         *(float *)(local_578 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4);
    local_60 = (1.0 - *(float *)(this_ptr + iVar6 + 0xd8)) * (float)_DAT_005f1300;
    local_254 = local_2a8 * local_60;
    local_250 = local_2a4 * local_60;
    local_24c = local_2a0 * local_60;
    local_b0 = local_2a8 * local_60;
    local_f4[(uint)bVar9 * -2 + 0x12] = local_2c8[(uint)bVar9 * -2 + 0x1e];
    local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
         local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
    *(float *)this_ptr = *(float *)this_ptr - local_b0;
    *(float *)(this_ptr + 4) = *(float *)(this_ptr + 4) - local_ac;
    *(float *)(this_ptr + 8) = *(float *)(this_ptr + 8) - local_a8;
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,local_5c + iVar5 * 0x34 + 0x28);
    local_53c = afStack_1fc[2];
    local_538[(uint)bVar9 * -2] = afStack_1fc[(uint)bVar9 * -2 + 3];
    local_538[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    local_8c = (local_538[1] * *(float *)(this_ptr + 0x54) +
               local_53c * *(float *)(this_ptr + 0x4c) + local_538[0] * *(float *)(this_ptr + 0x50))
               * _DAT_005f1308;
    local_bc = local_53c * local_8c;
    local_b8 = local_538[0] * local_8c;
    local_b4 = local_538[1] * local_8c;
    local_1e8 = local_53c * local_8c;
    afStack_1fc[(uint)bVar9 * -2 + 6] = local_f4[(uint)bVar9 * -2 + 0xf];
    afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
    local_164 = local_1e8 - *(float *)(this_ptr + 0x4c);
    local_160 = local_1e4 - *(float *)(this_ptr + 0x50);
    local_15c = local_1e0 - *(float *)(this_ptr + 0x54);
    local_1c4 = local_164;
    afStack_1fc[(uint)bVar9 * -2 + 0xf] = local_178[(uint)bVar9 * -2 + 6];
    afStack_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (local_538 + 0xb != afStack_1fc + 0xe) {
      local_50c = local_1c4;
      local_508 = local_1c0;
      local_504 = local_1bc;
    }
    local_50c = local_50c * _DAT_005f130c * _DAT_005f1310;
    local_508 = local_508 * _DAT_005f130c * _DAT_005f1310;
    local_504 = local_504 * _DAT_005f130c * _DAT_005f1310;
    fVar1 = 1.0 / delta_time;
    local_410 = local_50c - *(float *)(this_ptr + 0x4c);
    local_40c = local_508 - *(float *)(this_ptr + 0x50);
    local_408 = local_504 - *(float *)(this_ptr + 0x54);
    local_158 = local_410;
    local_178[(uint)bVar9 * -2 + 9] = local_4cc[(uint)bVar9 * -2 + 0x30];
    local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
    pCVar4 = this_ptr + 0x94;
    local_3ec = local_158 * *(float *)pCVar4;
    local_3e8 = local_154 * *(float *)pCVar4;
    local_3e4 = local_150 * *(float *)pCVar4;
    local_614 = local_158 * *(float *)pCVar4;
    afStack_628[(uint)bVar9 * -2 + 6] = local_4cc[(uint)bVar9 * -2 + 0x39];
    afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
    local_3bc = local_614 * fVar1;
    local_3b8 = local_610 * fVar1;
    local_3b4 = local_60c * fVar1;
    local_470 = local_614 * fVar1;
    local_4cc[(uint)bVar9 * -2 + 0x18] = afStack_3d0[(uint)bVar9 * -2 + 6];
    local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
         afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    *(float *)(this_ptr + 100) = *(float *)(this_ptr + 100) + local_470;
    *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x68) + local_46c;
    *(float *)(this_ptr + 0x6c) = *(float *)(this_ptr + 0x6c) + local_468;
    *(uint *)(this_ptr + 0x78) = 0;
    *(uint *)(this_ptr + 0x74) = *(uint *)(this_ptr + 0x78);
    *(uint *)(this_ptr + 0x70) = *(uint *)(this_ptr + 0x74);
    iVar5 = local_20 * 0x34;
    local_5fc = *(float *)(this_ptr + iVar5 + 0xb8) * local_468 -
                *(float *)(this_ptr + iVar5 + 0xbc) * local_46c;
    local_5f8 = *(float *)(this_ptr + iVar5 + 0xbc) * local_470 -
                *(float *)(this_ptr + iVar5 + 0xb4) * local_468;
    local_5f4 = *(float *)(this_ptr + iVar5 + 0xb4) * local_46c -
                *(float *)(this_ptr + iVar5 + 0xb8) * local_470;
    local_404 = local_5fc;
    local_4cc[(uint)bVar9 * -2 + 0x33] = afStack_628[(uint)bVar9 * -2 + 0xc];
    local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
         afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    local_2cc = local_404 * _DAT_005f1314;
    local_2c8[0] = local_400 * _DAT_005f1314;
    local_2c8[1] = local_3fc * _DAT_005f1314;
    local_538[2] = local_404 * _DAT_005f1314;
    local_538[(uint)bVar9 * -2 + 3] = local_2c8[(uint)bVar9 * -2];
    local_538[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    *(float *)(this_ptr + 0x88) = *(float *)(this_ptr + 0x88) + local_538[2];
    *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_538[3];
    *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_528;
    pCVar4 = this_ptr + iVar5 + 0xb4;
    local_c8 = *(float *)pCVar4;
    local_f4[(uint)bVar9 * -2 + 0xc] = *(float *)(pCVar4 + (uint)bVar9 * -8 + 4);
    local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         *(float *)(pCVar4 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4);
    local_35c = 0.0;
    local_354 = 0.0;
    local_358 = *(float *)(this_ptr + 0x94) * (float)_DAT_005f12f0;
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,&local_35c);
    local_314 = local_278;
    local_334[(uint)bVar9 * -2 + 9] = local_2c8[(uint)bVar9 * -2 + 0x15];
    local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
    if (&local_35c != local_334 + 8) {
      local_35c = local_314;
      local_358 = local_310;
      local_354 = local_30c;
    }
    local_568[2] = local_c4 * local_354 - local_c0 * local_358;
    local_568[3] = local_c0 * local_35c - local_c8 * local_354;
    local_558 = local_c8 * local_358 - local_c4 * local_35c;
    local_608 = local_568[2];
    afStack_628[(uint)bVar9 * -2 + 9] = local_568[(uint)bVar9 * -2 + 3];
    afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         local_568[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    *(float *)(this_ptr + 0x88) = *(float *)(this_ptr + 0x88) + local_608;
    *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_604;
    *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_600;
  }
  if (local_7c != 2) goto LAB_005b3bd3;
  local_1c = aiStack_650[1];
  iVar5 = aiStack_650[1] * 0x34;
  local_2c = (CBox *)iVar5;
  local_334[2] = *(float *)(this_ptr + iVar5 + 0xc0) - *(float *)(this_ptr + iVar5 + 0xcc);
  local_334[3] = *(float *)(this_ptr + iVar5 + 0xc4) - *(float *)(this_ptr + iVar5 + 0xd0);
  local_324 = *(float *)(this_ptr + iVar5 + 200) - *(float *)(this_ptr + iVar5 + 0xd4);
  local_4a0 = *(float *)(this_ptr + iVar5 + 0xc0) - *(float *)(this_ptr + iVar5 + 0xcc);
  local_4cc[(uint)bVar9 * -2 + 0xc] = local_334[(uint)bVar9 * -2 + 3];
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
       local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  local_14 = (1.0 - *(float *)(this_ptr + iVar5 + 0xd8)) * (float)_DAT_005f1318;
  local_28 = aiStack_650[2];
  local_2f0 = local_4a0 * local_14;
  local_2ec = local_49c * local_14;
  local_2e8 = local_498 * local_14;
  local_350 = local_4a0 * local_14;
  local_34c[(uint)bVar9 * -2] = local_334[(uint)bVar9 * -2 + 0x12];
  local_34c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
  fVar1 = local_34c[0] * local_34c[0];
  iVar5 = aiStack_650[2] * 0x34;
  fVar3 = local_350 * local_350;
  local_2c = (CBox *)iVar5;
  fVar2 = local_34c[1] * local_34c[1];
  local_290 = *(float *)(this_ptr + iVar5 + 0xc0) - *(float *)(this_ptr + iVar5 + 0xcc);
  local_28c = *(float *)(this_ptr + iVar5 + 0xc4) - *(float *)(this_ptr + iVar5 + 0xd0);
  local_288 = *(float *)(this_ptr + iVar5 + 200) - *(float *)(this_ptr + iVar5 + 0xd4);
  local_2e4 = *(float *)(this_ptr + iVar5 + 0xc0) - *(float *)(this_ptr + iVar5 + 0xcc);
  local_334[(uint)bVar9 * -2 + 0x15] = local_2c8[(uint)bVar9 * -2 + 0xf];
  local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
  local_70 = (1.0 - *(float *)(this_ptr + iVar5 + 0xd8)) * (float)_DAT_005f1318;
  local_230 = local_2e4 * local_70;
  local_22c = local_2e0 * local_70;
  local_228 = local_2dc * local_70;
  local_2fc = local_2e4 * local_70;
  local_334[(uint)bVar9 * -2 + 0xf] = local_2c8[(uint)bVar9 * -2 + 0x27];
  local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
  if (SQRT(fVar2 + fVar3 + fVar1) <=
      SQRT(local_2f4 * local_2f4 + local_2fc * local_2fc + local_2f8 * local_2f8)) {
    *(float *)this_ptr = *(float *)this_ptr + local_2fc;
    *(float *)(this_ptr + 4) = *(float *)(this_ptr + 4) + local_2f8;
    *(float *)(this_ptr + 8) = *(float *)(this_ptr + 8) + local_2f4;
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,this_ptr + local_28 * 0x34 + 0xdc);
    afStack_628[2] = local_398;
    afStack_628[(uint)bVar9 * -2 + 3] = afStack_3d0[(uint)bVar9 * -2 + 0xf];
    afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
    if (local_19c + 5 != afStack_628 + 2) {
      local_188 = afStack_628[2];
      local_184 = afStack_628[3];
      local_2b8 = local_618;
      goto LAB_005b349b;
    }
  }
  else {
    *(float *)this_ptr = *(float *)this_ptr + local_350;
    *(float *)(this_ptr + 4) = *(float *)(this_ptr + 4) + local_34c[0];
    *(float *)(this_ptr + 8) = *(float *)(this_ptr + 8) + local_34c[1];
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,this_ptr + local_1c * 0x34 + 0xdc);
    local_2c8[2] = local_62c;
    local_2c8[(uint)bVar9 * -2 + 3] = afStack_628[(uint)bVar9 * -2];
    local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (local_19c + 5 != local_2c8 + 2) {
      local_188 = local_2c8[2];
      local_184 = local_2c8[3];
LAB_005b349b:
      local_180 = local_2b8;
    }
  }
  local_90 = (local_180 * *(float *)(this_ptr + 0x54) +
             local_188 * *(float *)(this_ptr + 0x4c) + local_184 * *(float *)(this_ptr + 0x50)) *
             _DAT_005f1308;
  local_4ac = local_188 * local_90;
  local_4a8 = local_184 * local_90;
  local_4a4 = local_180 * local_90;
  local_17c = local_188 * local_90;
  local_178[(uint)bVar9 * -2] = local_4cc[(uint)bVar9 * -2 + 9];
  local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  local_e0 = local_17c - *(float *)(this_ptr + 0x4c);
  local_dc = local_178[0] - *(float *)(this_ptr + 0x50);
  local_d8 = local_178[1] - *(float *)(this_ptr + 0x54);
  local_500 = local_e0;
  local_4fc[(uint)bVar9 * -2] = local_f4[(uint)bVar9 * -2 + 6];
  local_4fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  if (local_178 + 0x1d != &local_500) {
    local_104 = local_500;
    local_100 = local_4fc[0];
    local_fc = local_4fc[1];
  }
  local_104 = local_104 * _DAT_005f130c * _DAT_005f1320;
  local_100 = local_100 * _DAT_005f130c * _DAT_005f1320;
  local_fc = local_fc * _DAT_005f130c * _DAT_005f1320;
  fVar1 = 1.0 / delta_time;
  local_434 = local_104 - *(float *)(this_ptr + 0x4c);
  local_430 = local_100 - *(float *)(this_ptr + 0x50);
  local_42c = local_fc - *(float *)(this_ptr + 0x54);
  local_59c = local_434;
  local_598[(uint)bVar9 * -2] = local_4cc[(uint)bVar9 * -2 + 0x27];
  local_598[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
  pCVar4 = this_ptr + 0x94;
  local_598[2] = local_59c * *(float *)pCVar4;
  local_598[3] = local_598[0] * *(float *)pCVar4;
  local_588 = local_598[1] * *(float *)pCVar4;
  local_524 = local_59c * *(float *)pCVar4;
  local_538[(uint)bVar9 * -2 + 6] = local_598[(uint)bVar9 * -2 + 3];
  local_538[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       local_598[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  local_554 = local_524 * fVar1;
  local_550 = local_520 * fVar1;
  local_54c = local_51c * fVar1;
  local_5e4 = local_524 * fVar1;
  afStack_628[(uint)bVar9 * -2 + 0x12] = local_568[(uint)bVar9 * -2 + 6];
  iVar5 = local_28;
  afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
       local_568[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  *(float *)(this_ptr + 100) = *(float *)(this_ptr + 100) + local_5e4;
  *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x68) + local_5e0;
  *(float *)(this_ptr + 0x6c) = *(float *)(this_ptr + 0x6c) + local_5dc;
  *(uint *)(this_ptr + 0x78) = 0;
  *(uint *)(this_ptr + 0x74) = *(uint *)(this_ptr + 0x78);
  *(uint *)(this_ptr + 0x70) = *(uint *)(this_ptr + 0x74);
  local_24 = local_1c * 0x34;
  local_2c = this_ptr + 0xb4;
  pCVar4 = this_ptr + 0xb4 + local_1c * 0x34;
  local_4fc[2] = *(float *)(pCVar4 + 4) * local_5dc - *(float *)(pCVar4 + 8) * local_5e0;
  local_4fc[3] = *(float *)(pCVar4 + 8) * local_5e4 - *(float *)pCVar4 * local_5dc;
  local_4ec = *(float *)pCVar4 * local_5e0 - *(float *)(pCVar4 + 4) * local_5e4;
  local_5c0 = local_4fc[2];
  afStack_628[(uint)bVar9 * -2 + 0x1b] = local_4fc[(uint)bVar9 * -2 + 3];
  afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
       local_4fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  pCVar4 = this_ptr + 0x88;
  local_494 = local_5c0 * _DAT_005f1314;
  local_490 = local_5bc * _DAT_005f1314;
  local_48c = local_5b8 * _DAT_005f1314;
  local_518 = local_5c0 * _DAT_005f1314;
  local_538[(uint)bVar9 * -2 + 9] = local_4cc[(uint)bVar9 * -2 + 0xf];
  local_538[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
  *(float *)pCVar4 = *(float *)pCVar4 + local_518;
  *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_514;
  iVar5 = iVar5 * 0x34;
  *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_510;
  local_44c = *(float *)(local_2c + iVar5 + 4) * local_5dc -
              *(float *)(local_2c + iVar5 + 8) * local_5e0;
  local_448 = *(float *)(local_2c + iVar5 + 8) * local_5e4 -
              *(float *)(local_2c + iVar5) * local_5dc;
  local_444 = *(float *)(local_2c + iVar5) * local_5e0 -
              *(float *)(local_2c + iVar5 + 4) * local_5e4;
  local_140 = local_44c;
  local_178[(uint)bVar9 * -2 + 0xf] = local_4cc[(uint)bVar9 * -2 + 0x21];
  local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
       local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
  local_3e0 = local_140 * _DAT_005f1314;
  local_3dc = local_13c * _DAT_005f1314;
  local_3d8 = local_138 * _DAT_005f1314;
  local_218 = local_140 * _DAT_005f1314;
  local_2c8[(uint)bVar9 * -2 + 0x2d] = local_4cc[(uint)bVar9 * -2 + 0x3c];
  local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
       local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d];
  *(float *)pCVar4 = *(float *)pCVar4 + local_218;
  *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_214;
  *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_210;
  pCVar4 = this_ptr + local_24 + 0xb4;
  local_4dc = *(float *)pCVar4;
  local_4fc[(uint)bVar9 * -2 + 9] = *(float *)(pCVar4 + (uint)bVar9 * -8 + 4);
  local_4fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       *(float *)(pCVar4 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4);
  local_4cc[2] = *(float *)(this_ptr + iVar5 + 0xb4);
  local_4cc[(uint)bVar9 * -2 + 3] = *(float *)(this_ptr + (uint)bVar9 * -8 + iVar5 + 0xb8);
  local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       *(float *)(this_ptr + (uint)bVar9 * -8 + iVar5 + 0xb8 + (uint)bVar9 * -8 + 4);
  local_19c[2] = 0.0;
  local_18c = 0.0;
  local_19c[3] = *(float *)(this_ptr + 0x94) * (float)_DAT_005f12f0;
  core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,local_19c + 2);
  fVar1 = _DAT_005f1310;
  local_178[2] = local_374;
  local_178[(uint)bVar9 * -2 + 3] = afStack_3d0[(uint)bVar9 * -2 + 0x18];
  local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
  if (local_19c + 2 != local_178 + 2) {
    local_19c[2] = local_178[2];
    local_19c[3] = local_178[3];
    local_18c = local_168;
  }
  local_368 = local_19c[2] * _DAT_005f1310;
  local_364 = local_19c[3] * _DAT_005f1310;
  local_360 = local_18c * _DAT_005f1310;
  local_134 = local_19c[2] * _DAT_005f1310;
  local_178[(uint)bVar9 * -2 + 0x12] = afStack_3d0[(uint)bVar9 * -2 + 0x1b];
  local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
       afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
  pCVar4 = this_ptr + 0x88;
  local_320 = local_4d8 * local_12c - local_4d4 * local_130;
  local_31c = local_4d4 * local_134 - local_4dc * local_12c;
  local_318 = local_4dc * local_130 - local_4d8 * local_134;
  local_5d8 = local_320;
  afStack_628[(uint)bVar9 * -2 + 0x15] = local_334[(uint)bVar9 * -2 + 6];
  afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
       local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  *(float *)pCVar4 = *(float *)pCVar4 + local_5d8;
  *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_5d4;
  *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_5d0;
  local_2b4 = local_19c[2] * fVar1;
  local_2b0 = local_19c[3] * fVar1;
  local_2ac = local_18c * fVar1;
  afStack_3d0[2] = local_19c[2] * fVar1;
  afStack_3d0[(uint)bVar9 * -2 + 3] = local_2c8[(uint)bVar9 * -2 + 6];
  afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  local_284 = local_4cc[3] * local_3c0 - local_4bc * afStack_3d0[3];
  local_280 = local_4bc * afStack_3d0[2] - local_4cc[2] * local_3c0;
  local_27c = local_4cc[2] * afStack_3d0[3] - local_4cc[3] * afStack_3d0[2];
  local_3a4 = local_284;
  afStack_3d0[(uint)bVar9 * -2 + 0xc] = local_2c8[(uint)bVar9 * -2 + 0x12];
  afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
       local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
  *(float *)pCVar4 = *(float *)pCVar4 + local_3a4;
  *(float *)(this_ptr + 0x8c) = *(float *)(this_ptr + 0x8c) + local_3a0;
  *(float *)(this_ptr + 0x90) = *(float *)(this_ptr + 0x90) + local_39c;
LAB_005b3bd3:
  if (2 < local_7c) {
    iVar5 = 0;
    local_30 = 0;
    local_58 = this_ptr + 0xb4;
    local_78 = 0.0;
    local_40 = local_7c * 4;
    if (0 < local_7c * 4) {
      do {
        local_3c = *(int *)((int)aiStack_650 + iVar5 + 4);
        pCVar4 = (CBox *)(local_3c * 0x34);
        local_2c = pCVar4;
        pCVar7 = local_58 + (int)pCVar4;
        local_5cc = *(float *)(pCVar7 + 0xc) - *(float *)(pCVar7 + 0x18);
        local_5c8 = *(float *)(pCVar7 + 0x10) - *(float *)(pCVar7 + 0x1c);
        local_5c4 = *(float *)(pCVar7 + 0x14) - *(float *)(pCVar7 + 0x20);
        local_4b8 = *(float *)(pCVar7 + 0xc) - *(float *)(pCVar7 + 0x18);
        local_4cc[(uint)bVar9 * -2 + 6] = afStack_628[(uint)bVar9 * -2 + 0x18];
        local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
        local_6c = (1.0 - *(float *)(this_ptr + 0xd8 + (int)pCVar4)) * (float)_DAT_005f1318;
        local_128 = local_4b8 * local_6c;
        local_124 = local_4b4 * local_6c;
        local_120 = local_4b0 * local_6c;
        local_5f0 = local_4b8 * local_6c;
        afStack_628[(uint)bVar9 * -2 + 0xf] = local_178[(uint)bVar9 * -2 + 0x15];
        afStack_628[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        local_68 = SQRT(local_5e8 * local_5e8 + local_5f0 * local_5f0 + local_5ec * local_5ec);
        if (local_78 < local_68) {
          local_30 = local_3c;
          local_78 = local_68;
          if (local_2c8 + 0x2f != afStack_628 + 0xe) {
            local_20c = local_5f0;
            local_208 = local_5ec;
            local_204 = local_5e8;
          }
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < local_40);
    }
    *(float *)this_ptr = *(float *)this_ptr + local_20c;
    *(float *)(this_ptr + 4) = *(float *)(this_ptr + 4) + local_208;
    *(float *)(this_ptr + 8) = *(float *)(this_ptr + 8) + local_204;
    core_dirmat_cpp_FUN_004495a0(this_ptr + 0x18,local_58 + local_30 * 0x34 + 0x28);
    local_308 = local_1ac;
    local_334[(uint)bVar9 * -2 + 0xc] = afStack_1a8[(uint)bVar9 * -2];
    local_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_74 = (local_300 * *(float *)(this_ptr + 0x54) +
               local_308 * *(float *)(this_ptr + 0x4c) + local_304 * *(float *)(this_ptr + 0x50)) *
               _DAT_005f1308;
    local_440 = local_308 * local_74;
    local_43c = local_304 * local_74;
    local_438 = local_300 * local_74;
    local_458 = local_308 * local_74;
    local_4cc[(uint)bVar9 * -2 + 0x1e] = local_4cc[(uint)bVar9 * -2 + 0x24];
    local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
         local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
    local_428 = local_458 - *(float *)(this_ptr + 0x4c);
    local_424 = local_454 - *(float *)(this_ptr + 0x50);
    local_420 = local_450 - *(float *)(this_ptr + 0x54);
    local_11c = local_428;
    local_178[(uint)bVar9 * -2 + 0x18] = local_4cc[(uint)bVar9 * -2 + 0x2a];
    local_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
         local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b];
    if (afStack_1fc + 0x11 != local_178 + 0x17) {
      local_1b8 = local_11c;
      local_1b4 = local_118;
      local_1b0 = local_114;
    }
    local_1b8 = local_1b8 * _DAT_005f130c * _DAT_005f1324;
    local_1b4 = local_1b4 * _DAT_005f130c * _DAT_005f1324;
    local_1b0 = local_1b0 * _DAT_005f130c * _DAT_005f1324;
    fVar1 = 1.0 / delta_time;
    local_260 = local_1b8 - *(float *)(this_ptr + 0x4c);
    local_25c = local_1b4 - *(float *)(this_ptr + 0x50);
    local_258 = local_1b0 - *(float *)(this_ptr + 0x54);
    local_248 = local_260;
    local_2c8[(uint)bVar9 * -2 + 0x21] = local_2c8[(uint)bVar9 * -2 + 0x1b];
    local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
         local_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
    pCVar4 = this_ptr + 0x94;
    local_3b0 = local_248 * *(float *)pCVar4;
    local_3ac = local_244 * *(float *)pCVar4;
    local_3a8 = local_240 * *(float *)pCVar4;
    local_f8 = local_248 * *(float *)pCVar4;
    local_f4[(uint)bVar9 * -2] = afStack_3d0[(uint)bVar9 * -2 + 9];
    local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    local_38c = local_f8 * fVar1;
    local_388 = local_f4[0] * fVar1;
    local_384 = local_f4[1] * fVar1;
    local_3f8 = local_f8 * fVar1;
    local_4cc[(uint)bVar9 * -2 + 0x36] = afStack_3d0[(uint)bVar9 * -2 + 0x12];
    local_4cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
         afStack_3d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
    *(float *)(this_ptr + 100) = *(float *)(this_ptr + 100) + local_3f8;
    *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x68) + local_3f4;
    *(float *)(this_ptr + 0x6c) = *(float *)(this_ptr + 0x6c) + local_3f0;
    *(uint *)(this_ptr + 0x78) = 0;
    *(uint *)(this_ptr + 0x74) = *(uint *)(this_ptr + 0x78);
    *(uint *)(this_ptr + 0x70) = *(uint *)(this_ptr + 0x74);
  }
  if ((0 < local_7c) &&
     (SQRT(*(float *)(this_ptr + 0x54) * *(float *)(this_ptr + 0x54) +
           *(float *)(this_ptr + 0x4c) * *(float *)(this_ptr + 0x4c) +
           *(float *)(this_ptr + 0x50) * *(float *)(this_ptr + 0x50)) < 1.0)) {
    iVar5 = 0;
    iVar6 = 0;
    pCVar4 = this_ptr;
    if (0 < *(int *)(this_ptr + 0xb0)) {
      do {
        if (ABS(*(float *)(pCVar4 + 0xc4) - *(float *)(this_ptr + 600)) < (float)_DAT_005f1338) {
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 0x34;
      } while (iVar5 < *(int *)(this_ptr + 0xb0));
    }
    if (*(int *)(this_ptr + 0xb0) / 2 <= iVar6) {
      *(uint *)(this_ptr + 0x254) = 0;
      return;
    }
  }
  return;
}
