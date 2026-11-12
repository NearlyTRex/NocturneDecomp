// Name: core_lightsta.cpp_FUN_004e1070
// Address: 004e1070
// Address Range: [[004e1070, 004e2027]]
// Convention: unknown
// Signature: undefined4 core_lightsta_cpp_FUN_004e1070(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_lightsta_cpp_FUN_004e1070(CCharacter *param_1)

{
  CVector3f *pCVar1;
  CDemonActor *actor;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkeleton *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_1288 [980];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  CCharacter *this_ptr_01;
  uint uVar14;
  uint *puVar15;
  float fVar16;
  CDemonSet *this_ptr_02;
  double in_stack_fffffcec;
  float fStack_2fc;
  float fStack_2d0;
  CCharacter *pCStack_2cc;
  float fStack_2c8;
  CDemonActor *pCStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float afStack_2b8 [6];
  float fStack_2a0;
  float afStack_29c [2];
  CVector3f CStack_294;
  CVector3f CStack_288;
  float fStack_27c;
  float afStack_278 [5];
  float afStack_264 [3];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float afStack_24c [3];
  uint uStack_240;
  float afStack_23c [4];
  uint uStack_22c;
  float afStack_228 [6];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1ec;
  uint uStack_1e0;
  float afStack_1d4 [3];
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
  float afStack_1a0 [4];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float afStack_17c [4];
  uint uStack_16c;
  float fStack_168;
  float afStack_164 [4];
  uint uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float afStack_cc [3];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [5];
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar7 = 0;
  (*(((param_1->base).vtable._uc)->_uc).isInvulnerable)(param_1);
  pfVar5 = afStack_228;
  uStack_22c = afStack_228[3];
  afStack_228[(uint)bVar7 * -2] = afStack_228[(uint)bVar7 * -2 + 4];
  afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  CStack_144.x = fStack_27c;
  *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + 4) = afStack_278[(uint)bVar7 * -2];
  this_ptr_01 = param_1;
  *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr_01);
  if (iVar3 != 0) {
    fStack_30 = 0.0;
    fStack_2c = 30.0;
    iStack_34 = core_actor_cpp_castToClassHash_FUN_0040c840
                          ((param_1->model).bone_origins[0x1c].y,g_CHeroClassInfo.name_hash);
    uVar8 = 0;
    if (iStack_34 != 0) {
      iStack_18 = 0;
      for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->threat_count; iStack_14 = iStack_14 + 1) {
        iVar3 = *(int *)((int)g_CDemonSetPtr->threats + iStack_18);
        fVar13 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                  (iVar3,g_CCharacterClassInfo.name_hash);
        if (fVar13 != 0.0) {
          iVar4 = (CTVBat *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar13,g_CTVBatClassInfo.name_hash);
          iVar2 = iStack_34;
          if (iVar4 == 0) {
            pfVar5 = afStack_278 + 2;
            pfVar6 = (float *)(iVar3 + 0x24 + (uint)bVar7 * -8);
            afStack_278[2] = *(float *)(iVar3 + 0x20);
            afStack_278[(uint)bVar7 * -2 + 3] = *pfVar6;
            afStack_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] = pfVar6[(uint)bVar7 * -2 + 1];
            core_actor_cpp_FUN_00408bf0(iVar2,pfVar5);
            fStack_9c = fStack_120;
            afStack_134[(uint)bVar7 * -2 + 0x27] = afStack_134[(uint)bVar7 * -2 + 6];
            afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
                 afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            in_stack_fffffcec = (double)fStack_94;
            if ((0.0 < in_stack_fffffcec) && (in_stack_fffffcec <= _DAT_005c6a32)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_134 + 0x26);
              afStack_134[2] = (float)uStack_1e0;
              afStack_134[(uint)bVar7 * -2 + 3] = afStack_228[(uint)bVar7 * -2 + 0x13];
              afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                   afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x14];
              if ((_DAT_005c6a3a <= afStack_134[3]) &&
                 (((int)afStack_134[3] < 0x3f490fdc &&
                  (fStack_20 = SQRT(fStack_94 * fStack_94 +
                                    fStack_9c * fStack_9c + fStack_98 * fStack_98),
                  fStack_20 < fStack_2c)))) {
                fStack_30 = fVar13;
                fStack_2c = fStack_20;
              }
            }
          }
        }
        iStack_18 = iStack_18 + 4;
      }
      if (fStack_30 == 0.0) {
        afStack_24c[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
        afStack_24c[2] = afStack_24c[2] * (param_1->model).bone_origins[0x1a].x;
        afStack_24c[0] = 0.0;
        afStack_24c[1] = 0.0;
        core_actor_cpp_FUN_00408b00(param_1,afStack_278 + 0xb);
        fVar16 = 1.05;
        fVar13 = 0.95;
        fStack_1bc = fStack_a8;
        afStack_228[(uint)bVar7 * -2 + 0x1c] = afStack_134[(uint)bVar7 * -2 + 0x24];
        afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d] =
             afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
        fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar13,fVar16);
        fVar13 = (param_1->model).bone_origins[0x1a].x;
        afStack_1a0[2] = CStack_144.x;
        afStack_1a0[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + 4);
        afStack_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_1b8 = fStack_1b8 - fVar16 * fVar13;
        fStack_114 = afStack_1a0[2] + fStack_1bc;
        fStack_10c = fStack_190 + fStack_1b4;
        fStack_110 = afStack_1a0[3] + fStack_1b8;
        afStack_cc[0] = afStack_1a0[2] + fStack_1bc;
        afStack_134[(uint)bVar7 * -2 + 0x1b] = afStack_134[(uint)bVar7 * -2 + 9];
        this_ptr_02 = g_CDemonSetPtr;
        afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
             afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_02);
        core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(g_CDemonSetPtr,1,0xff,0xff,0xff);
        core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
        actor = (CDemonActor *)(param_1->model).bone_origins[0x1c].y;
        if (actor != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_1a0 + 2,afStack_134 + 0x1a);
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,&CStack_144,&g_CDemonSetPtr->collision_impact_position,0,0x3f400000,
                   0x3f400000,3,0x3e800000,0xffff);
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,2);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      }
      else {
        (**(code **)(*(int *)((int)fStack_30 + 0x154) + 0x1c))(fStack_30);
        pfVar5 = afStack_2b8;
        pfVar6 = &stack0xfffffd30;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
        }
        fStack_90 = fStack_2d0 + (float)pCStack_2c4;
        fStack_8c = (float)pCStack_2cc + fStack_2c0;
        fStack_88 = fStack_2c8 + fStack_2bc;
        fStack_1c8 = fStack_2d0 + (float)pCStack_2c4;
        afStack_228[(uint)bVar7 * -2 + 0x19] = afStack_134[(uint)bVar7 * -2 + 0x2a];
        afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1a] =
             afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b];
        fStack_108 = fStack_1c8 * _DAT_005c6a02;
        fStack_104 = fStack_1c4 * _DAT_005c6a02;
        fStack_100 = fStack_1c0 * _DAT_005c6a02;
        fStack_150 = fStack_1c8 * _DAT_005c6a02;
        afStack_164[(uint)bVar7 * -2 + 6] = afStack_134[(uint)bVar7 * -2 + 0xc];
        afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        if (afStack_1a0 + 5 != afStack_164 + 5) {
          fStack_18c = fStack_150;
          fStack_188 = fStack_14c;
          fStack_184 = fStack_148;
        }
        fStack_258 = *(float *)((int)fStack_30 + 0x20) + fStack_18c;
        fStack_254 = *(float *)((int)fStack_30 + 0x24) + fStack_188;
        fStack_250 = *(float *)((int)fStack_30 + 0x28) + fStack_184;
        fStack_84 = fStack_258;
        afStack_134[(uint)bVar7 * -2 + 0x2d] = afStack_278[(uint)bVar7 * -2 + 9];
        afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2e] =
             afStack_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        if (afStack_5c + 5 != afStack_134 + 0x2c) {
          CStack_48.x = fStack_84;
          CStack_48.y = fStack_80;
          CStack_48.z = fStack_7c;
        }
        CStack_48.y = fStack_188 * _DAT_005c6a02 + CStack_48.y;
        this_ptr_00 = (CDeformableModelInstance *)((int)fStack_30 + 0x158);
        if (*(char *)((int)fStack_30 + 0x24a8) != '\0') {
          this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               (this_ptr_00);
          if (this_ptr != (CSkeleton *)0x0) {
            iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr,"Bip01 Head",1);
            if (-1 < iVar3) {
              core_skeleton_cpp_FUN_0054dcc0(this_ptr_00,iVar3);
              fVar13 = fStack_30;
              puVar15 = &uStack_240;
              uStack_240 = uStack_204;
              afStack_23c[(uint)bVar7 * -2] = afStack_228[(uint)bVar7 * -2 + 10];
              afStack_23c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb];
              core_actor_cpp_FUN_00408b80(fVar13,puVar15);
              fStack_210 = fStack_1f8;
              afStack_228[(uint)bVar7 * -2 + 7] = afStack_228[(uint)bVar7 * -2 + 0xd];
              afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
                   afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xe];
              if (afStack_228 + 0x1e != afStack_228 + 6) {
                fStack_1b0 = fStack_210;
                fStack_1ac = fStack_20c;
                fStack_1a8 = fStack_208;
              }
              if ((fStack_1ac < CStack_48.y) && (afStack_5c + 5 != afStack_228 + 0x1e)) {
                CStack_48.x = fStack_1b0;
                CStack_48.y = fStack_1ac;
                CStack_48.z = fStack_1a8;
              }
            }
          }
        }
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,&CStack_144,afStack_5c + 5,0,0x3f400000,0x3f400000,3,0x3e800000,
                   0xffff);
        (param_1->model).bone_origins[0x53].x = 1.4013e-45;
        (param_1->model).bone_origins[0x53].y = 0.0;
        (param_1->model).bone_origins[0x53].z = 0.1;
        *(uint *)((int)fStack_30 + 0x3254) = 0x3f800000;
        *(uint *)((int)fStack_30 + 0x3258) = 1;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          (&(param_1->model).bone_origins[0x55].x)[iStack_14] = 0.0;
        } while (iVar3 < 4);
        (&(param_1->model).bone_origins[0x55].x)[(int)(param_1->model).bone_origins[0x53].y] =
             fStack_30;
        pCVar1 = (param_1->model).bone_origins + 0x54;
        if (pCVar1 != (CVector3f *)(afStack_5c + 5)) {
          pCVar1->x = CStack_48.x;
          (param_1->model).bone_origins[0x54].y = CStack_48.y;
          (param_1->model).bone_origins[0x54].z = CStack_48.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffcf4);
        fStack_2fc = (float)(*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                                      (param_1,SUB84(in_stack_fffffcec,0),
                                       (int)((ulonglong)in_stack_fffffcec >> 0x20));
        pCStack_2cc = param_1;
        pCStack_2c4 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
        (**(code **)(*(int *)((int)fStack_20 + 0x154) + 0x108))();
        if (&CStack_294 != (CVector3f *)(afStack_5c + 5)) {
          CStack_294.x = CStack_48.x;
          CStack_294.y = CStack_48.y;
          CStack_294.z = CStack_48.z;
        }
        iVar3 = 0;
        do {
          fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          CStack_6c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_28 = fStack_38;
          fStack_24 = fStack_3c;
          CStack_6c.y = fStack_38;
          CStack_6c.z = fStack_3c;
          if (&CStack_288 != (CVector3f *)(afStack_134 + 0x32)) {
            CStack_288.y = fStack_38;
            CStack_288.z = fStack_3c;
            CStack_288.x = CStack_6c.x;
          }
          iVar3 = iVar3 + 1;
          fStack_1c = CStack_6c.x;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_294,&CStack_288,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x10);
      }
      uVar14 = 0xffff;
      uVar12 = 0x3e800000;
      fStack_60 = CStack_144.x;
      uVar11 = 3;
      uVar10 = 0x3f400000;
      uVar9 = 0x3f400000;
      afStack_5c[1] = CStack_144.z;
      uVar8 = 0;
      pfVar5 = afStack_228 + 0x15;
      afStack_5c[0] = CStack_144.y + _DAT_005c6a06;
      afStack_1d4[0] = CStack_144.x;
      afStack_228[(uint)bVar7 * -2 + 0x16] = afStack_5c[(uint)bVar7 * -2];
      afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x17] =
           afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,&CStack_144,pfVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14);
      pfVar5 = &fStack_180;
      fStack_c0 = afStack_228[0] + _DAT_005c6a0a;
      fStack_bc = afStack_228[1] + _DAT_005c6a0e;
      fStack_b8 = afStack_228[2] + _DAT_005c6a12;
      fStack_180 = afStack_228[0] + _DAT_005c6a0a;
      afStack_17c[(uint)bVar7 * -2] = afStack_134[(uint)bVar7 * -2 + 0x1e];
      afStack_17c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
      core_actor_cpp_FUN_00408b80(param_1,pfVar5);
      afStack_164[2] = fStack_78;
      afStack_164[(uint)bVar7 * -2 + 3] = afStack_134[(uint)bVar7 * -2 + 0x30];
      afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x31];
      if (afStack_23c + 2 != afStack_164 + 2) {
        afStack_23c[2] = afStack_164[2];
        afStack_23c[3] = afStack_164[3];
        uStack_22c = uStack_154;
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,&CStack_144,afStack_23c + 2,0,0x3e800000,0x3e800000,3,0x3e800000,
                 0xffff);
      if (afStack_17c + 2 != afStack_23c + 2) {
        afStack_17c[2] = afStack_23c[2];
        afStack_17c[3] = afStack_23c[3];
        uStack_16c = uStack_22c;
      }
      pfVar5 = afStack_278 + 5;
      fStack_138 = afStack_228[0] + _DAT_005c6a16;
      afStack_134[0] = afStack_228[1] + _DAT_005c6a02;
      afStack_134[1] = afStack_228[2] + _DAT_005c6a12;
      afStack_264[0] = afStack_228[0] + _DAT_005c6a16;
      afStack_278[(uint)bVar7 * -2 + 6] = afStack_134[(uint)bVar7 * -2];
      afStack_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,pfVar5);
      fStack_1a4 = fStack_e4;
      afStack_1a0[(uint)bVar7 * -2] = afStack_134[(uint)bVar7 * -2 + 0x15];
      afStack_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
      if (afStack_23c + 2 != &fStack_1a4) {
        afStack_23c[2] = fStack_1a4;
        afStack_23c[3] = afStack_1a0[0];
        uStack_22c = afStack_1a0[1];
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,afStack_17c + 2,afStack_23c + 2,0,0x3e800000,0x3e800000,3,0x3e800000,
                 0xffff);
      if (afStack_17c + 2 != afStack_23c + 2) {
        afStack_17c[2] = afStack_23c[2];
        afStack_17c[3] = afStack_23c[3];
        uStack_16c = uStack_22c;
      }
      fStack_fc = afStack_228[0] + _DAT_005c6a1a;
      fStack_f8 = afStack_228[1] + _DAT_005c6a1e;
      fStack_f4 = afStack_228[2] + _DAT_005c6a12;
      afStack_f0[0] = afStack_228[0] + _DAT_005c6a1a;
      afStack_134[(uint)bVar7 * -2 + 0x12] = afStack_134[(uint)bVar7 * -2 + 0xf];
      afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
           afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      core_actor_cpp_FUN_00408b80(param_1,afStack_134 + 0x11);
      fStack_d8 = afStack_5c[2];
      afStack_134[(uint)bVar7 * -2 + 0x18] = afStack_5c[(uint)bVar7 * -2 + 3];
      afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
           afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (afStack_23c + 2 != afStack_134 + 0x17) {
        afStack_23c[2] = fStack_d8;
        afStack_23c[3] = fStack_d4;
        uStack_22c = uStack_d0;
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,afStack_17c + 2,afStack_23c + 2,0,0x3e800000,0x3e800000,3,0x3e800000,
                 0xffff);
      if (afStack_17c + 2 != afStack_23c + 2) {
        afStack_17c[2] = afStack_23c[2];
        afStack_17c[3] = afStack_23c[3];
        uStack_16c = uStack_22c;
      }
      pfVar5 = afStack_134 + 0x20;
      fStack_168 = afStack_228[0] + _DAT_005c6a22;
      afStack_164[0] = afStack_228[1] + _DAT_005c6a26;
      afStack_164[1] = afStack_228[2] + _DAT_005c6a2a;
      afStack_b4[0] = afStack_228[0] + _DAT_005c6a22;
      afStack_134[(uint)bVar7 * -2 + 0x21] = afStack_164[(uint)bVar7 * -2];
      afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
           afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,pfVar5);
      fStack_2a0 = fStack_1ec;
      afStack_29c[(uint)bVar7 * -2] = afStack_228[(uint)bVar7 * -2 + 0x10];
      afStack_29c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_228[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
      if (afStack_23c + 2 != &fStack_2a0) {
        afStack_23c[2] = fStack_2a0;
        afStack_23c[3] = afStack_29c[0];
        uStack_22c = afStack_29c[1];
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,afStack_17c + 2,afStack_23c + 2,0,0x3e800000,0x3e800000,3,0x3e800000,
                 0xffff);
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,afStack_17c + 2,&CStack_144,0,0x3e800000,0x3e800000,3,0x3e800000,
                 0xffff);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,&param_1->base,"wp_lightningstaff.wav",&CStack_144);
      sound_sndmain_cpp_killSfx_FUN_00556be0((uint)(param_1->model).bone_origins[0x57].x);
      uVar8 = 1;
      (param_1->model).bone_origins[0x57].x = 0.0;
      (param_1->model).bone_origins[0x1c].x = 1.0;
    }
    return uVar8;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,&param_1->base,"wp_nomana.wav",&CStack_144);
  (param_1->model).bone_origins[0x1c].x = 1.0;
  return 0;
}
