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
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  uint uVar5;
  CDemonActor *actor_ptr;
  CDemonActor *pCVar6;
  CSkeleton *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  float *pfVar7;
  uint *puVar8;
  int unaff_EDI;
  float *pfVar9;
  byte bVar10;
  float afStackY_1268 [21];
  CDemonActor *apCStackY_1214 [9];
  float afStackY_11f0 [42];
  CDemonActor *apCStackY_1148 [6];
  float afStackY_1130 [31];
  CDemonActor *apCStackY_10b4 [5];
  float afStackY_10a0 [24];
  CCharacter *apCStackY_1040 [6];
  float afStackY_1028 [828];
  float fVar11;
  CDemonActor **ppCVar12;
  CCharacter *this_ptr_01;
  float fVar13;
  CDemonSet *this_ptr_02;
  double in_stack_fffffcec;
  CDemonActor *in_stack_fffffcf4;
  int in_stack_fffffcf8;
  SDamageInfo SStack_2f4;
  float fStack_2b8;
  float fStack_2b4;
  float afStack_2b0 [12];
  CDemonActor *pCStack_280;
  float afStack_27c [2];
  CVector3f CStack_274;
  CVector3f aCStack_268 [2];
  float fStack_250;
  float afStack_24c [5];
  uint uStack_238;
  uint uStack_22c;
  CDemonActor *apCStack_228 [5];
  CDemonActor *pCStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float afStack_204 [5];
  float fStack_1f0;
  uint uStack_1e0;
  CDemonActor *pCStack_1cc;
  float afStack_1c8 [4];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float afStack_194 [4];
  CDemonActor *pCStack_184;
  float afStack_180 [8];
  float fStack_160;
  CDemonActor *apCStack_15c [3];
  float fStack_150;
  float fStack_14c;
  CDemonActor *pCStack_148;
  CVector3f CStack_144;
  float afStack_138 [4];
  float fStack_128;
  CVector3f CStack_124;
  float afStack_118 [6];
  CDemonActor *pCStack_100;
  float afStack_fc [8];
  float fStack_dc;
  float afStack_d8 [5];
  CDemonActor *apCStack_c4 [4];
  float afStack_b4 [5];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CDemonActor *pCStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CDemonActor *pCStack_58;
  CCharacter *apCStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CDemonActor *pCStack_34;
  CDemonActor *pCStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  CCharacter *pCStack_18;
  int iStack_14;
  
  bVar10 = 0;
  (*(((param_1->base).vtable._uc)->_uc).isInvulnerable)(param_1);
  ppCVar12 = apCStack_228;
  uStack_22c = apCStack_228[3];
  apCStack_228[(uint)bVar10 * -2] = apCStack_228[(uint)bVar10 * -2 + 4];
  apCStack_228[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       apCStack_228[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
  core_actor_cpp_FUN_00408b80(param_1,ppCVar12);
  CStack_144.x = afStack_27c[0];
  afStack_138[(uint)bVar10 * -2 + -2] = afStack_27c[(uint)bVar10 * -2 + 1];
  this_ptr_01 = param_1;
  afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
       *(float *)((int)&CStack_274 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr_01);
  if (iVar4 != 0) {
    pCStack_30 = (CDemonActor *)0x0;
    fStack_2c = 30.0;
    pCStack_34 = core_actor_cpp_castToClassHash_FUN_0040c840
                           ((CDemonActor *)(param_1->model).bone_origins[0x1c].y,
                            g_CHeroClassInfo.name_hash);
    uVar5 = 0;
    if (pCStack_34 != (CDemonActor *)0x0) {
      pCStack_18 = (CCharacter *)0x0;
      for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->threat_count; iStack_14 = iStack_14 + 1) {
        pCVar2 = *(CDemonActor **)
                  (pCStack_18[0x1a].flames[0].base.actor_name +
                  (int)&g_CDemonSetPtr->cameras[9].fog.color_index.g);
        actor_ptr = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar2,g_CCharacterClassInfo.name_hash);
        if (actor_ptr != (CDemonActor *)0x0) {
          pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (actor_ptr,g_CTVBatClassInfo.name_hash);
          pCVar3 = pCStack_34;
          if (pCVar6 == (CDemonActor *)0x0) {
            pfVar7 = &CStack_274.y;
            puVar8 = (uint *)((int)pCVar2 + (uint)bVar10 * -8 + 0x24);
            CStack_274.y = (pCVar2->location).position.x;
            *(uint *)((int)aCStack_268 + (uint)bVar10 * -8 + -4) = *puVar8;
            *(uint *)((int)aCStack_268 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                 puVar8[(uint)bVar10 * -2 + 1];
            core_actor_cpp_FUN_00408bf0(pCVar3,pfVar7);
            fStack_9c = CStack_124.y;
            afStack_b4[(uint)bVar10 * -2 + 7] = afStack_118[(uint)bVar10 * -2 + -1];
            afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8] =
                 afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2];
            in_stack_fffffcec = (double)(float)pCStack_94;
            if ((0.0 < in_stack_fffffcec) && (in_stack_fffffcec <= _DAT_005c6a32)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_b4 + 6);
              afStack_138[3] = (float)uStack_1e0;
              afStack_138[(uint)bVar10 * -2 + 4] = afStack_204[(uint)bVar10 * -2 + 10];
              *(float *)((int)&CStack_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   afStack_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb];
              if ((_DAT_005c6a3a <= fStack_128) &&
                 (((int)fStack_128 < 0x3f490fdc &&
                  (CStack_28.z = SQRT((float)pCStack_94 * (float)pCStack_94 +
                                      fStack_9c * fStack_9c + fStack_98 * fStack_98),
                  CStack_28.z < fStack_2c)))) {
                pCStack_30 = actor_ptr;
                fStack_2c = CStack_28.z;
              }
            }
          }
        }
        pCStack_18 = (CCharacter *)((pCStack_18->base).actor_name + 4);
      }
      if (pCStack_30 == (CDemonActor *)0x0) {
        afStack_24c[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
        afStack_24c[2] = afStack_24c[2] * (param_1->model).bone_origins[0x1a].x;
        afStack_24c[0] = 0.0;
        afStack_24c[1] = 0.0;
        core_actor_cpp_FUN_00408b00(param_1,afStack_24c);
        fVar13 = 1.05;
        fVar11 = 0.95;
        afStack_1c8[3] = afStack_b4[3];
        afStack_1c8[(uint)bVar10 * -2 + 4] = afStack_b4[(uint)bVar10 * -2 + 4];
        afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
             afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        fVar13 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar11,fVar13);
        fVar11 = (param_1->model).bone_origins[0x1a].x;
        fStack_198 = CStack_144.x;
        afStack_194[(uint)bVar10 * -2] = afStack_138[(uint)bVar10 * -2 + -2];
        afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
        fStack_1b8 = fStack_1b8 - fVar13 * fVar11;
        afStack_118[1] = fStack_198 + afStack_1c8[3];
        afStack_118[3] = afStack_194[1] + fStack_1b4;
        afStack_118[2] = afStack_194[0] + fStack_1b8;
        afStack_d8[3] = fStack_198 + afStack_1c8[3];
        afStack_d8[(uint)bVar10 * -2 + 4] = afStack_118[(uint)bVar10 * -2 + 2];
        this_ptr_02 = g_CDemonSetPtr;
        apCStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             (CDemonActor *)afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_02);
        core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(g_CDemonSetPtr,1,0xff,0xff,0xff);
        core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
        pCVar2 = (CDemonActor *)(param_1->model).bone_origins[0x1c].y;
        if (pCVar2 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar2);
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&fStack_198,afStack_d8 + 3);
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
        (*((pCStack_30->vtable)._ub)->getBoundingBox)(pCStack_30,SUB84(in_stack_fffffcec,0));
        pfVar7 = afStack_2b0;
        pfVar9 = &SStack_2f4.impact_direction.z;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        fStack_88 = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        fStack_84 = (float)SStack_2f4.damage_type + fStack_2b8;
        fStack_80 = (float)SStack_2f4.attacker + fStack_2b4;
        afStack_1c8[2] = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        afStack_1c8[(uint)bVar10 * -2 + 3] = afStack_b4[(uint)bVar10 * -2 + 0xc];
        afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        pCStack_100 = (CDemonActor *)(afStack_1c8[2] * _DAT_005c6a02);
        afStack_fc[0] = afStack_1c8[3] * _DAT_005c6a02;
        afStack_fc[1] = fStack_1b8 * _DAT_005c6a02;
        pCStack_148 = (CDemonActor *)(afStack_1c8[2] * _DAT_005c6a02);
        *(float *)((int)&CStack_144 + (uint)bVar10 * -8) = afStack_fc[(uint)bVar10 * -2];
        afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2] =
             afStack_fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&pCStack_184 != &pCStack_148) {
          pCStack_184 = pCStack_148;
          afStack_180[0] = CStack_144.x;
          afStack_180[1] = CStack_144.y;
        }
        fStack_250 = *(float *)((int)CStack_28.x + 0x20) + (float)pCStack_184;
        afStack_24c[0] = *(float *)((int)CStack_28.x + 0x24) + afStack_180[0];
        afStack_24c[1] = *(float *)((int)CStack_28.x + 0x28) + afStack_180[1];
        fStack_7c = fStack_250;
        afStack_b4[(uint)bVar10 * -2 + 0xf] = afStack_24c[(uint)bVar10 * -2];
        afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_24c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&fStack_40 != afStack_b4 + 0xe) {
          fStack_40 = fStack_7c;
          afStack_3c[0] = fStack_78;
          afStack_3c[1] = fStack_74;
        }
        afStack_3c[0] = afStack_180[0] * _DAT_005c6a02 + afStack_3c[0];
        this_ptr_00 = (CDeformableModelInstance *)((int)CStack_28.x + 0x158);
        if (*(char *)((int)CStack_28.x + 0x24a8) != '\0') {
          this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               (this_ptr_00);
          if (this_ptr != (CSkeleton *)0x0) {
            iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr,"Bip01 Head",1);
            if (-1 < iVar4) {
              core_skeleton_cpp_FUN_0054dcc0(this_ptr_00);
              fVar11 = CStack_28.x;
              uStack_238 = afStack_204[2];
              afStack_24c[(uint)bVar10 * -2 + 6] = afStack_204[(uint)bVar10 * -2 + 3];
              afStack_24c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                   afStack_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              core_actor_cpp_FUN_00408b80(fVar11);
              fStack_208 = fStack_1f0;
              afStack_204[(uint)bVar10 * -2] = afStack_204[(uint)bVar10 * -2 + 6];
              afStack_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
              if (afStack_1c8 + 8 != &fStack_208) {
                fStack_1a8 = fStack_208;
                fStack_1a4 = afStack_204[0];
                fStack_1a0 = afStack_204[1];
              }
              if ((fStack_1a4 < afStack_3c[0]) && (&fStack_40 != afStack_1c8 + 8)) {
                fStack_40 = fStack_1a8;
                afStack_3c[0] = fStack_1a4;
                afStack_3c[1] = fStack_1a0;
              }
            }
          }
        }
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,&CStack_144.z,&fStack_40,0,0x3f400000,0x3f400000,3,0x3e800000);
        (param_1->model).bone_origins[0x53].x = 1.4013e-45;
        (param_1->model).bone_origins[0x53].y = 0.0;
        (param_1->model).bone_origins[0x53].z = 0.1;
        *(uint *)((int)CStack_28.x + 0x3254) = 0x3f800000;
        *(uint *)((int)CStack_28.x + 0x3258) = 1;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          (&(param_1->model).bone_origins[0x55].x)[unaff_EDI] = 0.0;
        } while (iVar4 < 4);
        (&(param_1->model).bone_origins[0x55].x)[(int)(param_1->model).bone_origins[0x53].y] =
             CStack_28.x;
        pCVar1 = (param_1->model).bone_origins + 0x54;
        if (pCVar1 != (CVector3f *)&fStack_40) {
          pCVar1->x = fStack_40;
          (param_1->model).bone_origins[0x54].y = afStack_3c[0];
          (param_1->model).bone_origins[0x54].z = afStack_3c[1];
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffcfc);
        SStack_2f4.hit_part_index =
             (*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                       (param_1,in_stack_fffffcf4,in_stack_fffffcf8);
        SStack_2f4.impact_direction.z = (param_1->model).bone_origins[0x4f].z;
        SStack_2f4.damage_type = (EDamageType)param_1;
        SStack_2f4.wielder = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
        (*(((pCStack_18->base).vtable._uc)->_uc).processDamage)(pCStack_18,&SStack_2f4);
        if (&CStack_274 != &CStack_28) {
          CStack_274.y = CStack_28.y;
          CStack_274.z = CStack_28.z;
        }
        iVar4 = 0;
        do {
          fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          pCStack_18 = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          param_1 = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          CStack_4c.y = (float)pCStack_18;
          CStack_4c.z = fStack_1c;
          if (aCStack_268 != (CVector3f *)(apCStack_54 + 2)) {
            aCStack_268[0].y = (float)pCStack_18;
            aCStack_268[0].z = fStack_1c;
            aCStack_268[0].x = (float)param_1;
          }
          iVar4 = iVar4 + 1;
          CStack_4c.x = (float)param_1;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_274,aCStack_268,0x20000,0x10000,1,0xffff);
        } while (iVar4 < 0x10);
      }
      fStack_40 = CStack_124.x;
      afStack_3c[1] = CStack_124.z;
      afStack_3c[0] = CStack_124.y + _DAT_005c6a06;
      fStack_1b4 = CStack_124.x;
      afStack_1c8[(uint)bVar10 * -2 + 6] = afStack_3c[(uint)bVar10 * -2];
      afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_fire_cpp_FUN_004a3c50(0x01C73654,&CStack_124);
      fStack_a0 = fStack_208 + _DAT_005c6a0a;
      fStack_9c = afStack_204[0] + _DAT_005c6a0e;
      fStack_98 = afStack_204[1] + _DAT_005c6a12;
      fStack_160 = fStack_208 + _DAT_005c6a0a;
      apCStack_15c[(uint)bVar10 * -2] = (CDemonActor *)afStack_b4[(uint)bVar10 * -2 + 6];
      apCStack_15c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           (CDemonActor *)afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b80();
      CStack_144.z = (float)pCStack_58;
      afStack_138[(uint)bVar10 * -2] = (float)apCStack_54[(uint)bVar10 * -2];
      afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           (float)apCStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (apCStack_228 + 5 != (CDemonActor **)&CStack_144.z) {
        pCStack_214 = (CDemonActor *)CStack_144.z;
        fStack_210 = afStack_138[0];
        fStack_20c = afStack_138[1];
      }
      core_fire_cpp_FUN_004a3c50(0x01C73654,&CStack_124,apCStack_228 + 5,0,0x3e800000);
      if (apCStack_15c + 2 != apCStack_228 + 5) {
        apCStack_15c[2] = pCStack_214;
        fStack_150 = fStack_210;
        fStack_14c = fStack_20c;
      }
      afStack_118[0] = fStack_208 + _DAT_005c6a16;
      afStack_118[1] = afStack_204[0] + _DAT_005c6a02;
      afStack_118[2] = afStack_204[1] + _DAT_005c6a12;
      afStack_24c[2] = fStack_208 + _DAT_005c6a16;
      afStack_24c[(uint)bVar10 * -2 + 3] = afStack_118[(uint)bVar10 * -2 + 1];
      afStack_24c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
      core_actor_cpp_FUN_00408b80();
      pCStack_184 = apCStack_c4[0];
      afStack_180[(uint)bVar10 * -2] = (float)apCStack_c4[(uint)bVar10 * -2 + 1];
      afStack_180[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           (float)apCStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
      if (apCStack_228 + 5 != &pCStack_184) {
        pCStack_214 = pCStack_184;
        fStack_210 = afStack_180[0];
        fStack_20c = afStack_180[1];
      }
      core_fire_cpp_FUN_004a3c50(0x01C73654,apCStack_15c + 2,apCStack_228 + 5,0,0x3e800000);
      if (apCStack_15c + 2 != apCStack_228 + 5) {
        apCStack_15c[2] = pCStack_214;
        fStack_150 = fStack_210;
        fStack_14c = fStack_20c;
      }
      fStack_dc = fStack_208 + _DAT_005c6a1a;
      afStack_d8[0] = afStack_204[0] + _DAT_005c6a1e;
      afStack_d8[1] = afStack_204[1] + _DAT_005c6a12;
      afStack_d8[2] = fStack_208 + _DAT_005c6a1a;
      afStack_d8[(uint)bVar10 * -2 + 3] = afStack_d8[(uint)bVar10 * -2];
      afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      apCStack_c4[3] = pCStack_34;
      afStack_b4[(uint)bVar10 * -2] = (float)(&pCStack_30)[(uint)bVar10 * -2];
      afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           (&fStack_2c)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
      if (apCStack_228 + 5 != apCStack_c4 + 3) {
        pCStack_214 = apCStack_c4[3];
        fStack_210 = afStack_b4[0];
        fStack_20c = afStack_b4[1];
      }
      core_fire_cpp_FUN_004a3c50(0x01C73654,apCStack_15c + 2,apCStack_228 + 5,0,0x3e800000);
      if (apCStack_15c + 2 != apCStack_228 + 5) {
        apCStack_15c[2] = pCStack_214;
        fStack_150 = fStack_210;
        fStack_14c = fStack_20c;
      }
      pCStack_148 = (CDemonActor *)(fStack_208 + _DAT_005c6a22);
      CStack_144.x = afStack_204[0] + _DAT_005c6a26;
      CStack_144.y = afStack_204[1] + _DAT_005c6a2a;
      pCStack_94 = (CDemonActor *)(fStack_208 + _DAT_005c6a22);
      afStack_b4[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_144 + (uint)bVar10 * -8);
      afStack_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
      core_actor_cpp_FUN_00408b80();
      pCStack_280 = pCStack_1cc;
      afStack_27c[(uint)bVar10 * -2] = afStack_1c8[(uint)bVar10 * -2];
      afStack_27c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (apCStack_228 + 5 != &pCStack_280) {
        pCStack_214 = pCStack_280;
        fStack_210 = afStack_27c[0];
        fStack_20c = afStack_27c[1];
      }
      core_fire_cpp_FUN_004a3c50(0x01C73654,apCStack_15c + 2,apCStack_228 + 5,0,0x3e800000);
      core_fire_cpp_FUN_004a3c50(0x01C73654,apCStack_15c + 2,&CStack_124,0,0x3e800000);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,&param_1->base,"wp_lightningstaff.wav",&CStack_124);
      sound_sndmain_cpp_killSfx_FUN_00556be0((uint)(param_1->model).bone_origins[0x57].x);
      uVar5 = 1;
      (param_1->model).bone_origins[0x57].x = 0.0;
      (param_1->model).bone_origins[0x1c].x = 1.0;
    }
    return uVar5;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,&param_1->base,"wp_nomana.wav",&CStack_144);
  (param_1->model).bone_origins[0x1c].x = 1.0;
  return 0;
}
