// Name: core_larva.cpp_FUN_004e0670
// Address: 004e0670
// Address Range: [[004e0670, 004e1079]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004e0670(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e0fc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_larva_cpp_FUN_004e0670(CEnemy *param_1,float param_2)

{
  int iVar1;
  CEnemy *pCVar2;
  CPathMap *path_map;
  uint uVar3;
  byte bVar4;
  unkbyte10 Var5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_11a4 [962];
  CFireEffect *this_ptr;
  CVector3f *position;
  CVector3f *pCVar11;
  CGore *this_ptr_00;
  float fVar12;
  uint uVar13;
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
  
  bVar4 = 0;
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  pfStack_24 = (float *)&param_1->field_0x20;
  fStack_50 = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_30 = (CMotionController *)&param_1->field_0x2b4;
  while (0.0 < fStack_50) {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_50);
    if ((iVar1 == 100) && (iVar1 = *(int *)&param_1->field_0x10a78, iVar1 != 0)) {
      fStack_84 = *(float *)(iVar1 + 0x20) - *pfStack_24;
      fStack_80 = *(float *)(iVar1 + 0x24) - pfStack_24[1];
      fStack_7c = *(float *)(iVar1 + 0x28) - pfStack_24[2];
      fStack_d8 = fStack_84;
      afStack_ec[(uint)bVar4 * -2 + 6] = afStack_98[(uint)bVar4 * -2 + 6];
      afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (afStack_110 + 5 != afStack_ec + 5) {
        fStack_fc = fStack_d8;
        fStack_f8 = fStack_d4;
        fStack_f4 = fStack_d0;
      }
      fStack_f8 = fStack_f8 + _DAT_005dbe3e;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0xc0000000);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0xc0000000);
      Var5 = fsin((float10)_DAT_005dbe46);
      fVar10 = (float10)fptan((float10)_DAT_005dbe4e);
      fVar8 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar8;
      fVar9 = (float10)fStack_fc;
      atan2();
      fVar12 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar6 = (float10)fcos(Var5);
      fVar7 = (float10)fsin(fVar9);
      fVar9 = (float10)fcos(fVar9);
      dStack_64 = (double)fVar12;
      fStack_2c = fVar12 * (float)_DAT_005dbe36 * fVar12;
      fVar8 = fVar6 * (float10)_DAT_005dbe3e * fVar6 *
              (fVar8 * (float10)fVar12 - (float10)fStack_f8);
      auStack_150._4_4_ = (float)-fVar10;
      fStack_28 = (float)fVar8;
      auStack_150._0_4_ = (float)(fVar7 * fVar6);
      fStack_148 = (float)(fVar9 * fVar6);
      if ((float10)0 < fVar8) {
        fStack_20 = SQRT(fStack_2c / fStack_28);
        fStack_114 = (float)(fVar7 * fVar6) * fStack_20;
        afStack_110[0] = (float)-fVar10 * fStack_20;
        afStack_110[1] = (float)(fVar9 * fVar6) * fStack_20;
        fStack_b4 = fStack_114;
        afStack_ec[(uint)bVar4 * -2 + 0xf] = afStack_110[(uint)bVar4 * -2];
        afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        if ((float *)auStack_150 != afStack_ec + 0xe) {
          auStack_150._0_4_ = fStack_b4;
          auStack_150._4_4_ = fStack_b0;
          fStack_148 = fStack_ac;
        }
        uStack_a8 = 0;
        uStack_a4 = 0x3f000000;
        uStack_a0 = 0x3f800000;
        core_actor_cpp_FUN_00408d70(param_1);
        uVar13 = 0;
        iVar1 = 2;
        pCVar11 = (CVector3f *)auStack_150;
        position = &CStack_120;
        CStack_120._0_4_ = CStack_144._0_4_;
        *(uint *)((int)&CStack_120 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&CStack_144 + (uint)bVar4 * -8 + 4);
        this_ptr = 0x01C3DEB4;
        *(uint *)((int)&CStack_120 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&CStack_144 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        core_fire_cpp_FUN_0049d500(this_ptr,position,pCVar11,iVar1,uVar13);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
      }
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  iVar1 = core_motion_cpp_FUN_005035c0();
  uVar13 = *(uint *)(iVar1 + 0x24);
  uStack_3c = uVar13;
  iVar1 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    if (uVar13 == 0) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
      iVar1 = *(int *)&param_1->field_0x10a78;
      if (iVar1 == 0) {
        iVar1 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar1 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,1,1);
        }
      }
      else {
        fStack_138 = *(float *)(iVar1 + 0x20) - *pfStack_24;
        afStack_134[0] = *(float *)(iVar1 + 0x24) - pfStack_24[1];
        afStack_134[1] = *(float *)(iVar1 + 0x28) - pfStack_24[2];
        afStack_110[2] = fStack_138;
        afStack_110[(uint)bVar4 * -2 + 3] = afStack_134[(uint)bVar4 * -2];
        afStack_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_134[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        fStack_1c = fStack_100 * fStack_100 +
                    afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3];
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01caf5b4);
        core_vecdir_cpp_FUN_005838f0();
        uStack_180 = uStack_cc;
        afStack_1ac[(uint)bVar4 * -2 + 0xc] = afStack_ec[(uint)bVar4 * -2 + 9];
        afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
             afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
        fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
        if (((float)_DAT_005dbe1e <= ABS(fStack_14)) || ((float)_DAT_005dbe26 < fStack_38)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,1,1);
        }
        else if (*(float *)&param_1->field_0x10a74 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,2,1);
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41700000);
          *(float *)&param_1->field_0x10a74 = fStack_14;
        }
      }
    }
    else if (uVar13 < 2) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
      uVar3 = 0x41A00000;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar1 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
      }
      else {
        uStack_18 = 0x41A00000;
        max_distance = 0.17453292;
        fVar12 = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        CStack_78._0_4_ = 0;
        CStack_78._8_4_ = uVar3;
        pCVar11 = &CStack_78;
        CStack_78._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar11,
                           fVar12,max_distance);
        if (iVar1 < 0) {
          engine_console_cpp_FUN_00436710();
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
        if (*(float *)&param_1->field_0x10a74 <= 0.0) {
          iVar1 = *(int *)&param_1->field_0x10a78;
          fStack_198 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_194 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_190 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_1ac[2] = fStack_198;
          afStack_1ac[(uint)bVar4 * -2 + 3] = afStack_1ac[(uint)bVar4 * -2 + 6];
          afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fStack_4c = fStack_19c * fStack_19c +
                      afStack_1ac[2] * afStack_1ac[2] + afStack_1ac[3] * afStack_1ac[3];
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01caf5b4);
          if (fStack_48 < *(float *)&param_1->field_0x10a70) {
            core_vecdir_cpp_FUN_005838f0();
            fStack_f0 = fStack_9c;
            afStack_ec[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
            afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            if (afStack_1ac + 2 != &fStack_f0) {
              afStack_1ac[2] = fStack_f0;
              afStack_1ac[3] = afStack_ec[0];
              fStack_19c = afStack_ec[1];
            }
            uStack_34 = core_actor_cpp_FUN_0040d0c0();
            fStack_14 = (float)uStack_34;
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
            if (ABS(fStack_14) < (float)_DAT_005dbe1e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,2,1);
              *(uint *)&param_1->field_0x10a74 = 0x40c00000;
            }
          }
        }
      }
    }
    else if (((uVar13 == 5) && (*(int *)&param_1->field_0x10a64 == 0)) &&
            (*(int *)&param_1->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_005469a0(pCStack_30);
      afStack_ec[2] = (float)uStack_1b0;
      afStack_ec[(uint)bVar4 * -2 + 3] = afStack_1ac[(uint)bVar4 * -2];
      afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1);
      pCVar11 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c._0_4_ = CStack_1bc._0_4_;
      *(uint *)((int)&CStack_12c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_1bc + (uint)bVar4 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_1bc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar11,blood_type);
      *(uint *)&param_1->field_0x10a64 = 1;
    }
    goto LAB_004e0775;
  }
  uVar13 = *(uint *)&param_1->field_0x27ac;
  if (uVar13 < 2) {
    if (uVar13 == 1) {
LAB_004e074a:
      iVar1 = 1;
    }
    else {
LAB_004e0b9d:
      iVar1 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
  }
  else {
    if (uVar13 < 3) goto LAB_004e074a;
    if (uVar13 != 3) goto LAB_004e0b9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
    engine_console_cpp_FUN_00436710();
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_004e0775:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  if (uStack_3c == 1) {
    iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x8);
    if (iVar1 == 0) {
      fVar10 = (float10)1;
      fVar8 = (float10)1.4426950408889634 *
              (float10)0.6931471805599453 * (float10)*(float *)&param_1->field_0x2824 *
              (float10)_DAT_005dbe2e;
      fVar9 = (float10)f2xm1(fVar8 - (fVar8 / fVar10) * fVar10);
      fVar10 = (float10)fscale(fVar9 + fVar10,fVar8);
      dStack_6c = (double)fVar10;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f7d70a4,0x3f8147ae);
      FUN_005b7790
                (auStack_284,"slime.wav @%f *%f",(double)*(float *)&param_1->field_0x2824,
                 (double)(fStack_14 * (float)dStack_6c));
      uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))(param_1);
      *(uint *)&param_1[1].field_0x8 = uVar3;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x8);
  }
  iVar1 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar1 != 0) {
    if ((*(int *)&param_1->field_0x10a78 != 0) &&
       (pCVar2 = (CEnemy *)(**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))()
       , pCVar2 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1);
    fStack_18c = *(float *)&param_1->field_0x2588 * param_2;
    fStack_188 = *(float *)&param_1->field_0x258c * param_2;
    fStack_184 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_168 = fStack_18c;
    afStack_1ac[(uint)bVar4 * -2 + 0x12] = afStack_1ac[(uint)bVar4 * -2 + 9];
    afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
         afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    afStack_98[2] = fStack_168 + *(float *)&param_1->field_0x257c;
    afStack_98[3] = fStack_164 + *(float *)&param_1->field_0x2580;
    fStack_88 = fStack_160 + *(float *)&param_1->field_0x2584;
    fStack_174 = afStack_98[2];
    afStack_1ac[(uint)bVar4 * -2 + 0xf] = afStack_98[(uint)bVar4 * -2 + 3];
    afStack_1ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_c0 = fStack_174 + *(float *)&param_1->field_0x2508;
    fStack_bc = fStack_170 + *(float *)&param_1->field_0x250c;
    fStack_b8 = fStack_16c + *(float *)&param_1->field_0x2510;
    fStack_15c = fStack_c0;
    *(float *)(auStack_150 + (uint)bVar4 * -8 + -8) = afStack_ec[(uint)bVar4 * -2 + 0xc];
    *(float *)(auStack_150 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
         afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_15c);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
