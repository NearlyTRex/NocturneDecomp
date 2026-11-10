// Name: core_carved.cpp_CCarved_process_FUN_00425da0
// Address: 00425da0
// Address Range: [[00425da0, 0042777d]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_process_FUN_00425da0(CCarved *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_carved_cpp_CCarved_process_FUN_00425da0(CCarved *this_ptr,float delta_time)

{
  byte *puVar1;
  char cVar2;
  CEventList *this_ptr_00;
  int iVar3;
  uint uVar4;
  CCarved *pCVar5;
  int iVar6;
  CPathMap *pCVar7;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  char *pcVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float afStackY_1354 [923];
  CGore *pCVar17;
  CVector3f *pCVar18;
  CVector3f *direction;
  CMotionController *this_ptr_01;
  EBloodType EVar19;
  float fVar20;
  float fVar21;
  SDamageInfo aSStack_4d0 [4];
  uint uStack_4cc;
  CCarved *pCStack_49c;
  CCarved *pCStack_498;
  SDamageInfo aSStack_494 [4];
  float fStack_490;
  CCarved *pCStack_460;
  CCarved *pCStack_45c;
  char acStack_458 [32];
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float afStack_39c [3];
  float afStack_390 [6];
  CVector3f CStack_378;
  uint uStack_36c;
  float afStack_368 [4];
  float fStack_358;
  float fStack_354;
  CVector3f CStack_348;
  uint uStack_33c;
  uint uStack_338;
  float fStack_334;
  float fStack_330;
  float afStack_32c [5];
  CVector3f CStack_318;
  CVector3f CStack_30c;
  float fStack_300;
  float afStack_2fc [5];
  float afStack_2e8 [4];
  float afStack_2d8 [2];
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [4];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float afStack_294 [3];
  float fStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_264;
  float fStack_260;
  uint uStack_258;
  CVector3f CStack_24c;
  uint uStack_240;
  float afStack_23c [5];
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  float afStack_1e0 [3];
  float fStack_1d4;
  float fStack_1cc;
  uint uStack_1c8;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [5];
  float afStack_180 [3];
  float fStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float afStack_f8 [5];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [5];
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  uint uStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  CMotionController *pCStack_24;
  float *pfStack_20;
  byte *puStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0cc);
    return;
  }
  if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0b8 * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr), iVar3 == 0)) {
    iVar6 = 1;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar3 + 0x13,iVar6);
  }
  iStack_64 = *(int *)&this_ptr->field_0x26fc;
  if (iStack_64 != 0) {
    fStack_14 = *(float *)(iStack_64 + 0x154);
    core_skeleton_cpp_FUN_0054dcc0(&this_ptr->field_0x158,0);
    pfVar12 = afStack_1f4 + 0xe;
    afStack_1bc[0] = afStack_194[2];
    afStack_1f4[(uint)bVar15 * -2 + 0xf] = afStack_194[(uint)bVar15 * -2 + 3];
    afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
         afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_64,this_ptr,pfVar12);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)&this_ptr->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&this_ptr->field_0xd0c0) {
    *(float *)&this_ptr->field_0xd0c0 = *(float *)&this_ptr->field_0xd0c0 - delta_time;
  }
  pfStack_28 = afStack_39c;
  fStack_68 = delta_time * *(float *)&this_ptr->field_0xcdcc * *(float *)&this_ptr->field_0xd0d8;
  pfStack_20 = afStack_3e4;
  pCStack_24 = (CMotionController *)&this_ptr->field_0x158;
LAB_00425e3e:
  if (0.0 < fStack_68) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_24,&fStack_68);
    if (uVar4 < 0xb) {
      if (uVar4 < 5) {
        if (uVar4 == 2) {
          iVar3 = *(int *)&this_ptr->field_0xd064;
          if (iVar3 != 0) {
            *(uint *)&this_ptr->field_0xd064 = 0;
            iVar6 = core_carved_cpp_FUN_00428520(this_ptr,*(uint *)&this_ptr->field_0xd068);
            if (-1 < iVar6) {
              core_charactr_cpp_FUN_004319d0(this_ptr,iVar6,iVar3,0x3e4ccccd,0);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,iVar3,iVar6);
            }
          }
        }
        else {
LAB_00425e7b:
          core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
        }
        goto LAB_00425e3e;
      }
      if (uVar4 < 6) {
        iStack_18 = 1;
        if (*(int *)&this_ptr->field_0xcde4 != 0) {
          fStack_334 = 0x3FA66666;
          uStack_33c = 0;
          uStack_338 = 0;
          core_actor_cpp_FUN_00408b80(this_ptr,&uStack_33c);
          fStack_2a0 = fStack_288;
          afStack_2c0[(uint)bVar15 * -2 + 9] = afStack_2c0[(uint)bVar15 * -2 + 0xf];
          afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          afStack_368[2] = fStack_2a0 - *(float *)(iVar3 + 0x20);
          afStack_368[3] = fStack_29c - *(float *)(iVar3 + 0x24);
          fStack_358 = fStack_298 - *(float *)(iVar3 + 0x28);
          fStack_d8 = afStack_368[2];
          afStack_f8[(uint)bVar15 * -2 + 9] = afStack_368[(uint)bVar15 * -2 + 3];
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          uStack_d4 = 0;
          if (SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_108[0] = 0.0;
              afStack_108[2] = 0.0;
              afStack_108[1] = 4.0;
              core_actor_cpp_FUN_00408b80(this_ptr,afStack_134 + 0xb);
              CStack_c0.x = fStack_174;
              *(float *)((int)&CStack_c0 + (uint)bVar15 * -8 + 4) =
                   afStack_194[(uint)bVar15 * -2 + 9];
              *(float *)((int)&CStack_c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
              puVar10 = (uint *)(*(int *)&this_ptr->field_0xcde4 + 0x24 + (uint)bVar15 * -8);
              CStack_144.x = *(float *)(*(int *)&this_ptr->field_0xcde4 + 0x20);
              *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + 4) = *puVar10;
              *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   puVar10[(uint)bVar15 * -2 + 1];
              CStack_144.y = CStack_c0.y;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xcde4);
              iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_c0,&CStack_144);
              if (iVar3 != 0) {
                iStack_18 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((iStack_18 == 0) ||
               (iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xec))
                                  (*(int *)&this_ptr->field_0xcde4,this_ptr,0), iVar3 != 0)) {
              if (iStack_18 == 0) {
                core_carved_cpp_FUN_00429090(this_ptr);
              }
              goto LAB_00425e3e;
            }
          }
        }
        core_carved_cpp_FUN_00429090(this_ptr);
        goto LAB_00425e3e;
      }
      if (uVar4 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
        goto LAB_00425e3e;
      }
      if (*(int *)&this_ptr->field_0xcde4 != 0) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_24,*(uint *)&this_ptr->field_0xd078);
        puVar10 = &uStack_36c;
        uStack_36c = afStack_32c[2];
        afStack_368[(uint)bVar15 * -2] = afStack_32c[(uint)bVar15 * -2 + 3];
        afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_32c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
        CStack_30c.x = fStack_354;
        *(float *)((int)&CStack_30c + (uint)bVar15 * -8 + 4) = afStack_368[(uint)bVar15 * -2 + 6];
        *(float *)((int)&CStack_30c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        if (*(int *)&this_ptr->field_0xd0b4 < 0) {
          fVar20 = CStack_30c.x - *(float *)(*(int *)&this_ptr->field_0xcde4 + 0x20);
          fVar21 = CStack_30c.z - *(float *)(*(int *)&this_ptr->field_0xcde4 + 0x28);
          if ((float)_DAT_005b7c87 < SQRT(fVar21 * fVar21 + fVar20 * fVar20)) {
            core_carved_cpp_FUN_00429090(this_ptr);
            goto LAB_00425e3e;
          }
        }
        else {
          pCVar5 = (CCarved *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&this_ptr->field_0xcde4);
          if (pCVar5 != this_ptr) {
            core_carved_cpp_FUN_00429090(this_ptr);
            goto LAB_00425e3e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_494);
        fStack_490 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,25.0);
        pCStack_460 = this_ptr;
        pCStack_45c = this_ptr;
        fStack_14 = fStack_490;
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0x108))
                  (*(int *)&this_ptr->field_0xcde4,aSStack_494);
        dStack_7c = (double)fStack_490;
        if (0.0 < dStack_7c) {
          fVar16 = (float10)fStack_490 * (float10)_DAT_005b7cbf * (float10)_DAT_005b7cc7;
          EVar19 = BLOOD_TYPE_RED;
          round();
          iStack_6c = (int)ROUND(fVar16);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_30c,(CVector3f *)0x0,iStack_6c,EVar19);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0x10c))
                          (*(int *)&this_ptr->field_0xcde4);
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf0))
                    (*(int *)&this_ptr->field_0xcde4);
          core_carved_cpp_FUN_00429090(this_ptr);
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"ghoul-eat-?.wav");
        goto LAB_00425e3e;
      }
      core_carved_cpp_FUN_00429090(this_ptr);
    }
    else if (uVar4 < 0xc) {
      iVar3 = core_carved_cpp_FUN_00428520(this_ptr,2);
      if (iVar3 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1e6;
        core_main_c_FUN_004e4330(&DAT_005b7b01);
      }
      if (*(int *)(&this_ptr->field_0x25b0 + iVar3 * 0x78) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,
                   *(int *)(&this_ptr->field_0x25b0 + iVar3 * 0x78));
        afStack_2e8[0] = 0.0;
        afStack_2e8[1] = 6.0;
        afStack_2e8[2] = 17.0;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iVar3,afStack_2fc + 5);
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xd) {
      iStack_30 = core_carved_cpp_FUN_00428520(this_ptr,3);
      if (iStack_30 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1fd;
        core_main_c_FUN_004e4330(&DAT_005b7b3c);
      }
      puStack_1c = &this_ptr->field_0x0 + iStack_30 * 0x78;
      if (*(int *)(puStack_1c + 0x25b0) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,*(int *)(puStack_1c + 0x25b0));
        fStack_1a4 = 0.0;
        fStack_1a0 = 0.0;
        fStack_19c = 1.0;
        if (*(int *)&this_ptr->field_0xcde4 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_1c + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(puStack_1c + 0x25b0));
          pfVar12 = afStack_3d8;
          pfVar14 = &fStack_3a8;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_15c = fStack_3a8 + *pfStack_28;
          fStack_158 = fStack_3a4 + pfStack_28[1];
          fStack_154 = fStack_3a0 + pfStack_28[2];
          fStack_cc = fStack_3a8 + *pfStack_28;
          afStack_f8[(uint)bVar15 * -2 + 0xc] = afStack_194[(uint)bVar15 * -2 + 0xf];
          puVar1 = puStack_1c;
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
          pfVar12 = afStack_1f4 + 5;
          fStack_150 = fStack_cc * _DAT_005b7cb7;
          fStack_14c = fStack_c8 * _DAT_005b7cb7;
          fStack_148 = fStack_c4 * _DAT_005b7cb7;
          afStack_1e0[0] = fStack_cc * _DAT_005b7cb7;
          afStack_1f4[(uint)bVar15 * -2 + 6] = afStack_194[(uint)bVar15 * -2 + 0x12];
          afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(*(uint *)(puVar1 + 0x25b0),pfVar12);
          afStack_108[3] = afStack_f8[2];
          afStack_f8[(uint)bVar15 * -2] = afStack_f8[(uint)bVar15 * -2 + 3];
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0x1c))
                    (*(int *)&this_ptr->field_0xcde4);
          pfVar12 = afStack_390;
          pfVar14 = &fStack_3f0;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_90 = fStack_3f0 + *pfStack_20;
          fStack_8c = fStack_3ec + pfStack_20[1];
          fStack_88 = fStack_3e8 + pfStack_20[2];
          afStack_2e8[3] = fStack_3f0 + *pfStack_20;
          afStack_2d8[(uint)bVar15 * -2] = afStack_b0[(uint)bVar15 * -2 + 9];
          afStack_2d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          fStack_21c = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_218[0] = afStack_2d8[0] * _DAT_005b7cb7;
          afStack_218[1] = afStack_2d8[1] * _DAT_005b7cb7;
          afStack_294[0] = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_2c0[(uint)bVar15 * -2 + 0xc] = afStack_218[(uint)bVar15 * -2];
          afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_actor_cpp_FUN_00408b80(*(uint *)&this_ptr->field_0xcde4,afStack_2c0 + 0xb);
          fStack_138 = fStack_300;
          afStack_134[(uint)bVar15 * -2] = afStack_2fc[(uint)bVar15 * -2];
          afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_2fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          afStack_2c0[2] = fStack_138 - afStack_108[3];
          afStack_2c0[3] = afStack_134[0] - afStack_f8[0];
          fStack_2b0 = afStack_134[1] - afStack_f8[1];
          fStack_27c = fStack_138 - afStack_108[3];
          afStack_2c0[(uint)bVar15 * -2 + 0x12] = afStack_2c0[(uint)bVar15 * -2 + 3];
          afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
               afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_2c = SQRT(fStack_274 * fStack_274 +
                           fStack_27c * fStack_27c + fStack_278 * fStack_278);
          if (0.0 < fStack_2c) {
            core_actor_cpp_FUN_00408b40(this_ptr,afStack_2c0 + 0x11);
            afStack_218[2] = afStack_2fc[2];
            afStack_218[(uint)bVar15 * -2 + 3] = afStack_2fc[(uint)bVar15 * -2 + 3];
            afStack_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_2fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            fVar20 = 1.0 / fStack_2c;
            afStack_1f4[2] = afStack_218[2] * fVar20;
            afStack_1f4[3] = afStack_218[3] * fVar20;
            fStack_1e4 = fStack_208 * fVar20;
            fStack_120 = afStack_218[2] * fVar20;
            afStack_134[(uint)bVar15 * -2 + 6] = afStack_1f4[(uint)bVar15 * -2 + 3];
            afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if (afStack_1f4 + 0x14 != afStack_134 + 5) {
              fStack_1a4 = fStack_120;
              fStack_1a0 = fStack_11c;
              fStack_19c = fStack_118;
            }
          }
        }
        fStack_1a4 = fStack_1a4 * _DAT_005b7cbb;
        fStack_19c = fStack_19c * _DAT_005b7cbb;
        fStack_1a0 = fStack_1a0 * _DAT_005b7cbb + _DAT_005b7ccf;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iStack_30,afStack_1f4 + 0x14)
        ;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xe) {
      if (*(CDoor **)&this_ptr->field_0xd06c != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(*(CDoor **)&this_ptr->field_0xd06c,0.3);
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0xd06c + 0x154) + 0x2c))
                  (*(int *)&this_ptr->field_0xd06c,"zombie-bang-door?.wav");
        *(uint *)&this_ptr->field_0xd06c = 0;
      }
    }
    else {
      if (uVar4 < 0x65) goto LAB_00425e7b;
      if (uVar4 < 0x66) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"fall-?.wav");
      }
      else if (uVar4 == 0x29a) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_24,*(uint *)&this_ptr->field_0xd078);
        pfVar12 = afStack_b0 + 2;
        afStack_b0[2] = (float)uStack_9c;
        afStack_b0[(uint)bVar15 * -2 + 3] = afStack_b0[(uint)bVar15 * -2 + 6];
        afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
        EVar19 = BLOOD_TYPE_RED;
        iVar3 = 3;
        direction = (CVector3f *)0x0;
        pCVar18 = &CStack_318;
        CStack_318.x = fStack_270;
        *(float *)((int)&CStack_318 + (uint)bVar15 * -8 + 4) = afStack_2c0[(uint)bVar15 * -2 + 0x15]
        ;
        pCVar17 = g_CGorePtr;
        *(float *)((int)&CStack_318 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0(pCVar17,pCVar18,direction,iVar3,EVar19);
        iVar3 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
        if (iVar3 == 0) {
          pcVar11 = "ghoul-dig-?.wav";
        }
        else {
          pcVar11 = "ghoul-eat-?.wav";
        }
        pcVar13 = acStack_458;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,acStack_458);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
      }
    }
    goto LAB_00425e3e;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
  if ((((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0b0 * 4) == 0) &&
       (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0a8 * 4) == 0)) ||
      (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0bc * 4) == 0)) &&
     ((0.0 <= *(float *)&this_ptr->field_0xd0c4 &&
      (fVar20 = *(float *)&this_ptr->field_0xd0c4 + delta_time,
      *(float *)&this_ptr->field_0xd0c4 = fVar20, (float)_DAT_005b7c7f <= fVar20)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_4d0);
    uStack_4cc = 0x461c3f9a;
    pCStack_49c = this_ptr;
    pCStack_498 = this_ptr;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x108))(this_ptr,aSStack_4d0);
    *(uint *)&this_ptr->field_0xd0c4 = 0xbf800000;
  }
  puVar1 = &this_ptr->field_0x158;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070((CMotionController *)puVar1);
  iStack_48 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    uVar4 = *(uint *)&this_ptr->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 != 1) {
LAB_00426d3d:
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar6);
        goto LAB_004269b6;
      }
    }
    else if (2 < uVar4) {
      if (uVar4 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,0,1);
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto LAB_004269b6;
      }
      goto LAB_00426d3d;
    }
    core_carved_cpp_FUN_00429090(this_ptr);
    goto LAB_004269b6;
  }
  fStack_34 = -1.0;
  fStack_40 = 0.3;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  switch(*(uint *)(pSVar9 + 0x24)) {
  case 0:
  case 1:
  case 2:
    iVar3 = core_actor_cpp_randomChance_FUN_0040cf40(delta_time * (float)_DAT_005b7caf);
    if (iVar3 == 0) {
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
      if (iVar3 != 0) {
        core_carved_cpp_FUN_00429090(this_ptr);
      }
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
      if (*(int *)&this_ptr->field_0xcde4 == 0) {
        iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
        if (iVar3 == 0) break;
        *(uint *)&g_CGamePtr->field_0x244 = 1;
        *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      if (*(int *)&this_ptr->field_0xcde4 != 0) {
        core_carved_cpp_FUN_00429090(this_ptr);
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0cc);
        if (iVar3 == 0) {
          if (*(int *)&this_ptr->field_0xd074 == 0) {
            uVar8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"demn_chase_???.wav");
            *(uint *)&this_ptr->field_0xd0cc = uVar8;
          }
          else {
            uVar8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"demn_chase_???.wav");
            *(uint *)&this_ptr->field_0xd0cc = uVar8;
          }
        }
      }
    }
    else {
      iVar6 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar6);
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    iVar3 = *(int *)&this_ptr->field_0xcde4;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
    if ((*(int *)&this_ptr->field_0xcde4 == 0) &&
       (iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
       iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
      *(uint *)&g_CGamePtr->field_0x244 = 1;
      *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    }
    if (*(int *)&this_ptr->field_0xcde4 == 0) {
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
      if (iVar3 == 0) {
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar6);
      }
    }
    else if (iVar3 == 0) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0cc);
      if (iVar3 == 0) {
        if (*(int *)&this_ptr->field_0xd074 == 0) {
          pcVar11 = "demn_chase_???.wav";
        }
        else {
          pcVar11 = "demn_chase_???.wav";
        }
        uVar8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar11);
        *(uint *)&this_ptr->field_0xd0cc = uVar8;
      }
      core_carved_cpp_FUN_00429090(this_ptr);
    }
    else {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0x32);
      if (iVar3 == 1) {
        core_carved_cpp_FUN_00429090(this_ptr);
      }
      uStack_38 = (uint)(*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0a8 * 4) !=
                        0);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0b0 * 4) != 0) {
        uStack_38 = uStack_38 + 1;
      }
      iVar3 = core_carved_cpp_FUN_00427bc0(this_ptr,delta_time);
      if (iVar3 == 0) {
        fStack_58 = 0x3FA66666;
        iStack_50 = core_carved_cpp_FUN_00428520(this_ptr,1);
        if (((-1 < iStack_50) &&
            (iVar3 = *(int *)(&this_ptr->field_0x25b0 + iStack_50 * 0x78), iVar3 != 0)) &&
           (*(int *)&this_ptr->field_0xd068 == 1)) {
          fStack_54 = 1.0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
            pfVar12 = afStack_438;
            pfVar14 = &fStack_408;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_204);
            CStack_204.x = fStack_3fc - fStack_408;
            CStack_204.y = fStack_3f8 - fStack_404;
            CStack_204.z = fStack_3f4 - fStack_400;
            fStack_2ac = fStack_3fc - fStack_408;
            afStack_2c0[(uint)bVar15 * -2 + 6] =
                 *(float *)((int)&CStack_204 + (uint)bVar15 * -8 + 4);
            afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 *(float *)((int)&CStack_204 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            fStack_54 = fStack_2a4 * (float)_DAT_005b7c8f + 1.0;
          }
          fStack_58 = fStack_54;
        }
        fVar21 = 0.6981317;
        fVar20 = 0.9;
        CStack_228.x = 0.0;
        CStack_228.z = fStack_58;
        pCVar18 = &CStack_228;
        CStack_228.y = 0.0;
        pCVar7 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&this_ptr->field_0xcde4);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),pCVar7,pCVar18,
                           fVar20,fVar21);
        pCStack_3c = (CMotionController *)&this_ptr->field_0x158;
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          iVar6 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,iVar3,iVar6);
        }
        else if (iVar3 < 1) {
          iStack_4c = core_carved_cpp_FUN_00428520(this_ptr,*(uint *)&this_ptr->field_0xd068);
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          fStack_1b0 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_1ac = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_1a8 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
          fStack_114 = fStack_1b0;
          afStack_134[(uint)bVar15 * -2 + 9] = afStack_1f4[(uint)bVar15 * -2 + 0x12];
          afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          if (SQRT(fStack_10c * fStack_10c + fStack_114 * fStack_114 + fStack_110 * fStack_110) <
              (float)_DAT_005b7c9f) {
            core_actor_cpp_FUN_00408bf0(this_ptr,iVar3 + 0x20);
            afStack_180[0] = (float)uStack_258;
            afStack_194[(uint)bVar15 * -2 + 6] = afStack_2c0[(uint)bVar15 * -2 + 0x1b];
            afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_194 + 5);
            uStack_264 = uStack_1c8;
            afStack_2c0[(uint)bVar15 * -2 + 0x18] = afStack_1f4[(uint)bVar15 * -2 + 0xc];
            afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
                 afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
            if ((((ABS(fStack_260) < (float)_DAT_005b7ca7) && (-1 < iStack_4c)) &&
                ((uVar4 = *(uint *)&this_ptr->field_0xd068, 1 < uVar4 &&
                 ((2 < uVar4 && (uVar4 == 3)))))) &&
               (*(int *)(&this_ptr->field_0x25b0 + iStack_4c * 0x78) != 0)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s tossing\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_38) && (*(float *)&this_ptr->field_0xcde0 <= 0.0)) &&
                (iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf4))
                                   (*(int *)&this_ptr->field_0xcde4), iVar3 == 0)) {
          iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0x10c))
                            (*(int *)&this_ptr->field_0xcde4);
          if (iVar3 == 0) {
            if ((iStack_50 < 0) || (*(int *)(&this_ptr->field_0x25b0 + iStack_50 * 0x78) == 0)) {
              iVar3 = 0xc;
              this_ptr_01 = (CMotionController *)&this_ptr->field_0x158;
            }
            else {
              iVar3 = 0xb;
              this_ptr_01 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr_01,iVar3,1);
          }
          *(uint *)&this_ptr->field_0xcde0 = 0x3f4ccccd;
        }
      }
    }
    break;
  case 0xb:
    if (*(int *)&this_ptr->field_0xcde4 == 0) goto LAB_00427596;
    iVar3 = core_carved_cpp_FUN_00428520(this_ptr,1);
    if ((((iVar3 < 0) ||
         (iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0x10c))
                            (*(int *)&this_ptr->field_0xcde4), 0 < iVar6)) ||
        (*(int *)(&this_ptr->field_0x25b0 + iVar3 * 0x78) == 0)) ||
       (iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf4))
                          (*(int *)&this_ptr->field_0xcde4), iVar6 != 0)) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n",this_ptr);
      core_carved_cpp_FUN_00429090(this_ptr);
    }
    else {
      iVar3 = *(int *)(&this_ptr->field_0x25b0 + iVar3 * 0x78);
      fStack_44 = 1.0;
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
        pfVar12 = afStack_3c0;
        pfVar14 = &fStack_420;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar14 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
          pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_348);
        CStack_348.x = fStack_414 - fStack_420;
        CStack_348.y = fStack_410 - fStack_41c;
        CStack_348.z = fStack_40c - fStack_418;
        fStack_1d4 = fStack_414 - fStack_420;
        afStack_1f4[(uint)bVar15 * -2 + 9] = *(float *)((int)&CStack_348 + (uint)bVar15 * -8 + 4);
        afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
             *(float *)((int)&CStack_348 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        fStack_44 = fStack_1cc * (float)_DAT_005b7c8f + 1.0;
      }
      fStack_34 = fStack_44;
      fStack_5c = core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
      dStack_84 = (double)fStack_5c;
      fStack_14 = fStack_5c;
      if ((1.0 <= dStack_84) && (dStack_84 <= _DAT_005b7c97)) {
        iStack_48 = 1;
      }
    }
    break;
  case 0xc:
    iVar3 = *(int *)&this_ptr->field_0xcde4;
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 < 1))
    {
      pCVar5 = (CCarved *)
               (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf4))
                         (*(int *)&this_ptr->field_0xcde4);
      if (pCVar5 == (CCarved *)0x0) {
        fStack_40 = 3.0;
        fStack_34 = 0x3FA66666;
      }
      else if (pCVar5 != this_ptr) {
        core_carved_cpp_FUN_00429090(this_ptr);
      }
      iVar3 = *(int *)&this_ptr->field_0xcde4;
      fStack_330 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
      afStack_32c[0] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
      afStack_32c[1] = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_2c4 = fStack_330;
      afStack_2c0[(uint)bVar15 * -2] = afStack_32c[(uint)bVar15 * -2];
      afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_32c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      if (SQRT(afStack_2c0[1] * afStack_2c0[1] +
               fStack_2c4 * fStack_2c4 + afStack_2c0[0] * afStack_2c0[0]) <= (float)_DAT_005b7c87)
      break;
    }
LAB_00427596:
    core_carved_cpp_FUN_00429090(this_ptr);
    break;
  case 0x16:
    if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_0054dbd0(puVar1,0);
      puVar10 = &uStack_240;
      uStack_240 = afStack_23c[2];
      afStack_23c[(uint)bVar15 * -2] = afStack_23c[(uint)bVar15 * -2 + 3];
      afStack_23c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_23c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
      EVar19 = BLOOD_TYPE_RED;
      pCVar18 = &CStack_24c;
      CStack_24c.x = afStack_134[2];
      *(float *)((int)&CStack_24c + (uint)bVar15 * -8 + 4) = afStack_134[(uint)bVar15 * -2 + 3];
      pCVar17 = g_CGorePtr;
      *(float *)((int)&CStack_24c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_gore_cpp_CGore_createBloodPool_FUN_004cec40(pCVar17,pCVar18,EVar19);
      this_ptr_00 = 0x01C6E360;
      *(uint *)&this_ptr->field_0xcdd0 = 1;
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(this_ptr_00,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_34) && (*(int *)&this_ptr->field_0xcde4 != 0)) {
    *(float *)&this_ptr->field_0x2524 = fStack_40 * *(float *)&this_ptr->field_0xcdcc * delta_time;
    core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
    fVar21 = 0.7853982;
    fVar20 = 3.0;
    CStack_378.x = 0.0;
    CStack_378.z = fStack_34;
    pCVar18 = &CStack_378;
    CStack_378.y = 0.0;
    pCVar7 = (CPathMap *)
             (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                       (*(int *)&this_ptr->field_0xcde4);
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),
                       pCVar7,pCVar18,fVar20,fVar21);
    if (iVar3 != 1) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n",this_ptr);
      core_carved_cpp_FUN_00429090(this_ptr);
      *(uint *)&this_ptr->field_0x2508 = 0;
    }
  }
LAB_004269b6:
  if (0.0 < *(float *)&this_ptr->field_0xcde0) {
    *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    iVar3 = *(int *)&this_ptr->field_0xcde4;
    if ((iVar3 != 0) &&
       (pCVar5 = (CCarved *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar5 == this_ptr
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_168 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_164 = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_160 = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_1f8 = fStack_168;
    afStack_1f4[(uint)bVar15 * -2] = afStack_194[(uint)bVar15 * -2 + 0xc];
    afStack_1f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
    fStack_b4 = fStack_1f8 + *(float *)&this_ptr->field_0x250c;
    afStack_b0[0] = afStack_1f4[0] + *(float *)&this_ptr->field_0x2510;
    afStack_b0[1] = afStack_1f4[1] + *(float *)&this_ptr->field_0x2514;
    fStack_e4 = fStack_b4;
    afStack_f8[(uint)bVar15 * -2 + 6] = afStack_b0[(uint)bVar15 * -2];
    afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_198 = fStack_e4 + *(float *)&this_ptr->field_0x249c;
    afStack_194[0] = fStack_e0 + *(float *)&this_ptr->field_0x24a0;
    afStack_194[1] = fStack_dc + *(float *)&this_ptr->field_0x24a4;
    CStack_2d0.x = fStack_198;
    *(float *)((int)&CStack_2d0 + (uint)bVar15 * -8 + 4) = afStack_194[(uint)bVar15 * -2];
    *(float *)((int)&CStack_2d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_2d0);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0xcdd0 == 0) {
    iVar3 = *(int *)&this_ptr->field_0xd0b8;
    if (*(int *)(&this_ptr->field_0x2298 + iVar3 * 4) == 0) {
      iVar6 = *(int *)&this_ptr->field_0xd0a0;
      fVar20 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0
                (this_ptr,*(uint *)&this_ptr->field_0xd0a4,
                 *(uint *)&this_ptr->field_0xd08c,0x3e4ccccd);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0a4 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (this_ptr,*(uint *)&this_ptr->field_0xd0a8,
                   *(uint *)&this_ptr->field_0xd084,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_0042fdc0
                (this_ptr,*(uint *)&this_ptr->field_0xd0ac,
                 *(uint *)&this_ptr->field_0xd090,0x3e4ccccd);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0ac * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (this_ptr,*(uint *)&this_ptr->field_0xd0b0,
                   *(uint *)&this_ptr->field_0xd088,0x3e4ccccd);
      }
      iVar6 = *(int *)&this_ptr->field_0xd078;
      fVar20 = 0.7;
      iVar3 = *(int *)&this_ptr->field_0xd0bc;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar3,iVar6,fVar20);
    core_charactr_cpp_FUN_0042fc90(this_ptr);
  }
  iVar3 = core_carved_cpp_FUN_00428520(this_ptr,1);
  if (((iStack_48 != 0) && (-1 < iVar3)) &&
     (iVar3 = *(int *)(&this_ptr->field_0x25b0 + iVar3 * 0x78), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x78))(iVar3,2);
    return;
  }
  return;
}
