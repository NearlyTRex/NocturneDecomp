// Name: core_larva.cpp_FUN_004fda40
// Address: 004fda40
// Address Range: [[004fda40, 004fe449]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004fda40(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fe396) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_larva_cpp_FUN_004fda40(CEnemy *param_1,float param_2)

{
  int iVar1;
  SMotion *pSVar2;
  CEnemy *pCVar3;
  CPathMap *path_map;
  uint uVar4;
  byte bVar5;
  unkbyte10 Var6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_11a4 [962];
  CFireEffect *this_ptr;
  CVector3f *position;
  CVector3f *pCVar12;
  CGore *this_ptr_00;
  float fVar13;
  uint uVar14;
  EBloodType blood_type;
  float max_distance;
  byte auStack_284 [200];
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [2];
  byte auStack_150 [8];
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_78;
  double dStack_6c;
  double dStack_64;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  CMotionController *pCStack_30;
  float fStack_2c;
  float fStack_28;
  float *pfStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  pfStack_24 = (float *)&param_1->field_0x20;
  fStack_50 = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_30 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_50) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,&fStack_50);
    if ((iVar1 == 100) && (iVar1 = *(int *)&param_1->field_0xc1e8, iVar1 != 0)) {
      fStack_84 = *(float *)(iVar1 + 0x20) - *pfStack_24;
      fStack_80 = *(float *)(iVar1 + 0x24) - pfStack_24[1];
      fStack_7c = *(float *)(iVar1 + 0x28) - pfStack_24[2];
      fStack_d8 = fStack_84;
      afStack_ec[(uint)bVar5 * -2 + 6] = afStack_98[(uint)bVar5 * -2 + 6];
      afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      if (afStack_110 + 5 != afStack_ec + 5) {
        fStack_fc = fStack_d8;
        fStack_f8 = fStack_d4;
        fStack_f4 = fStack_d0;
      }
      fStack_f8 = fStack_f8 + _DAT_005e6c4b;
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xc0000000);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xc0000000);
      Var6 = fsin((float10)_DAT_005e6c53);
      fVar11 = (float10)fptan((float10)_DAT_005e6c5b);
      fVar9 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar9;
      fVar10 = (float10)fStack_fc;
      atan2();
      fVar13 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar7 = (float10)fcos(Var6);
      fVar8 = (float10)fsin(fVar10);
      fVar10 = (float10)fcos(fVar10);
      dStack_64 = (double)fVar13;
      fStack_2c = fVar13 * (float)_DAT_005e6c43 * fVar13;
      fVar9 = fVar7 * (float10)_DAT_005e6c4b * fVar7 *
              (fVar9 * (float10)fVar13 - (float10)fStack_f8);
      auStack_150._4_4_ = (float)-fVar11;
      fStack_28 = (float)fVar9;
      auStack_150._0_4_ = (float)(fVar8 * fVar7);
      fStack_148 = (float)(fVar10 * fVar7);
      if ((float10)0 < fVar9) {
        fStack_20 = SQRT(fStack_2c / fStack_28);
        fStack_114 = (float)(fVar8 * fVar7) * fStack_20;
        afStack_110[0] = (float)-fVar11 * fStack_20;
        afStack_110[1] = (float)(fVar10 * fVar7) * fStack_20;
        fStack_b4 = fStack_114;
        afStack_ec[(uint)bVar5 * -2 + 0xf] = afStack_110[(uint)bVar5 * -2];
        afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
             afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)auStack_150 != afStack_ec + 0xe) {
          auStack_150._0_4_ = fStack_b4;
          auStack_150._4_4_ = fStack_b0;
          fStack_148 = fStack_ac;
        }
        uStack_a8 = 0;
        uStack_a4 = 0x3f000000;
        uStack_a0 = 0x3f800000;
        core_actor_cpp_FUN_00408b40(param_1);
        uVar14 = 0;
        iVar1 = 2;
        pCVar12 = (CVector3f *)auStack_150;
        position = &CStack_120;
        CStack_120._0_4_ = CStack_144._0_4_;
        *(uint *)((int)&CStack_120 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_144 + (uint)bVar5 * -8 + 4);
        this_ptr = 0x01C57074;
        *(uint *)((int)&CStack_120 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_144 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_fire_cpp_FUN_004b5e00(this_ptr,position,pCVar12,iVar1,uVar14);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      }
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_30);
  uVar14 = *(uint *)(pSVar2 + 0x24);
  uStack_3c = uVar14;
  iVar1 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    if (uVar14 == 0) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      iVar1 = *(int *)&param_1->field_0xc1e8;
      if (iVar1 == 0) {
        iVar1 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar1 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,1,1);
        }
      }
      else {
        fStack_138 = *(float *)(iVar1 + 0x20) - *pfStack_24;
        afStack_134[0] = *(float *)(iVar1 + 0x24) - pfStack_24[1];
        afStack_134[1] = *(float *)(iVar1 + 0x28) - pfStack_24[2];
        afStack_110[2] = fStack_138;
        afStack_110[(uint)bVar5 * -2 + 3] = afStack_134[(uint)bVar5 * -2];
        afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_134[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        fStack_1c = fStack_100 * fStack_100 +
                    afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3];
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
        core_vecdir_cpp_FUN_005a7520();
        uStack_180 = uStack_cc;
        afStack_1ac[(uint)bVar5 * -2 + 0xc] = afStack_ec[(uint)bVar5 * -2 + 9];
        afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        fStack_14 = (float)core_actor_cpp_FUN_0040cd60();
        if (((float)_DAT_005e6c2b <= ABS(fStack_14)) || ((float)_DAT_005e6c33 < fStack_38)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
        else if (*(float *)&param_1->field_0xc1e4 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,2,1);
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41700000);
          *(float *)&param_1->field_0xc1e4 = fStack_14;
        }
      }
    }
    else if (uVar14 < 2) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      uVar4 = 0x41A00000;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar1 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0,1);
        }
      }
      else {
        uStack_18 = 0x41A00000;
        max_distance = 0.17453292;
        fVar13 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        CStack_78._0_4_ = 0;
        CStack_78._8_4_ = uVar4;
        pCVar12 = &CStack_78;
        CStack_78._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
        iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar12,
                           fVar13,max_distance);
        if (iVar1 < 0) {
          engine_console_cpp_FUN_00445430();
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0,1);
        }
        if (*(float *)&param_1->field_0xc1e4 <= 0.0) {
          iVar1 = *(int *)&param_1->field_0xc1e8;
          fStack_198 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_194 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_190 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_1ac[2] = fStack_198;
          afStack_1ac[(uint)bVar5 * -2 + 3] = afStack_1ac[(uint)bVar5 * -2 + 6];
          afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          fStack_4c = fStack_19c * fStack_19c +
                      afStack_1ac[2] * afStack_1ac[2] + afStack_1ac[3] * afStack_1ac[3];
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01cc804c);
          if (fStack_48 < *(float *)&param_1->field_0xc1e0) {
            core_vecdir_cpp_FUN_005a7520();
            fStack_f0 = fStack_9c;
            afStack_ec[(uint)bVar5 * -2] = afStack_98[(uint)bVar5 * -2];
            afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            if (afStack_1ac + 2 != &fStack_f0) {
              afStack_1ac[2] = fStack_f0;
              afStack_1ac[3] = afStack_ec[0];
              fStack_19c = afStack_ec[1];
            }
            uStack_34 = core_actor_cpp_FUN_0040cd60();
            fStack_14 = (float)uStack_34;
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60();
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60();
            if (ABS(fStack_14) < (float)_DAT_005e6c2b) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,2,1);
              *(uint *)&param_1->field_0xc1e4 = 0x40c00000;
            }
          }
        }
      }
    }
    else if (((uVar14 == 5) && (*(int *)&param_1->field_0xc1d4 == 0)) &&
            (*(int *)&param_1->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_00569040(pCStack_30);
      afStack_ec[2] = (float)uStack_1b0;
      afStack_ec[(uint)bVar5 * -2 + 3] = afStack_1ac[(uint)bVar5 * -2];
      afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1);
      pCVar12 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c._0_4_ = CStack_1bc._0_4_;
      *(uint *)((int)&CStack_12c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_1bc + (uint)bVar5 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_1bc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar12,blood_type);
      *(uint *)&param_1->field_0xc1d4 = 1;
    }
    goto LAB_004fdb45;
  }
  uVar14 = *(uint *)&param_1->field_0x273c;
  if (uVar14 < 2) {
    if (uVar14 == 1) {
LAB_004fdb1a:
      iVar1 = 1;
    }
    else {
LAB_004fdf6d:
      iVar1 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar1,1);
  }
  else {
    if (uVar14 < 3) goto LAB_004fdb1a;
    if (uVar14 != 3) goto LAB_004fdf6d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0,1);
    engine_console_cpp_FUN_00445430();
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_004fdb45:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  if (uStack_3c == 1) {
    iVar1 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x8);
    if (iVar1 == 0) {
      fVar11 = (float10)1;
      fVar9 = (float10)1.4426950408889634 *
              (float10)0.6931471805599453 * (float10)*(float *)&param_1->field_0x27b8 *
              (float10)_DAT_005e6c3b;
      fVar10 = (float10)f2xm1(fVar9 - (fVar9 / fVar11) * fVar11);
      fVar11 = (float10)fscale(fVar10 + fVar11,fVar9);
      dStack_6c = (double)fVar11;
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3f7d70a4,0x3f8147ae);
      FUN_005bfb40
                (auStack_284,"slime.wav @%f *%f",(double)*(float *)&param_1->field_0x27b8,
                 (double)(fStack_14 * (float)dStack_6c));
      uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1);
      *(uint *)&param_1[1].field_0x8 = uVar4;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x8);
  }
  iVar1 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar1 != 0) {
    if ((*(int *)&param_1->field_0xc1e8 != 0) &&
       (pCVar3 = (CEnemy *)(**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))(),
       pCVar3 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1);
    fStack_18c = *(float *)&param_1->field_0x2518 * param_2;
    fStack_188 = *(float *)&param_1->field_0x251c * param_2;
    fStack_184 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_168 = fStack_18c;
    afStack_1ac[(uint)bVar5 * -2 + 0x12] = afStack_1ac[(uint)bVar5 * -2 + 9];
    afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
         afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    afStack_98[2] = fStack_168 + *(float *)&param_1->field_0x250c;
    afStack_98[3] = fStack_164 + *(float *)&param_1->field_0x2510;
    fStack_88 = fStack_160 + *(float *)&param_1->field_0x2514;
    fStack_174 = afStack_98[2];
    afStack_1ac[(uint)bVar5 * -2 + 0xf] = afStack_98[(uint)bVar5 * -2 + 3];
    afStack_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_c0 = fStack_174 + *(float *)&param_1->field_0x249c;
    fStack_bc = fStack_170 + *(float *)&param_1->field_0x24a0;
    fStack_b8 = fStack_16c + *(float *)&param_1->field_0x24a4;
    fStack_15c = fStack_c0;
    *(float *)(auStack_150 + (uint)bVar5 * -8 + -8) = afStack_ec[(uint)bVar5 * -2 + 0xc];
    *(float *)(auStack_150 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4) =
         afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_15c);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
