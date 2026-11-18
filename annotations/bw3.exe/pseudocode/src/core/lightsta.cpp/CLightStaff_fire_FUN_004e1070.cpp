// Name: core_lightsta.cpp_CLightStaff_fire_FUN_004e1070
// Address: 004e1070
// Address Range: [[004e1070, 004e2027]]
// Convention: __cdecl
// Signature: int __cdecl core_lightsta_cpp_CLightStaff_fire_FUN_004e1070(CLightStaff *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_lightsta_cpp_CLightStaff_fire_FUN_004e1070(CLightStaff *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *actor_ptr;
  CDemonActor *pCVar3;
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  float *pfVar4;
  uint *puVar5;
  int unaff_EDI;
  float *pfVar6;
  byte bVar7;
  float afStackY_1268 [108];
  CDemonActor *pCStackY_10b8;
  float afStackY_10b4 [863];
  CVector3f *pCVar8;
  CLightStaff *this_ptr_02;
  CDemonSet *this_ptr_03;
  double in_stack_fffffcec;
  CDemonActor *in_stack_fffffcf4;
  int in_stack_fffffcf8;
  float fVar9;
  float fVar10;
  float mode;
  float lifetime;
  float render_alpha;
  SDamageInfo SStack_2f4;
  float fStack_2b8;
  float fStack_2b4;
  float afStack_2b0 [12];
  byte auStack_280 [8];
  float fStack_278;
  byte auStack_274 [8];
  float fStack_26c;
  CVector3f aCStack_268 [2];
  float fStack_250;
  byte auStack_24c [12];
  float afStack_240 [2];
  CVector3f CStack_238;
  uint uStack_22c;
  CVector3f CStack_228;
  uint uStack_21c;
  CDemonActor *pCStack_218;
  CVector3f CStack_214;
  CVector3f CStack_208;
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  CVector3f CStack_1e0;
  CVector3f CStack_1cc;
  float fStack_1c0;
  float afStack_1bc [2];
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  CVector3f CStack_198;
  CVector3f aCStack_184 [3];
  CVector3f CStack_160;
  CVector3f CStack_154;
  byte auStack_148 [8];
  float fStack_140;
  CVector3f CStack_13c;
  float fStack_12c;
  float fStack_128;
  byte auStack_124 [8];
  float afStack_11c [4];
  float fStack_10c;
  float fStack_100;
  float afStack_fc [8];
  float fStack_dc;
  float afStack_d8 [2];
  byte auStack_d0 [8];
  CDemonActor *pCStack_c8;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_a8;
  byte auStack_9c [12];
  float afStack_90 [4];
  float fStack_80;
  CVector3f aCStack_7c [3];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  CCharacter *pCStack_18;
  int iStack_14;
  
  bVar7 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pCVar8 = &CStack_228;
  uStack_22c = uStack_21c;
  *(CDemonActor **)((int)&CStack_228 + (uint)bVar7 * -8) = (&pCStack_218)[(uint)bVar7 * -2];
  *(uint *)((int)&CStack_228 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_214 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,pCVar8,(CVector3f *)(auStack_280 + 4));
  auStack_148._4_4_ = auStack_280._4_4_;
  (&fStack_140)[(uint)bVar7 * -2] = (&fStack_278)[(uint)bVar7 * -2];
  this_ptr_02 = this_ptr;
  *(uint *)((int)&CStack_13c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
       *(uint *)(auStack_274 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_02->base);
  if (iVar2 != 0) {
    CStack_34.y = 0.0;
    CStack_34.z = 30.0;
    CStack_34.x = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                   ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
    iVar2 = 0;
    if ((CDemonActor *)CStack_34.x != (CDemonActor *)0x0) {
      pCStack_18 = (CCharacter *)0x0;
      for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->threat_count; iStack_14 = iStack_14 + 1) {
        pCVar1 = *(CDemonActor **)
                  (pCStack_18[0x1a].flames[0].base.actor_name +
                  (int)&g_CDemonSetPtr->cameras[9].fog.color_index.g);
        actor_ptr = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar1,g_CCharacterClassInfo.name_hash);
        if (actor_ptr != (CDemonActor *)0x0) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (actor_ptr,g_CTVBatClassInfo.name_hash);
          fVar9 = CStack_34.x;
          if (pCVar3 == (CDemonActor *)0x0) {
            pCVar8 = (CVector3f *)(auStack_274 + 4);
            puVar5 = (uint *)((int)pCVar1 + (uint)bVar7 * -8 + 0x24);
            auStack_274._4_4_ = (pCVar1->location).position.x;
            (&fStack_26c)[(uint)bVar7 * 0xfffffffe] = (float)*puVar5;
            *(uint *)((int)aCStack_268 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
                 puVar5[(uint)bVar7 * -2 + 1];
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      ((CDemonActor *)fVar9,pCVar8,(CVector3f *)(auStack_124 + 4));
            auStack_9c._0_4_ = auStack_124._4_4_;
            *(float *)(auStack_9c + (uint)bVar7 * -8 + 4) = afStack_11c[(uint)bVar7 * -2];
            afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1] =
                 afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            in_stack_fffffcec = (double)(float)auStack_9c._8_4_;
            if ((0.0 < in_stack_fffffcec) && (in_stack_fffffcec <= 30)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        ((CVector3f *)auStack_9c,&CStack_1e0);
              fStack_12c = CStack_1e0.x;
              *(uint *)((int)&CStack_13c + ((uint)bVar7 * -2 + 4) * 4 + 4) =
                   *(uint *)((int)&CStack_1e0 + (uint)bVar7 * -8 + 4);
              *(uint *)(auStack_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)((int)&CStack_1e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              if ((-0.7853982f <= fStack_128) &&
                 (((int)fStack_128 < 0x3f490fdc &&
                  (CStack_28.z = SQRT((float)auStack_9c._8_4_ * (float)auStack_9c._8_4_ +
                                      (float)auStack_9c._0_4_ * (float)auStack_9c._0_4_ +
                                      (float)auStack_9c._4_4_ * (float)auStack_9c._4_4_),
                  CStack_28.z < CStack_34.z)))) {
                CStack_34.y = (float)actor_ptr;
                CStack_34.z = CStack_28.z;
              }
            }
          }
        }
        pCStack_18 = (CCharacter *)((pCStack_18->base).actor_name + 4);
      }
      if ((CDemonActor *)CStack_34.y == (CDemonActor *)0x0) {
        auStack_24c._8_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
        auStack_24c._8_4_ = (float)auStack_24c._8_4_ * (this_ptr->base).bolt_velocity;
        auStack_24c._0_4_ = 0.0;
        auStack_24c._4_4_ = 0.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                  ((CDemonActor *)this_ptr,(CVector3f *)auStack_24c,&CStack_a8);
        fVar10 = 1.05;
        fVar9 = 0.95;
        afStack_1bc[0] = CStack_a8.x;
        afStack_1bc[(uint)bVar7 * -2 + 1] = *(float *)(auStack_9c + (uint)bVar7 * -8 + -8);
        *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(auStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
        fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar9,fVar10);
        fVar9 = (this_ptr->base).bolt_velocity;
        CStack_198.x = (float)auStack_148._4_4_;
        *(float *)((int)&CStack_198 + (uint)bVar7 * -8 + 4) = (&fStack_140)[(uint)bVar7 * -2];
        *(uint *)((int)&CStack_198 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_13c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
        afStack_1bc[1] = afStack_1bc[1] - fVar10 * fVar9;
        afStack_11c[2] = CStack_198.x + afStack_1bc[0];
        fStack_10c = CStack_198.z + CStack_1b4.x;
        afStack_11c[3] = CStack_198.y + afStack_1bc[1];
        auStack_d0._4_4_ = CStack_198.x + afStack_1bc[0];
        (&pCStack_c8)[(uint)bVar7 * -2] = (CDemonActor *)afStack_11c[(uint)bVar7 * -2 + 3];
        this_ptr_03 = g_CDemonSetPtr;
        *(float *)((int)&CStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_03);
        core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(g_CDemonSetPtr,1,0xff,0xff,0xff);
        core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
        pCVar1 = (this_ptr->base).carried_by_actor;
        if (pCVar1 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar1);
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                  (g_CDemonSetPtr,&CStack_198,(CVector3f *)(auStack_d0 + 4));
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (g_CFireEffect_PTR_005fc5a0,(CVector3f *)(auStack_148 + 4),
                   &g_CDemonSetPtr->collision_impact_position,0,0.75,0.75,3,0.25,0xffff);
        core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                  (g_CFireEffect_PTR_005fc5a0,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,2);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      }
      else {
        (*((UActorVTable *)((int)CStack_34.y + 0x154))->_ub->getBoundingBox)
                  ((CDemonActor *)CStack_34.y,SUB84(in_stack_fffffcec,0));
        pfVar4 = afStack_2b0;
        pfVar6 = &SStack_2f4.impact_direction.z;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar6 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
        }
        afStack_90[2] = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        afStack_90[3] = (float)SStack_2f4.damage_type + fStack_2b8;
        fStack_80 = (float)SStack_2f4.attacker + fStack_2b4;
        fStack_1c0 = SStack_2f4.dismember_prob + (float)SStack_2f4.wielder;
        afStack_1bc[(uint)bVar7 * -2] = afStack_90[(uint)bVar7 * -2 + 3];
        afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        fStack_100 = fStack_1c0 * 0.5f;
        afStack_fc[0] = afStack_1bc[0] * 0.5f;
        afStack_fc[1] = afStack_1bc[1] * 0.5f;
        auStack_148._0_4_ = fStack_1c0 * 0.5f;
        *(float *)(auStack_148 + (uint)bVar7 * -8 + 4) = afStack_fc[(uint)bVar7 * -2];
        (&fStack_140)[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
             afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (aCStack_184 != (CVector3f *)auStack_148) {
          aCStack_184[0].x = (float)auStack_148._0_4_;
          aCStack_184[0].y = (float)auStack_148._4_4_;
          aCStack_184[0].z = fStack_140;
        }
        fStack_250 = (((CDemonActor *)CStack_28.x)->location).position.x + aCStack_184[0].x;
        auStack_24c._0_4_ = (((CDemonActor *)CStack_28.x)->location).position.y + aCStack_184[0].y;
        auStack_24c._4_4_ = (((CDemonActor *)CStack_28.x)->location).position.z + aCStack_184[0].z;
        aCStack_7c[0].x = fStack_250;
        afStack_90[(uint)bVar7 * -2 + 6] = *(float *)(auStack_24c + (uint)bVar7 * -8);
        afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             *(float *)(auStack_24c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
        if (&CStack_40 != (CVector3f *)(afStack_90 + 5)) {
          CStack_40.x = aCStack_7c[0].x;
          CStack_40.y = aCStack_7c[0].y;
          CStack_40.z = aCStack_7c[0].z;
        }
        CStack_40.y = aCStack_184[0].y * 0.5f + CStack_40.y;
        this_ptr_01 = (CDeformableModelInstance *)((int)CStack_28.x + 0x158);
        if (((CDeformableModelInstance *)((int)CStack_28.x + 0x158))->model_name[0] != '\0') {
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                  (this_ptr_01);
          if (this_ptr_00 != (CSkeleton *)0x0) {
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr_00,"Bip01 Head",1);
            if (-1 < iVar2) {
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                        (this_ptr_01,iVar2,&CStack_1fc);
              fVar9 = CStack_28.x;
              pCVar8 = &CStack_238;
              CStack_238.x = CStack_1fc.x;
              *(uint *)((int)&CStack_238 + (uint)bVar7 * -8 + 4) =
                   *(uint *)((int)&CStack_1fc + (uint)bVar7 * -8 + 4);
              *(uint *)((int)&CStack_238 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                   *(uint *)((int)&CStack_1fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)fVar9,pCVar8,&CStack_1f0);
              CStack_208.x = CStack_1f0.x;
              *(uint *)((int)&CStack_208 + (uint)bVar7 * -8 + 4) =
                   *(uint *)((int)&CStack_1f0 + (uint)bVar7 * -8 + 4);
              *(uint *)((int)&CStack_208 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4)
                   = *(uint *)((int)&CStack_1f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
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
                  (g_CFireEffect_PTR_005fc5a0,&CStack_13c,&CStack_40,0,0.75,0.75,3,0.25,0xffff);
        this_ptr->chain_active = 1;
        this_ptr->chain_count = 0;
        this_ptr->chain_timer = 0.1;
        *(float *)((int)CStack_28.x + 0x3254) = 1.0;
        *(int *)((int)CStack_28.x + 0x3258) = 1;
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          this_ptr->chain_targets[unaff_EDI] = (CCharacter *)0x0;
        } while (iVar2 < 4);
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
        if ((CVector3f *)auStack_274 != &CStack_28) {
          auStack_274._4_4_ = CStack_28.y;
          fStack_26c = CStack_28.z;
        }
        iVar2 = 0;
        do {
          fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          pCStack_18 = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          this_ptr = (CLightStaff *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          CStack_4c.y = (float)pCStack_18;
          CStack_4c.z = fStack_1c;
          if (aCStack_268 != &CStack_4c) {
            aCStack_268[0].y = (float)pCStack_18;
            aCStack_268[0].z = fStack_1c;
            aCStack_268[0].x = (float)this_ptr;
          }
          iVar2 = iVar2 + 1;
          CStack_4c.x = (float)this_ptr;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (g_CFireEffect_PTR_005fc5a0,(CVector3f *)auStack_274,aCStack_268,0x20000,0x10000
                     ,1,0xffff);
        } while (iVar2 < 0x10);
      }
      render_alpha = 9.18341e-41;
      lifetime = 0.25;
      CStack_40.x = (float)auStack_124._0_4_;
      mode = 4.2039e-45;
      fVar10 = 0.75;
      fVar9 = 0.75;
      CStack_40.z = afStack_11c[0];
      iVar2 = 0;
      pCVar8 = &CStack_1b4;
      CStack_40.y = (float)auStack_124._4_4_ + 30.0f;
      CStack_1b4.x = (float)auStack_124._0_4_;
      *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,(CVector3f *)auStack_124,pCVar8,iVar2,fVar9,fVar10,
                 (int)mode,lifetime,(int)render_alpha);
      pCVar8 = &CStack_160;
      CStack_a8.z = CStack_208.x + 0.73f;
      auStack_9c._0_4_ = CStack_208.y + 0.28f;
      auStack_9c._4_4_ = CStack_208.z + -0.03f;
      CStack_160.x = CStack_208.x + 0.73f;
      *(uint *)((int)&CStack_160 + (uint)bVar7 * -8 + 4) =
           *(uint *)(auStack_9c + (uint)bVar7 * -8);
      *(uint *)((int)&CStack_160 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)(auStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar8,&CStack_58);
      CStack_13c.x = CStack_58.x;
      *(uint *)((int)&CStack_13c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_58 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_13c + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
           *(uint *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_214 != &CStack_13c) {
        CStack_214.x = CStack_13c.x;
        CStack_214.y = CStack_13c.y;
        CStack_214.z = CStack_13c.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,(CVector3f *)auStack_124,&CStack_214,0,0.25,0.25,3,0.25,
                 0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      pCVar8 = (CVector3f *)(auStack_24c + 8);
      afStack_11c[1] = CStack_208.x + -0.71f;
      afStack_11c[2] = CStack_208.y + 0.5f;
      afStack_11c[3] = CStack_208.z + -0.03f;
      auStack_24c._8_4_ = CStack_208.x + -0.71f;
      afStack_240[(uint)bVar7 * -2] = afStack_11c[(uint)bVar7 * -2 + 2];
      afStack_240[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar8,&CStack_c4);
      aCStack_184[0].x = CStack_c4.x;
      *(uint *)((int)aCStack_184 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_c4 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)aCStack_184 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_214 != aCStack_184) {
        CStack_214.x = aCStack_184[0].x;
        CStack_214.y = aCStack_184[0].y;
        CStack_214.z = aCStack_184[0].z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      fStack_dc = CStack_208.x + 0.37f;
      afStack_d8[0] = CStack_208.y + -0.4f;
      afStack_d8[1] = CStack_208.z + -0.03f;
      auStack_d0._0_4_ = CStack_208.x + 0.37f;
      *(float *)(auStack_d0 + (uint)bVar7 * -8 + 4) = afStack_d8[(uint)bVar7 * -2];
      (&pCStack_c8)[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
           (CDemonActor *)afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,(CVector3f *)auStack_d0,&CStack_34);
      CStack_b8.x = CStack_34.x;
      *(uint *)((int)&CStack_b8 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_214 != &CStack_b8) {
        CStack_214.x = CStack_b8.x;
        CStack_214.y = CStack_b8.y;
        CStack_214.z = CStack_b8.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      if (&CStack_154 != &CStack_214) {
        CStack_154.x = CStack_214.x;
        CStack_154.y = CStack_214.y;
        CStack_154.z = CStack_214.z;
      }
      pCVar8 = (CVector3f *)(auStack_9c + 8);
      auStack_148._0_4_ = CStack_208.x + -0.76f;
      auStack_148._4_4_ = CStack_208.y + -0.63f;
      fStack_140 = CStack_208.z + -0.05f;
      auStack_9c._8_4_ = CStack_208.x + -0.76f;
      afStack_90[(uint)bVar7 * -2] = *(float *)(auStack_148 + (uint)bVar7 * -8 + 4);
      afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           (&fStack_140)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar8,&CStack_1cc);
      auStack_280._0_4_ = CStack_1cc.x;
      *(uint *)(auStack_280 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_1cc + (uint)bVar7 * -8 + 4);
      (&fStack_278)[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
           *(float *)((int)&CStack_1cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_214 != (CVector3f *)auStack_280) {
        CStack_214.x = (float)auStack_280._0_4_;
        CStack_214.y = (float)auStack_280._4_4_;
        CStack_214.z = fStack_278;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,&CStack_154,&CStack_214,0,0.25,0.25,3,0.25,0xffff);
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (g_CFireEffect_PTR_005fc5a0,&CStack_154,(CVector3f *)auStack_124,0,0.25,0.25,3,0.25,
                 0xffff);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_lightningstaff.wav",
                 (CVector3f *)auStack_124);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      iVar2 = 1;
      this_ptr->sfx_handle = 0;
      (this_ptr->base).fire_cooldown_timer = 1.0;
    }
    return iVar2;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_nomana.wav",
             (CVector3f *)(auStack_148 + 4));
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 0;
}
