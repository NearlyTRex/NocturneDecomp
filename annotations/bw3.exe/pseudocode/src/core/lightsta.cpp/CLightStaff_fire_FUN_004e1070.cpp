// Name: core_lightsta.cpp_CLightStaff_fire_FUN_004e1070
// Address: 004e1070
// Address Range: [[004e1070, 004e2027]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_lightsta_cpp_CLightStaff_fire_FUN_004e1070(CLightStaff *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_lightsta_cpp_CLightStaff_fire_FUN_004e1070(CLightStaff *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  CDemonActor *actor_ptr;
  CDemonActor *pCVar5;
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  float *pfVar6;
  uint *puVar7;
  int unaff_EDI;
  float *pfVar8;
  byte bVar9;
  float afStackY_1268 [21];
  CDemonActor *apCStackY_1214 [12];
  float afStackY_11e4 [3];
  CDemonActor *apCStackY_11d8 [9];
  float afStackY_11b4 [27];
  CDemonActor *apCStackY_1148 [6];
  float afStackY_1130 [31];
  CDemonActor *apCStackY_10b4 [5];
  float afStackY_10a0 [24];
  CLightStaff *apCStackY_1040 [9];
  float afStackY_101c [825];
  CDemonActor **ppCVar10;
  CLightStaff *this_ptr_02;
  CDemonSet *this_ptr_03;
  double in_stack_fffffcec;
  CVector3f *end_position;
  CDemonActor *in_stack_fffffcf4;
  int in_stack_fffffcf8;
  float fVar11;
  float fVar12;
  float mode;
  float lifetime;
  float render_alpha;
  SDamageInfo SStack_2f4;
  float fStack_2b8;
  float fStack_2b4;
  float afStack_2b0 [12];
  CVector3f CStack_280;
  CVector3f CStack_274;
  CVector3f aCStack_268 [2];
  float fStack_250;
  float afStack_24c [5];
  float fStack_238;
  uint uStack_22c;
  CDemonActor *apCStack_228 [5];
  CVector3f CStack_214;
  CVector3f CStack_208;
  CVector3f CStack_1fc;
  float fStack_1f0;
  CDemonActor *apCStack_1ec [8];
  CDemonActor *pCStack_1cc;
  float afStack_1c8 [4];
  float fStack_1b8;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  float fStack_198;
  float afStack_194 [4];
  CVector3f aCStack_184 [3];
  float fStack_160;
  CDemonActor *apCStack_15c [2];
  CVector3f CStack_154;
  byte auStack_148 [8];
  float fStack_140;
  CVector3f CStack_13c;
  uint uStack_12c;
  float fStack_128;
  CVector3f CStack_124;
  float afStack_118 [6];
  float fStack_100;
  float afStack_fc [8];
  float fStack_dc;
  float afStack_d8 [5];
  CDemonActor *apCStack_c4 [3];
  CVector3f CStack_b8;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f aCStack_7c [3];
  CDemonActor *pCStack_58;
  CLightStaff *apCStack_54 [2];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CDemonActor *pCStack_34;
  CDemonActor *pCStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  CCharacter *pCStack_18;
  int iStack_14;
  
  bVar9 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  ppCVar10 = apCStack_228;
  uStack_22c = apCStack_228[3];
  apCStack_228[(uint)bVar9 * -2] = apCStack_228[(uint)bVar9 * -2 + 4];
  apCStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(CDemonActor **)((int)&CStack_214 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  core_actor_cpp_FUN_00408b80(this_ptr,ppCVar10);
  auStack_148._4_4_ = CStack_280.y;
  (&fStack_140)[(uint)bVar9 * -2] = *(float *)((int)&CStack_280 + (uint)bVar9 * -8 + 8);
  this_ptr_02 = this_ptr;
  *(uint *)((int)&CStack_13c + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4) =
       *(uint *)((int)&CStack_274 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_02->base);
  if (iVar3 != 0) {
    pCStack_30 = (CDemonActor *)0x0;
    fStack_2c = 30.0;
    pCStack_34 = core_actor_cpp_castToClassHash_FUN_0040c840
                           ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
    uVar4 = 0;
    if (pCStack_34 != (CDemonActor *)0x0) {
      pCStack_18 = (CCharacter *)0x0;
      for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->threat_count; iStack_14 = iStack_14 + 1) {
        pCVar1 = *(CDemonActor **)
                  (pCStack_18[0x1a].flames[0].base.actor_name +
                  (int)&g_CDemonSetPtr->cameras[9].fog.color_index.g);
        actor_ptr = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar1,g_CCharacterClassInfo.name_hash);
        if (actor_ptr != (CDemonActor *)0x0) {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (actor_ptr,g_CTVBatClassInfo.name_hash);
          pCVar2 = pCStack_34;
          if (pCVar5 == (CDemonActor *)0x0) {
            pfVar6 = &CStack_274.y;
            puVar7 = (uint *)((int)pCVar1 + (uint)bVar9 * -8 + 0x24);
            CStack_274.y = (pCVar1->location).position.x;
            *(uint *)((int)aCStack_268 + (uint)bVar9 * -8 + -4) = *puVar7;
            *(uint *)((int)aCStack_268 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 puVar7[(uint)bVar9 * -2 + 1];
            core_actor_cpp_FUN_00408bf0(pCVar2,pfVar6);
            afStack_a4[2] = CStack_124.y;
            afStack_a4[(uint)bVar9 * -2 + 3] = afStack_118[(uint)bVar9 * -2 + -1];
            afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2];
            in_stack_fffffcec = (double)fStack_94;
            if ((0.0 < in_stack_fffffcec) && (in_stack_fffffcec <= _DAT_005c6a32)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_a4 + 2);
              uStack_12c = apCStack_1ec[3];
              *(CDemonActor **)((int)&CStack_13c + ((uint)bVar9 * -2 + 4) * 4 + 4) =
                   apCStack_1ec[(uint)bVar9 * -2 + 4];
              *(CDemonActor **)((int)&CStack_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                   apCStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
              if ((_DAT_005c6a3a <= fStack_128) &&
                 (((int)fStack_128 < 0x3f490fdc &&
                  (CStack_28.z = SQRT(fStack_94 * fStack_94 +
                                      afStack_a4[2] * afStack_a4[2] + afStack_a4[3] * afStack_a4[3])
                  , CStack_28.z < fStack_2c)))) {
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
        afStack_24c[2] = afStack_24c[2] * (this_ptr->base).bolt_velocity;
        afStack_24c[0] = 0.0;
        afStack_24c[1] = 0.0;
        core_actor_cpp_FUN_00408b00(this_ptr,afStack_24c);
        fVar12 = 1.05;
        fVar11 = 0.95;
        afStack_1c8[3] = fStack_a8;
        afStack_1c8[(uint)bVar9 * -2 + 4] = afStack_a4[(uint)bVar9 * -2];
        *(float *)((int)&CStack_1b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar11,fVar12);
        fVar11 = (this_ptr->base).bolt_velocity;
        fStack_198 = (float)auStack_148._4_4_;
        afStack_194[(uint)bVar9 * -2] = (&fStack_140)[(uint)bVar9 * -2];
        afStack_194[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             *(float *)((int)&CStack_13c + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4);
        fStack_1b8 = fStack_1b8 - fVar12 * fVar11;
        afStack_118[1] = fStack_198 + afStack_1c8[3];
        afStack_118[3] = afStack_194[1] + CStack_1b4.x;
        afStack_118[2] = afStack_194[0] + fStack_1b8;
        afStack_d8[3] = fStack_198 + afStack_1c8[3];
        afStack_d8[(uint)bVar9 * -2 + 4] = afStack_118[(uint)bVar9 * -2 + 2];
        this_ptr_03 = g_CDemonSetPtr;
        apCStack_c4[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
             (CDemonActor *)afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3];
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_03);
        core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(g_CDemonSetPtr,1,0xff,0xff,0xff);
        core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
        pCVar1 = (this_ptr->base).carried_by_actor;
        if (pCVar1 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar1);
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&fStack_198,afStack_d8 + 3);
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,(CVector3f *)(auStack_148 + 4),
                   &g_CDemonSetPtr->collision_impact_position,0,0.75,0.75,3,0.25,0xffff);
        core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,2);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      }
      else {
        (*((pCStack_30->vtable)._ub)->getBoundingBox)(pCStack_30,SUB84(in_stack_fffffcec,0));
        pfVar6 = afStack_2b0;
        pfVar8 = &SStack_2f4.impact_direction.z;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_88 = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        fStack_84 = (float)SStack_2f4.damage_type + fStack_2b8;
        fStack_80 = (float)SStack_2f4.attacker + fStack_2b4;
        afStack_1c8[2] = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        afStack_1c8[(uint)bVar9 * -2 + 3] = afStack_a4[(uint)bVar9 * -2 + 8];
        afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
        fStack_100 = afStack_1c8[2] * _DAT_005c6a02;
        afStack_fc[0] = afStack_1c8[3] * _DAT_005c6a02;
        afStack_fc[1] = fStack_1b8 * _DAT_005c6a02;
        auStack_148._0_4_ = afStack_1c8[2] * _DAT_005c6a02;
        *(float *)(auStack_148 + (uint)bVar9 * -8 + 4) = afStack_fc[(uint)bVar9 * -2];
        (&fStack_140)[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
             afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (aCStack_184 != (CVector3f *)auStack_148) {
          aCStack_184[0].x = (float)auStack_148._0_4_;
          aCStack_184[0].y = (float)auStack_148._4_4_;
          aCStack_184[0].z = fStack_140;
        }
        fStack_250 = (((CDemonActor *)CStack_28.x)->location).position.x + aCStack_184[0].x;
        afStack_24c[0] = (((CDemonActor *)CStack_28.x)->location).position.y + aCStack_184[0].y;
        afStack_24c[1] = (((CDemonActor *)CStack_28.x)->location).position.z + aCStack_184[0].z;
        aCStack_7c[0].x = fStack_250;
        afStack_a4[(uint)bVar9 * -2 + 0xb] = afStack_24c[(uint)bVar9 * -2];
        afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xc] =
             afStack_24c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&CStack_40 != (CVector3f *)(afStack_a4 + 10)) {
          CStack_40.x = aCStack_7c[0].x;
          CStack_40.y = aCStack_7c[0].y;
          CStack_40.z = aCStack_7c[0].z;
        }
        CStack_40.y = aCStack_184[0].y * _DAT_005c6a02 + CStack_40.y;
        this_ptr_01 = (CDeformableModelInstance *)((int)CStack_28.x + 0x158);
        if (((CDeformableModelInstance *)((int)CStack_28.x + 0x158))->model_name[0] != '\0') {
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                  (this_ptr_01);
          if (this_ptr_00 != (CSkeleton *)0x0) {
            iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr_00,"Bip01 Head",1);
            if (-1 < iVar3) {
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                        (this_ptr_01,iVar3,&CStack_1fc);
              fVar11 = CStack_28.x;
              fStack_238 = CStack_1fc.x;
              afStack_24c[(uint)bVar9 * -2 + 6] =
                   *(float *)((int)&CStack_1fc + (uint)bVar9 * -8 + 4);
              afStack_24c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   *(float *)((int)&CStack_1fc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              core_actor_cpp_FUN_00408b80(fVar11);
              CStack_208.x = fStack_1f0;
              *(CDemonActor **)((int)&CStack_208 + (uint)bVar9 * -8 + 4) =
                   apCStack_1ec[(uint)bVar9 * -2];
              *(CDemonActor **)
               ((int)&CStack_208 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4) =
                   apCStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              if (&CStack_1a8 != &CStack_208) {
                CStack_1a8.x = CStack_208.x;
                CStack_1a8.y = CStack_208.y;
                CStack_1a8.z = CStack_208.z;
              }
              if ((CStack_1a8.y < CStack_40.y) && (&CStack_40 != &CStack_1a8)) {
                CStack_40.x = CStack_1a8.x;
                CStack_40.y = CStack_1a8.y;
                CStack_40.z = CStack_1a8.z;
              }
            }
          }
        }
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,&CStack_13c,&CStack_40,0,0.75,0.75,3,0.25,0xffff);
        this_ptr->chain_active = 1;
        this_ptr->chain_count = 0;
        this_ptr->chain_timer = 0.1;
        *(float *)((int)CStack_28.x + 0x3254) = 1.0;
        *(int *)((int)CStack_28.x + 0x3258) = 1;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          this_ptr->chain_targets[unaff_EDI] = (CCharacter *)0x0;
        } while (iVar3 < 4);
        this_ptr->chain_targets[this_ptr->chain_count] = (CCharacter *)CStack_28.x;
        if (&this_ptr->chain_pos != &CStack_40) {
          (this_ptr->chain_pos).x = CStack_40.x;
          (this_ptr->chain_pos).y = CStack_40.y;
          (this_ptr->chain_pos).z = CStack_40.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffcfc);
        SStack_2f4.hit_part_index =
             (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                       ((CCharacter *)this_ptr,in_stack_fffffcf4,in_stack_fffffcf8);
        SStack_2f4.impact_direction.z = (float)(this_ptr->base).ammo_type;
        SStack_2f4.damage_type = (EDamageType)this_ptr;
        SStack_2f4.wielder =
             (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
        (*(((pCStack_18->base).vtable._uc)->_uc).processDamage)(pCStack_18,&SStack_2f4);
        if (&CStack_274 != &CStack_28) {
          CStack_274.y = CStack_28.y;
          CStack_274.z = CStack_28.z;
        }
        iVar3 = 0;
        do {
          fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          pCStack_18 = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          this_ptr = (CLightStaff *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          CStack_4c.y = (float)pCStack_18;
          CStack_4c.z = fStack_1c;
          if (aCStack_268 != (CVector3f *)(apCStack_54 + 2)) {
            aCStack_268[0].y = (float)pCStack_18;
            aCStack_268[0].z = fStack_1c;
            aCStack_268[0].x = (float)this_ptr;
          }
          iVar3 = iVar3 + 1;
          CStack_4c.x = (float)this_ptr;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_274,aCStack_268,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x10);
      }
      render_alpha = 9.18341e-41;
      lifetime = 0.25;
      CStack_40.x = CStack_124.x;
      mode = 4.2039e-45;
      fVar12 = 0.75;
      fVar11 = 0.75;
      CStack_40.z = CStack_124.z;
      iVar3 = 0;
      end_position = &CStack_1b4;
      CStack_40.y = CStack_124.y + _DAT_005c6a06;
      CStack_1b4.x = CStack_124.x;
      *(uint *)((int)&CStack_1b4 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_1b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_124,end_position,iVar3,fVar11,fVar12,(int)mode,lifetime,
                 (int)render_alpha);
      afStack_a4[1] = CStack_208.x + _DAT_005c6a0a;
      afStack_a4[2] = CStack_208.y + _DAT_005c6a0e;
      afStack_a4[3] = CStack_208.z + _DAT_005c6a12;
      fStack_160 = CStack_208.x + _DAT_005c6a0a;
      apCStack_15c[(uint)bVar9 * -2] = (CDemonActor *)afStack_a4[(uint)bVar9 * -2 + 2];
      apCStack_15c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           (CDemonActor *)afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3];
      core_actor_cpp_FUN_00408b80();
      CStack_13c.x = (float)pCStack_58;
      *(CLightStaff **)((int)&CStack_13c + (uint)bVar9 * -8 + 4) = apCStack_54[(uint)bVar9 * -2];
      *(CLightStaff **)((int)&CStack_13c + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4) =
           apCStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (&CStack_214 != &CStack_13c) {
        CStack_214.x = CStack_13c.x;
        CStack_214.y = CStack_13c.y;
        CStack_214.z = CStack_13c.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_124,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      afStack_118[0] = CStack_208.x + _DAT_005c6a16;
      afStack_118[1] = CStack_208.y + _DAT_005c6a02;
      afStack_118[2] = CStack_208.z + _DAT_005c6a12;
      afStack_24c[2] = CStack_208.x + _DAT_005c6a16;
      afStack_24c[(uint)bVar9 * -2 + 3] = afStack_118[(uint)bVar9 * -2 + 1];
      afStack_24c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2];
      core_actor_cpp_FUN_00408b80();
      aCStack_184[0].x = (float)apCStack_c4[0];
      *(CDemonActor **)((int)aCStack_184 + (uint)bVar9 * -8 + 4) = apCStack_c4[(uint)bVar9 * -2 + 1]
      ;
      *(CDemonActor **)((int)aCStack_184 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           apCStack_c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2];
      if (&CStack_214 != aCStack_184) {
        CStack_214.x = aCStack_184[0].x;
        CStack_214.y = aCStack_184[0].y;
        CStack_214.z = aCStack_184[0].z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      fStack_dc = CStack_208.x + _DAT_005c6a1a;
      afStack_d8[0] = CStack_208.y + _DAT_005c6a1e;
      afStack_d8[1] = CStack_208.z + _DAT_005c6a12;
      afStack_d8[2] = CStack_208.x + _DAT_005c6a1a;
      afStack_d8[(uint)bVar9 * -2 + 3] = afStack_d8[(uint)bVar9 * -2];
      afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      CStack_b8.x = (float)pCStack_34;
      *(CDemonActor **)((int)&CStack_b8 + (uint)bVar9 * -8 + 4) = (&pCStack_30)[(uint)bVar9 * -2];
      *(float *)((int)&CStack_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           (&fStack_2c)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      if (&CStack_214 != (CVector3f *)(apCStack_c4 + 3)) {
        CStack_214.x = CStack_b8.x;
        CStack_214.y = CStack_b8.y;
        CStack_214.z = CStack_b8.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      auStack_148._0_4_ = CStack_208.x + _DAT_005c6a22;
      auStack_148._4_4_ = CStack_208.y + _DAT_005c6a26;
      fStack_140 = CStack_208.z + _DAT_005c6a2a;
      fStack_94 = CStack_208.x + _DAT_005c6a22;
      afStack_a4[(uint)bVar9 * -2 + 5] = *(float *)(auStack_148 + (uint)bVar9 * -8 + 4);
      afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6] =
           (&fStack_140)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      core_actor_cpp_FUN_00408b80();
      CStack_280.x = (float)pCStack_1cc;
      *(float *)((int)&CStack_280 + (uint)bVar9 * -8 + 4) = afStack_1c8[(uint)bVar9 * -2];
      *(float *)((int)&CStack_280 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (&CStack_214 != &CStack_280) {
        CStack_214.x = CStack_280.x;
        CStack_214.y = CStack_280.y;
        CStack_214.z = CStack_280.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_154,&CStack_124,0,0.25,0.25,3,0.25,0xffff);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff.wav",&CStack_124);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      uVar4 = 1;
      this_ptr->sfx_handle = 0;
      (this_ptr->base).fire_cooldown_timer = 1.0;
    }
    return uVar4;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",
             (CVector3f *)(auStack_148 + 4));
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 0;
}
