// Name: core_lightsta.cpp_CLightStaff_process_FUN_004e2050
// Address: 004e2050
// Address Range: [[004e2050, 004e2b8d] [004e2cff, 004e2d4e] [004e2eb9, 004e2f51] [004e367a, 004e3daf]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

{
  byte *puVar1;
  CDemonSet *this_ptr_00;
  int iVar2;
  float fVar3;
  uint uVar4;
  CSkeleton *this_ptr_01;
  int iVar5;
  CLightStaff *pCVar6;
  float *pfVar7;
  CDeformableModelInstance *this_ptr_02;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_16f8 [967];
  SDamageInfo aSStack_7b8 [60];
  SDamageInfo aSStack_77c [4];
  uint uStack_778;
  uint uStack_754;
  CLightStaff *pCStack_748;
  uint uStack_744;
  float fStack_740;
  float fStack_73c;
  float fStack_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float afStack_728 [6];
  float fStack_710;
  float afStack_70c [5];
  float fStack_6f8;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float fStack_6e0;
  uint uStack_6d4;
  float afStack_6c8 [3];
  float fStack_6bc;
  float fStack_6b0;
  float fStack_698;
  float afStack_694 [2];
  CVector3f CStack_68c;
  float fStack_680;
  float afStack_67c [5];
  float fStack_668;
  float fStack_65c;
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float afStack_64c [5];
  CVector3f aCStack_638 [2];
  float fStack_620;
  float afStack_61c [5];
  CVector3f aCStack_608 [2];
  uint uStack_5f0;
  float afStack_5ec [5];
  float fStack_5d8;
  float afStack_5d4 [5];
  float fStack_5c0;
  float fStack_5bc;
  uint uStack_5b8;
  float fStack_5b4;
  float afStack_5b0 [5];
  float afStack_59c [3];
  uint uStack_590;
  float fStack_584;
  float afStack_578 [3];
  float fStack_56c;
  float afStack_560 [3];
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  uint uStack_544;
  float afStack_53c [3];
  float fStack_530;
  float afStack_524 [3];
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  uint uStack_504;
  float afStack_500 [3];
  float fStack_4f4;
  uint uStack_4f0;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  uint uStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float afStack_49c [4];
  uint uStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float afStack_470 [3];
  float fStack_464;
  float fStack_460;
  uint uStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float afStack_44c [3];
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float afStack_434 [3];
  float fStack_428;
  float fStack_424;
  uint uStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float afStack_410 [3];
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float afStack_3f8 [3];
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float afStack_3c8 [3];
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_38c;
  float afStack_388 [4];
  float fStack_378;
  float fStack_374;
  float fStack_368;
  float fStack_364;
  uint uStack_360;
  CVector3f CStack_35c;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  uint uStack_340;
  float fStack_338;
  float afStack_334 [2];
  CVector3f CStack_32c;
  float fStack_320;
  float afStack_31c [4];
  float fStack_30c;
  uint uStack_308;
  uint uStack_2fc;
  float fStack_2f0;
  float fStack_2e4;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  uint uStack_2c0;
  CVector3f CStack_2b4;
  CVector3f CStack_2a8;
  float fStack_29c;
  float afStack_298 [4];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_260;
  uint uStack_25c;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint uStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  uint uStack_1f4;
  float fStack_1e8;
  uint uStack_1e4;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_188;
  float afStack_184 [2];
  CVector3f CStack_17c;
  float fStack_170;
  float afStack_16c [5];
  float fStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [3];
  float afStack_134 [3];
  uint uStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_f8 [3];
  float fStack_ec;
  uint uStack_e8;
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [3];
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float afStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_74;
  uint uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar9 = 0;
  fStack_40 = 1.4013e-45;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
  if ((iVar2 == 0) || (*(int *)&this_ptr->field_0x58c <= *(int *)(iVar2 + 0x20b80))) {
    if (fStack_40 != 0.0) goto LAB_004e20c0;
  }
  else {
    fStack_40 = 0.0;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x5c4);
  *(uint *)&this_ptr->field_0x5c4 = 0;
LAB_004e20c0:
  core_weapon_cpp_CWeapon_process_FUN_0057b160((CWeapon *)this_ptr,delta_time);
  if ((iStack_38 != 0) &&
     ((*(int *)&this_ptr->field_0x2d4 == 2 ||
      (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash),
      iVar2 != 0)))) {
    fStack_4c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    fStack_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    fStack_3c = fStack_44;
    fStack_48 = fStack_4c;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
    pfVar7 = afStack_49c + 0x35;
    afStack_3c8[0] = (float)uStack_590;
    afStack_49c[(uint)bVar9 * -2 + 0x36] = afStack_5b0[(uint)bVar9 * -2 + 9];
    afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
         afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
    fStack_4c4 = fStack_584;
    afStack_5b0[(uint)bVar9 * -2 + 0x3c] = afStack_5b0[(uint)bVar9 * -2 + 0xc];
    afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
         afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    fStack_3d4 = fStack_4c4 + fStack_50;
    fStack_3d0 = fStack_4c0 + fStack_3c;
    fStack_3cc = fStack_4bc + fStack_48;
    aCStack_608[0].x = fStack_4c4 + fStack_50;
    *(float *)((int)aCStack_608 + (uint)bVar9 * -8 + 4) = afStack_49c[(uint)bVar9 * -2 + 0x33];
    *(float *)((int)aCStack_608 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34];
    if (aCStack_638 != aCStack_608) {
      aCStack_638[0].x = aCStack_608[0].x;
      aCStack_638[0].y = aCStack_608[0].y;
      aCStack_638[0].z = aCStack_608[0].z;
    }
    puVar1 = &this_ptr->field_0x5c8;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)puVar1,aCStack_638);
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)puVar1,fVar3);
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(20000.0,40000.0);
    fVar10 = (float10)fVar3;
    round();
    iVar2 = (int)ROUND(fVar10);
    *(int *)&this_ptr->field_0x604 = iVar2;
    this_ptr_00 = g_CDemonSetPtr;
    iVar2 = (iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0);
    iVar5 = iVar2 >> 0x1f;
    this_ptr->field_0x5e4 = (char)((int)(((iVar2 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2)
    ;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,(CDemonGlobe *)puVar1);
    if ((*(int *)&this_ptr->field_0x594 == 0) &&
       (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x5c4), iVar2 == 0)) {
      uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_loop.wav",
                         (CVector3f *)&this_ptr->field_0x20);
      *(uint *)&this_ptr->field_0x5c4 = uVar4;
    }
  }
  if (*(int *)&this_ptr->field_0x594 == 0) {
    if (iStack_38 != 0) {
      if ((*(int *)&this_ptr->field_0x2d4 != 2) &&
         (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash),
         iVar2 == 0)) {
        return;
      }
      *(float *)&this_ptr->field_0x5bc = *(float *)&this_ptr->field_0x5bc - delta_time;
      if (*(float *)&this_ptr->field_0x5bc <= 0.0) {
        *(uint *)&this_ptr->field_0x5bc = 0x3dcccccd;
        iVar2 = *(int *)&this_ptr->field_0x5c0 + 1;
        *(int *)&this_ptr->field_0x5c0 = iVar2;
        if (4 < iVar2) {
          *(uint *)&this_ptr->field_0x5c0 = 1;
        }
      }
      switch(*(uint *)&this_ptr->field_0x5c0) {
      case 0:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_5b0 + 0x14;
        afStack_560[0] = (float)uStack_2fc;
        afStack_5b0[(uint)bVar9 * -2 + 0x15] = afStack_31c[(uint)bVar9 * -2 + 9];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
             afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_bc = fStack_98;
        afStack_16c[(uint)bVar9 * -2 + 0x2d] = afStack_16c[(uint)bVar9 * -2 + 0x36];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
             afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
        if (&fStack_5c0 != afStack_16c + 0x2c) {
          fStack_5c0 = fStack_bc;
          fStack_5bc = fStack_b8;
          uStack_5b8 = uStack_b4;
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_5b0 + 0x23;
        fStack_110 = fStack_530;
        afStack_16c[(uint)bVar9 * -2 + 0x18] = afStack_5b0[(uint)bVar9 * -2 + 0x21];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
             afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
        fStack_8c = fStack_110 + _DAT_005c6a8a;
        fStack_88 = fStack_10c + _DAT_005c6a8e;
        fStack_84 = fStack_108 + _DAT_005c6a92;
        afStack_524[0] = fStack_110 + _DAT_005c6a8a;
        afStack_5b0[(uint)bVar9 * -2 + 0x24] = afStack_16c[(uint)bVar9 * -2 + 0x39];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
             afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_4f4 = (float)uStack_128;
        afStack_5b0[(uint)bVar9 * -2 + 0x30] = afStack_16c[(uint)bVar9 * -2 + 0x12];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
             afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        if (afStack_388 + 0x11 != afStack_5b0 + 0x2f) {
          fStack_344 = fStack_4f4;
          uStack_340 = uStack_4f0;
        }
        break;
      case 1:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_16c + 0x23;
        fStack_458 = fStack_620;
        afStack_49c[(uint)bVar9 * -2 + 0x12] = afStack_61c[(uint)bVar9 * -2];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
             afStack_61c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_3ec = fStack_458 + _DAT_005c6a8a;
        fStack_3e8 = fStack_454 + _DAT_005c6a8e;
        fStack_3e4 = fStack_450 + _DAT_005c6a92;
        afStack_e0[0] = fStack_458 + _DAT_005c6a8a;
        afStack_16c[(uint)bVar9 * -2 + 0x24] = afStack_49c[(uint)bVar9 * -2 + 0x2d];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
             afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_4dc = fStack_6f8;
        afStack_5b0[(uint)bVar9 * -2 + 0x36] = afStack_70c[(uint)bVar9 * -2 + 6];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        if (&fStack_5c0 != afStack_5b0 + 0x35) {
          fStack_5c0 = fStack_4dc;
          fStack_5bc = fStack_4d8;
          uStack_5b8 = uStack_4d4;
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_16c + 0x2f;
        fStack_11c = fStack_710;
        afStack_16c[(uint)bVar9 * -2 + 0x15] = afStack_70c[(uint)bVar9 * -2];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_5d8 = fStack_11c + _DAT_005c6a9e;
        afStack_5d4[0] = fStack_118 + _DAT_005c6aa2;
        afStack_5d4[1] = fStack_114 + _DAT_005c6a92;
        afStack_b0[0] = fStack_11c + _DAT_005c6a9e;
        afStack_16c[(uint)bVar9 * -2 + 0x30] = afStack_5d4[(uint)bVar9 * -2];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
             afStack_5d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_260 = (float)uStack_5f0;
        afStack_298[(uint)bVar9 * -2 + 0xf] = afStack_5ec[(uint)bVar9 * -2];
        afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_5ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (afStack_388 + 0x11 != afStack_298 + 0xe) {
          fStack_344 = fStack_260;
          uStack_340 = uStack_25c;
        }
        break;
      case 2:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_49c + 0xb;
        fStack_1ac = fStack_26c;
        afStack_298[(uint)bVar9 * -2 + 0x3c] = afStack_298[(uint)bVar9 * -2 + 0xc];
        afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
             afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        fStack_350 = fStack_1ac + _DAT_005c6a9e;
        fStack_34c = fStack_1a8 + _DAT_005c6aa2;
        fStack_348 = fStack_1a4 + _DAT_005c6a92;
        afStack_470[0] = fStack_1ac + _DAT_005c6a9e;
        afStack_49c[(uint)bVar9 * -2 + 0xc] = afStack_388[(uint)bVar9 * -2 + 0xf];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_464 = fStack_4a0;
        afStack_49c[(uint)bVar9 * -2 + 0xf] = afStack_49c[(uint)bVar9 * -2];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&fStack_5c0 != afStack_49c + 0xe) {
          fStack_5c0 = fStack_464;
          fStack_5bc = fStack_460;
          uStack_5b8 = uStack_45c;
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_49c + 0x1a;
        fStack_320 = fStack_6e0;
        afStack_31c[(uint)bVar9 * -2] = afStack_70c[(uint)bVar9 * -2 + 0xc];
        afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        fStack_6ec = fStack_320 + _DAT_005c6a96;
        fStack_6e8 = afStack_31c[0] + _DAT_005c6a9a;
        fStack_6e4 = afStack_31c[1] + _DAT_005c6a92;
        afStack_434[0] = fStack_320 + _DAT_005c6a96;
        afStack_49c[(uint)bVar9 * -2 + 0x1b] = afStack_70c[(uint)bVar9 * -2 + 9];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_1e8 = (float)uStack_6d4;
        afStack_298[(uint)bVar9 * -2 + 0x2d] = afStack_70c[(uint)bVar9 * -2 + 0xf];
        afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
        if (afStack_388 + 0x11 != afStack_298 + 0x2c) {
          fStack_344 = fStack_1e8;
          uStack_340 = uStack_1e4;
        }
        break;
      case 3:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_49c + 0x29;
        fStack_4b8 = fStack_6bc;
        afStack_5b0[(uint)bVar9 * -2 + 0x3f] = afStack_70c[(uint)bVar9 * -2 + 0x15];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        fStack_404 = fStack_4b8 + _DAT_005c6a96;
        fStack_400 = fStack_4b4 + _DAT_005c6a9a;
        fStack_3fc = fStack_4b0 + _DAT_005c6a92;
        afStack_3f8[0] = fStack_4b8 + _DAT_005c6a96;
        afStack_49c[(uint)bVar9 * -2 + 0x2a] = afStack_49c[(uint)bVar9 * -2 + 0x27];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
             afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_188 = fStack_6b0;
        afStack_184[(uint)bVar9 * -2] = afStack_70c[(uint)bVar9 * -2 + 0x18];
        afStack_184[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
        if (&fStack_5c0 != &fStack_188) {
          fStack_5c0 = fStack_188;
          fStack_5bc = afStack_184[0];
          uStack_5b8 = afStack_184[1];
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_16c + 0x1d;
        fStack_3bc = fStack_56c;
        afStack_49c[(uint)bVar9 * -2 + 0x39] = afStack_5b0[(uint)bVar9 * -2 + 0x12];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
             afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        fStack_248 = fStack_3bc + _DAT_005c6a7e;
        fStack_244 = fStack_3b8 + _DAT_005c6a82;
        fStack_240 = fStack_3b4 + _DAT_005c6a86;
        afStack_f8[0] = fStack_3bc + _DAT_005c6a7e;
        afStack_16c[(uint)bVar9 * -2 + 0x1e] = afStack_298[(uint)bVar9 * -2 + 0x15];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
             afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        afStack_16c[2] = (float)uStack_20c;
        afStack_16c[(uint)bVar9 * -2 + 3] = afStack_298[(uint)bVar9 * -2 + 0x24];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
        if (afStack_388 + 0x11 != afStack_16c + 2) {
          fStack_344 = afStack_16c[2];
          uStack_340 = afStack_16c[3];
        }
        break;
      case 4:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_16c + 0xb;
        fStack_47c = afStack_67c[2];
        afStack_49c[(uint)bVar9 * -2 + 9] = afStack_67c[(uint)bVar9 * -2 + 3];
        afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_67c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        fStack_440 = fStack_47c + _DAT_005c6a7e;
        fStack_43c = fStack_478 + _DAT_005c6a82;
        fStack_438 = fStack_474 + _DAT_005c6a86;
        afStack_140[0] = fStack_47c + _DAT_005c6a7e;
        afStack_16c[(uint)bVar9 * -2 + 0xc] = afStack_49c[(uint)bVar9 * -2 + 0x18];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_368 = fStack_668;
        afStack_388[(uint)bVar9 * -2 + 9] = afStack_67c[(uint)bVar9 * -2 + 6];
        afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_67c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        if (&fStack_5c0 != afStack_388 + 8) {
          fStack_5c0 = fStack_368;
          fStack_5bc = fStack_364;
          uStack_5b8 = uStack_360;
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
        pfVar7 = afStack_5b0 + 5;
        fStack_a4 = fStack_650;
        afStack_16c[(uint)bVar9 * -2 + 0x33] = afStack_64c[(uint)bVar9 * -2];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
             afStack_64c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_3e0 = fStack_a4 + _DAT_005c6a8a;
        fStack_3dc = fStack_a0 + _DAT_005c6a8e;
        fStack_3d8 = fStack_9c + _DAT_005c6a92;
        afStack_59c[0] = fStack_a4 + _DAT_005c6a8a;
        afStack_5b0[(uint)bVar9 * -2 + 6] = afStack_49c[(uint)bVar9 * -2 + 0x30];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
        fStack_ec = afStack_64c[2];
        afStack_16c[(uint)bVar9 * -2 + 0x21] = afStack_64c[(uint)bVar9 * -2 + 3];
        afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
             afStack_64c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if (afStack_388 + 0x11 != afStack_16c + 0x20) {
          fStack_344 = fStack_ec;
          uStack_340 = uStack_e8;
        }
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,&fStack_5c0,afStack_388 + 0x11,0,0x3e800000,0x3e800000,3,0x3c23d70a,
                 0xffff);
      iVar2 = *(int *)&this_ptr->field_0x5c0;
      if ((iVar2 == 1) || (iVar2 - 1U < 5)) {
        switch(iVar2) {
        case 2:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = &fStack_5b4;
          fStack_14c = fStack_158;
          afStack_16c[(uint)bVar9 * -2 + 9] = afStack_16c[(uint)bVar9 * -2 + 6];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          afStack_31c[2] = fStack_14c + _DAT_005c6a8a;
          afStack_31c[3] = fStack_148 + _DAT_005c6a8e;
          fStack_30c = fStack_144 + _DAT_005c6a92;
          fStack_5b4 = fStack_14c + _DAT_005c6a8a;
          afStack_5b0[(uint)bVar9 * -2] = afStack_31c[(uint)bVar9 * -2 + 3];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_230 = fStack_374;
          afStack_298[(uint)bVar9 * -2 + 0x1b] = afStack_388[(uint)bVar9 * -2 + 6];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
               afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          if (&fStack_5c0 != afStack_298 + 0x1a) {
            fStack_5c0 = fStack_230;
            fStack_5bc = fStack_22c;
            uStack_5b8 = uStack_228;
          }
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_5b0 + 0xe;
          fStack_224 = fStack_38c;
          afStack_298[(uint)bVar9 * -2 + 0x1e] = afStack_388[(uint)bVar9 * -2];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_518 = fStack_224 + _DAT_005c6a9e;
          fStack_514 = fStack_220 + _DAT_005c6aa2;
          fStack_510 = fStack_21c + _DAT_005c6a92;
          afStack_578[0] = fStack_224 + _DAT_005c6a9e;
          afStack_5b0[(uint)bVar9 * -2 + 0xf] = afStack_5b0[(uint)bVar9 * -2 + 0x27];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
               afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_548 = afStack_5b0[2];
          afStack_5b0[(uint)bVar9 * -2 + 0x1b] = afStack_5b0[(uint)bVar9 * -2 + 3];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
               afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          if (afStack_388 + 0x11 != afStack_5b0 + 0x1a) {
            fStack_344 = fStack_548;
            uStack_340 = uStack_544;
          }
          break;
        case 3:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_5b0 + 0x1d;
          fStack_1b8 = fStack_338;
          afStack_298[(uint)bVar9 * -2 + 0x39] = afStack_334[(uint)bVar9 * -2];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
               afStack_334[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_200 = fStack_1b8 + _DAT_005c6a9e;
          fStack_1fc = fStack_1b4 + _DAT_005c6aa2;
          fStack_1f8 = fStack_1b0 + _DAT_005c6a92;
          afStack_53c[0] = fStack_1b8 + _DAT_005c6a9e;
          afStack_5b0[(uint)bVar9 * -2 + 0x1e] = afStack_298[(uint)bVar9 * -2 + 0x27];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_50c = fStack_1a0;
          afStack_5b0[(uint)bVar9 * -2 + 0x2a] = afStack_298[(uint)bVar9 * -2 + 0x3f];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40];
          if (&fStack_5c0 != afStack_5b0 + 0x29) {
            fStack_5c0 = fStack_50c;
            fStack_5bc = fStack_508;
            uStack_5b8 = uStack_504;
          }
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_5b0 + 0x2c;
          fStack_68 = fStack_170;
          afStack_16c[(uint)bVar9 * -2 + 0x42] = afStack_16c[(uint)bVar9 * -2];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x43] =
               afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_23c = fStack_68 + _DAT_005c6a96;
          fStack_238 = fStack_64 + _DAT_005c6a9a;
          fStack_234 = fStack_60 + _DAT_005c6a92;
          afStack_500[0] = fStack_68 + _DAT_005c6a96;
          afStack_5b0[(uint)bVar9 * -2 + 0x2d] = afStack_298[(uint)bVar9 * -2 + 0x18];
          afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_74 = (float)uStack_308;
          afStack_16c[(uint)bVar9 * -2 + 0x3f] = afStack_31c[(uint)bVar9 * -2 + 6];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x40] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          if (afStack_388 + 0x11 != afStack_16c + 0x3e) {
            fStack_344 = fStack_74;
            uStack_340 = uStack_70;
          }
          break;
        case 4:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_16c + 0x29;
          fStack_1c4 = fStack_2f0;
          afStack_298[(uint)bVar9 * -2 + 0x36] = afStack_31c[(uint)bVar9 * -2 + 0xc];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
          fStack_41c = fStack_1c4 + _DAT_005c6a96;
          fStack_418 = fStack_1c0 + _DAT_005c6a9a;
          fStack_414 = fStack_1bc + _DAT_005c6a92;
          afStack_c8[0] = fStack_1c4 + _DAT_005c6a96;
          afStack_16c[(uint)bVar9 * -2 + 0x2a] = afStack_49c[(uint)bVar9 * -2 + 0x21];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
               afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          afStack_49c[2] = fStack_2e4;
          afStack_49c[(uint)bVar9 * -2 + 3] = afStack_31c[(uint)bVar9 * -2 + 0xf];
          afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          if (&fStack_5c0 != afStack_49c + 2) {
            fStack_5c0 = afStack_49c[2];
            fStack_5bc = afStack_49c[3];
            uStack_5b8 = uStack_48c;
          }
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_16c + 0xe;
          fStack_3b0 = fStack_2cc;
          afStack_49c[(uint)bVar9 * -2 + 0x3c] = afStack_31c[(uint)bVar9 * -2 + 0x15];
          afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
          fStack_254 = fStack_3b0 + _DAT_005c6a7e;
          fStack_250 = fStack_3ac + _DAT_005c6a82;
          fStack_24c = fStack_3a8 + _DAT_005c6a86;
          afStack_134[0] = fStack_3b0 + _DAT_005c6a7e;
          afStack_16c[(uint)bVar9 * -2 + 0xf] = afStack_298[(uint)bVar9 * -2 + 0x12];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_80 = (float)uStack_2c0;
          afStack_16c[(uint)bVar9 * -2 + 0x3c] = afStack_31c[(uint)bVar9 * -2 + 0x18];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
          if (afStack_388 + 0x11 != afStack_16c + 0x3b) {
            fStack_344 = fStack_80;
            uStack_340 = uStack_7c;
          }
          break;
        default:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_49c + 0x14;
          afStack_298[2] = fStack_104;
          afStack_298[(uint)bVar9 * -2 + 3] = afStack_16c[(uint)bVar9 * -2 + 0x1b];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
          fStack_284 = afStack_298[2] + _DAT_005c6a7e;
          fStack_280 = afStack_298[3] + _DAT_005c6a82;
          fStack_27c = fStack_288 + _DAT_005c6a86;
          afStack_44c[0] = afStack_298[2] + _DAT_005c6a7e;
          afStack_49c[(uint)bVar9 * -2 + 0x15] = afStack_298[(uint)bVar9 * -2 + 6];
          afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_428 = fStack_698;
          afStack_49c[(uint)bVar9 * -2 + 0x1e] = afStack_694[(uint)bVar9 * -2];
          afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_694[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (&fStack_5c0 != afStack_49c + 0x1d) {
            fStack_5c0 = fStack_428;
            fStack_5bc = fStack_424;
            uStack_5b8 = uStack_420;
          }
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
          pfVar7 = afStack_49c + 0x23;
          fStack_d4 = fStack_29c;
          afStack_16c[(uint)bVar9 * -2 + 0x27] = afStack_298[(uint)bVar9 * -2];
          afStack_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_2d8 = fStack_d4 + _DAT_005c6a8a;
          fStack_2d4 = fStack_d0 + _DAT_005c6a8e;
          fStack_2d0 = fStack_cc + _DAT_005c6a92;
          afStack_410[0] = fStack_d4 + _DAT_005c6a8a;
          afStack_49c[(uint)bVar9 * -2 + 0x24] = afStack_31c[(uint)bVar9 * -2 + 0x12];
          afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
               afStack_31c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
          fStack_1dc = afStack_70c[2];
          afStack_298[(uint)bVar9 * -2 + 0x30] = afStack_70c[(uint)bVar9 * -2 + 3];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
               afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          if (afStack_388 + 0x11 != afStack_298 + 0x2f) {
            fStack_344 = fStack_1dc;
            uStack_340 = uStack_1d8;
          }
        }
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,&fStack_5c0,afStack_388 + 0x11,0,0x3e800000,0x3e800000,3,0x3c23d70a,
                 0xffff);
      return;
    }
  }
  else {
    *(float *)&this_ptr->field_0x59c = *(float *)&this_ptr->field_0x59c - delta_time;
    if (*(float *)&this_ptr->field_0x59c <= 0.0) {
      if (2 < *(int *)&this_ptr->field_0x598) {
        *(uint *)&this_ptr->field_0x594 = 0;
        return;
      }
      pfStack_14 = (float *)&this_ptr->field_0x5a0;
      *(uint *)&this_ptr->field_0x59c = 0x3dcccccd;
      fStack_2c = 15.0;
      iStack_34 = 0;
      iStack_1c = 0;
      iStack_18 = 0;
      *(int *)&this_ptr->field_0x598 = *(int *)&this_ptr->field_0x598 + 1;
      for (; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)((int)g_CDemonSetPtr->actors + iStack_18),
                           g_CCharacterClassInfo.name_hash);
        iVar5 = (CTVBat *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,g_CTVBatClassInfo.name_hash);
        if (((iVar5 == 0) && (iVar2 != 0)) &&
           (iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar5 == 0)) {
          iVar5 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,g_CEnemyClassInfo.name_hash);
          if (iVar5 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_7b8);
            fStack_554 = *pfStack_14 - *(float *)(iVar2 + 0x20);
            fStack_550 = pfStack_14[1] - *(float *)(iVar2 + 0x24);
            fStack_54c = pfStack_14[2] - *(float *)(iVar2 + 0x28);
            fStack_488 = fStack_554;
            afStack_49c[(uint)bVar9 * -2 + 6] = afStack_5b0[(uint)bVar9 * -2 + 0x18];
            afStack_49c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                 afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
            if (afStack_5b0 + 0x41 != afStack_49c + 5) {
              fStack_4ac = fStack_488;
              fStack_4a8 = fStack_484;
              fStack_4a4 = fStack_480;
            }
            fStack_40 = SQRT(fStack_4a4 * fStack_4a4 +
                             fStack_4ac * fStack_4ac + fStack_4a8 * fStack_4a8);
            iVar5 = 0;
            pCVar6 = this_ptr;
            fStack_30 = fStack_40;
            if (0 < *(int *)&this_ptr->field_0x598) {
              do {
                if (iVar2 == *(int *)&pCVar6->field_0x5ac) goto LAB_004e25da;
                iVar5 = iVar5 + 1;
                pCVar6 = (CLightStaff *)&pCVar6->field_0x4;
              } while (iVar5 < *(int *)&this_ptr->field_0x598);
            }
            if (fStack_40 < fStack_2c) {
              iStack_34 = iVar2;
              fStack_2c = fStack_40;
            }
          }
        }
LAB_004e25da:
        iStack_18 = iStack_18 + 4;
      }
      if (iStack_34 == 0) {
        *(uint *)&this_ptr->field_0x594 = 0;
      }
      else {
        (**(code **)(*(int *)(iStack_34 + 0x154) + 0x1c))(iStack_34);
        pfVar7 = afStack_728;
        pfVar8 = &fStack_740;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_278 = fStack_740 + fStack_734;
        fStack_274 = fStack_73c + fStack_730;
        fStack_270 = fStack_738 + fStack_72c;
        fStack_4e8 = fStack_740 + fStack_734;
        afStack_5b0[(uint)bVar9 * -2 + 0x33] = afStack_298[(uint)bVar9 * -2 + 9];
        afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
             afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        fStack_4d0 = fStack_4e8 * _DAT_005c6aa2;
        fStack_4cc = fStack_4e4 * _DAT_005c6aa2;
        fStack_4c8 = fStack_4e0 * _DAT_005c6aa2;
        afStack_388[2] = fStack_4e8 * _DAT_005c6aa2;
        afStack_388[(uint)bVar9 * -2 + 3] = afStack_5b0[(uint)bVar9 * -2 + 0x39];
        afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_5b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
        if (afStack_67c + 8 != afStack_388 + 2) {
          fStack_65c = afStack_388[2];
          fStack_658 = afStack_388[3];
          fStack_654 = fStack_378;
        }
        fStack_1d0 = *(float *)(iStack_34 + 0x20) + fStack_65c;
        fStack_1cc = *(float *)(iStack_34 + 0x24) + fStack_658;
        fStack_1c8 = *(float *)(iStack_34 + 0x28) + fStack_654;
        CStack_35c.x = fStack_1d0;
        afStack_388[(uint)bVar9 * -2 + 0xc] = afStack_298[(uint)bVar9 * -2 + 0x33];
        afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34];
        if (&CStack_68c != (CVector3f *)(afStack_388 + 0xb)) {
          CStack_68c.x = CStack_35c.x;
          CStack_68c.y = CStack_35c.y;
          CStack_68c.z = CStack_35c.z;
        }
        CStack_68c.y = fStack_658 * _DAT_005c6aa2 + CStack_68c.y;
        this_ptr_02 = (CDeformableModelInstance *)(iStack_34 + 0x158);
        if (((*(char *)(iStack_34 + 0x24a8) != '\0') &&
            (this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                     (this_ptr_02), this_ptr_01 != (CSkeleton *)0x0)) &&
           (iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr_01,"Bip01 Head",1), -1 < iVar2)) {
          core_skeleton_cpp_FUN_0054dcc0(this_ptr_02,iVar2);
          iVar2 = iStack_34;
          pfVar7 = afStack_70c + 0x11;
          afStack_6c8[0] = (float)uStack_1f4;
          afStack_70c[(uint)bVar9 * -2 + 0x12] = afStack_298[(uint)bVar9 * -2 + 0x2a];
          afStack_70c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
               afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b];
          core_actor_cpp_FUN_00408b80(iVar2,pfVar7);
          fStack_218 = fStack_680;
          afStack_298[(uint)bVar9 * -2 + 0x21] = afStack_67c[(uint)bVar9 * -2];
          afStack_298[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
               afStack_67c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (afStack_334 + 2 != afStack_298 + 0x20) {
            CStack_32c.x = fStack_218;
            CStack_32c.y = fStack_214;
            CStack_32c.z = fStack_210;
          }
          if ((CStack_32c.y < CStack_68c.y) && (&CStack_68c != (CVector3f *)(afStack_334 + 2))) {
            CStack_68c.x = CStack_32c.x;
            CStack_68c.y = CStack_32c.y;
            CStack_68c.z = CStack_32c.z;
          }
        }
        puVar1 = &this_ptr->field_0x5a0;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,puVar1,&CStack_68c,0,0x3f400000,0x3f400000,3,0x3e800000,0xffff);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_arc.wav",
                   (CVector3f *)puVar1);
        *(uint *)(iStack_34 + 0x3254) = 0x3f800000;
        *(uint *)(iStack_34 + 0x3258) = 1;
        *(int *)(&this_ptr->field_0x5ac + *(int *)&this_ptr->field_0x598 * 4) = iStack_34;
        if ((CVector3f *)puVar1 != &CStack_68c) {
          *(float *)puVar1 = CStack_68c.x;
          *(float *)&this_ptr->field_0x5a4 = CStack_68c.y;
          *(float *)&this_ptr->field_0x5a8 = CStack_68c.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_77c);
        uStack_778 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
        uStack_754 = *(uint *)&this_ptr->field_0x56c;
        pCStack_748 = this_ptr;
        uStack_744 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
        (**(code **)(*(int *)(iStack_34 + 0x154) + 0x108))(iStack_34,aSStack_77c);
        if (&CStack_2b4 != &CStack_68c) {
          CStack_2b4.x = CStack_68c.x;
          CStack_2b4.y = CStack_68c.y;
          CStack_2b4.z = CStack_68c.z;
        }
        iVar2 = 0;
        do {
          fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_4c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          CStack_17c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_28 = fStack_4c;
          fStack_20 = fStack_44;
          CStack_17c.y = fStack_4c;
          CStack_17c.z = fStack_44;
          if (&CStack_2a8 != (CVector3f *)(afStack_184 + 2)) {
            CStack_2a8.y = fStack_4c;
            CStack_2a8.z = fStack_44;
            CStack_2a8.x = CStack_17c.x;
          }
          iVar2 = iVar2 + 1;
          fStack_24 = CStack_17c.x;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_2b4,&CStack_2a8,0x20000,0x10000,1,0xffff);
        } while (iVar2 < 0x10);
      }
    }
  }
  return;
}
