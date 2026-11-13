// Name: core_lightpis.cpp_CLightPis_fire_FUN_00501a70
// Address: 00501a70
// Address Range: [[00501a70, 0050247b]]
// Convention: __cdecl
// Signature: int __cdecl core_lightpis_cpp_CLightPis_fire_FUN_00501a70(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_lightpis_cpp_CLightPis_fire_FUN_00501a70(CLightPis *this_ptr)

{
  UOrientationVector *orientation;
  bool bVar1;
  uint class_name_hash;
  uint uVar2;
  int iVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  CDemonActor *pCVar5;
  CTrigger *pCVar6;
  float fVar7;
  int iVar8;
  CLocation *position;
  float *pfVar9;
  CVector3f *pCVar10;
  float *pfVar11;
  byte bVar12;
  float *unaff_retaddr;
  CDemonActor *in_stack_00000010;
  float afStackY_1118 [6];
  CCharacter *apCStackY_1100 [7];
  float afStackY_10e4 [51];
  float *apfStackY_1018 [892];
  CDemonSet *pCVar13;
  CBoundingBox3D *out_box;
  double dVar14;
  CDemonActor *in_stack_fffffdf8;
  CCharacter *in_stack_fffffdfc;
  int iStack_1fc;
  CBoundingBox3D *in_stack_fffffe0c;
  CDemonActor *in_stack_fffffe14;
  float in_stack_fffffe18;
  byte auStack_1a4 [20];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float afStack_184 [7];
  float fStack_168;
  CLightPis *pCStack_164;
  float fStack_160;
  CDemonActor *pCStack_15c;
  CVector3f CStack_154;
  CVector3f CStack_148;
  float afStack_13c [3];
  float fStack_130;
  float afStack_12c [5];
  float fStack_118;
  CCharacter *apCStack_114 [6];
  CVector3f CStack_fc;
  float afStack_f0 [5];
  float fStack_dc;
  float afStack_d8 [7];
  uint uStack_bc;
  float afStack_b8 [4];
  byte auStack_a8 [12];
  float afStack_9c [6];
  CCharacter *pCStack_84;
  float afStack_80 [4];
  float afStack_70 [12];
  float fStack_40;
  float afStack_3c [3];
  CCharacter *pCStack_30;
  CTrigger *pCStack_2c;
  float *pfStack_28;
  int iStack_24;
  int iStack_20;
  CCharacter *pCStack_1c;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)this_ptr,"shotgun-noammo.wav",
               (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20));
  }
  else if (_DAT_00603170 <= this_ptr->charge_level) {
    fVar7 = (this_ptr->base).bolt_velocity;
    this_ptr->charge_level = 0.0;
    this_ptr->beam_length = fVar7;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    uStack_bc = apCStack_114[2];
    afStack_b8[(uint)bVar12 * -2] = (float)apCStack_114[(uint)bVar12 * -2 + 3];
    afStack_b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         (float)apCStack_114[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    afStack_b8[2] = afStack_b8[2] + _DAT_005e6fee;
    core_actor_cpp_FUN_00408b40(this_ptr,afStack_b8);
    auStack_a8._8_4_ = fStack_130;
    afStack_9c[(uint)bVar12 * -2] = afStack_12c[(uint)bVar12 * -2];
    afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_12c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    afStack_9c[4] = (this_ptr->base).bolt_velocity;
    afStack_9c[2] = 0.0;
    afStack_9c[3] = 0.0;
    afStack_3c[2] = afStack_9c[4];
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_9c + 2);
    uVar2 = auStack_a8._8_4_;
    CStack_fc.z = afStack_80[1];
    afStack_f0[(uint)bVar12 * -2] = afStack_80[(uint)bVar12 * 0xfffffffe + 2];
    afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_80[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 3];
    fStack_dc = (float)uVar2 + CStack_fc.z;
    afStack_d8[0] = afStack_9c[0] + afStack_f0[0];
    afStack_d8[1] = afStack_9c[1] + afStack_f0[1];
    afStack_70[0] = (float)uVar2 + CStack_fc.z;
    afStack_80[(uint)bVar12 * 0xfffffffe + 5] = afStack_d8[(uint)bVar12 * -2];
    afStack_80[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 6] =
         afStack_d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    fStack_118 = (float)auStack_a8._8_4_;
    apCStack_114[(uint)bVar12 * -2] = (CCharacter *)afStack_9c[(uint)bVar12 * -2];
    pCVar13 = g_CDemonSetPtr;
    apCStack_114[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         (CCharacter *)afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(pCVar13);
    core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00559310(g_CDemonSetPtr,1,0xff,0xff,0xff);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00559210(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    pCVar5 = (this_ptr->base).carried_by_actor;
    if (pCVar5 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar5);
    }
    core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
    iVar3 = 0;
    do {
      this_ptr_00 = (CCharacter *)
                    core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,&fStack_118,afStack_80 + 4);
      class_name_hash = g_CCharacterClassInfo.name_hash;
      dVar14 = (double)(float)this_ptr_00;
      if ((dVar14 < 0.0) || (1.0 < dVar14)) break;
      this_ptr->beam_length = (this_ptr->base).bolt_velocity * (float)this_ptr_00;
      pCStack_1c = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (g_CDemonSetPtr->collision_actor,class_name_hash);
      if ((pCStack_1c != (CCharacter *)0x0) &&
         (EVar4 = (*(((pCStack_1c->base).vtable._uc)->_uc).getDeathState)(pCStack_1c),
         0 < (int)EVar4)) {
        pCStack_18 = (CCharacter *)0x0;
      }
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar6 = (CTrigger *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_2c = pCVar6;
      if (pCStack_1c != (CCharacter *)0x0) {
        iVar8 = (*(((pCStack_1c->base).vtable._uc)->_uc).isInvulnerable)(pCStack_1c);
        pCVar13 = g_CDemonSetPtr;
        if ((iVar8 != 0) && (iVar3 == 0)) {
          this_ptr->charge_level = _DAT_00603170;
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(pCVar13);
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          return 0;
        }
        break;
      }
      if (pCVar5 == (CDemonActor *)0x0) {
        if (pCVar6 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(pCVar6);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                            (pCVar6,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            fVar7 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar14),0),
                                      (int)((ulonglong)dVar14 >> 0x20));
            dVar14 = __BITCAST_DOUBLE(CONCAT44(pCVar6,0x501f0f));
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(pCVar6,fVar7);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_2c->base);
          break;
        }
      }
      else {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
    core_lightpis_cpp_FUN_005017f0(this_ptr);
    iStack_20 = 0;
    pfStack_28 = afStack_184;
    iStack_24 = 0;
    do {
      out_box = (CBoundingBox3D *)((ulonglong)dVar14 >> 0x20);
      if (g_CDemonSetPtr->character_count <= iStack_20) {
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                  (0x02C82A60,(CDemonActor *)this_ptr,"ecre.wav",
                   (CVector3f *)(auStack_a8 + 8));
        sound_sndmain_cpp_setSfxVolume_FUN_00573950(this_ptr->sfx_handle,0x40000000);
        fVar7 = _DAT_00603170;
        this_ptr->fire_flash_pending = 1;
        this_ptr->hit_enemy = 1;
        (this_ptr->base).fire_cooldown_timer = fVar7;
        return 1;
      }
      pCStack_30 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
      iVar3 = (*(((pCStack_30->base).vtable._uc)->_uc).isInvulnerable)(pCStack_30);
      pCVar6 = pCStack_2c;
      if ((iVar3 == 0) &&
         ((((iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&pCStack_2c->base,"CGhoul"),
            iVar3 != 0 ||
            (iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CTVBat"),
            iVar3 != 0)) ||
           (iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CBatCreature"),
           iVar3 != 0)) ||
          ((iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CWerewolf"),
           iVar3 != 0 ||
           (iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CSvetlana"),
           iVar3 != 0)))))) {
LAB_00501f69:
        pCVar6 = pCStack_2c;
        (*((pCStack_2c->base).vtable._ub)->getBoundingBox)(&pCStack_2c->base,out_box);
        orientation = &(pCVar6->base).orient;
        dVar14 = __BITCAST_DOUBLE(CONCAT44(&CStack_154,orientation));
        position = &(pCVar6->base).location;
        pfVar9 = afStack_13c;
        pCVar10 = &CStack_154;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar10->x = *pfVar9;
          pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
          pCVar10 = (CVector3f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
        }
        iVar3 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
                          (&g_CDemonLightInstance.base,&position->position,&orientation->vec,
                           &CStack_154,&CStack_148);
        if (iVar3 != 0) {
          dVar14 = __BITCAST_DOUBLE(CONCAT44("%s in volume\n",g_CConsolePtr));
          engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s in volume\n");
          iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          afStack_b8[0] = *(float *)(iVar3 + 0x20) - (position->position).x;
          afStack_b8[1] = *(float *)(iVar3 + 0x24) - (pCVar6->base).location.position.y;
          afStack_b8[2] = *(float *)(iVar3 + 0x28) - (pCVar6->base).location.position.z;
          fStack_40 = afStack_b8[0];
          afStack_3c[(uint)bVar12 * -2] = afStack_b8[(uint)bVar12 * -2 + 1];
          afStack_3c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
          if (SQRT(afStack_3c[1] * afStack_3c[1] +
                   fStack_40 * fStack_40 + afStack_3c[0] * afStack_3c[0]) < (float)_DAT_005e6ffa) {
            core_actor_cpp_FUN_00408bb0();
            afStack_80[1] = CStack_fc.z;
            afStack_80[(uint)bVar12 * 0xfffffffe + 2] = afStack_f0[(uint)bVar12 * -2];
            afStack_80[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 3] =
                 afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            afStack_80[2] = 0.0;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_80 + 1);
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&iStack_1fc);
            dVar14 = 3.590922762109807e-307;
            in_stack_fffffe14 =
                 (CDemonActor *)
                 (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,in_stack_fffffdf8,(int)in_stack_fffffdfc);
            in_stack_fffffdf8 = (CDemonActor *)0x5023af;
            in_stack_fffffdfc = pCStack_18;
            (*(((pCStack_18->base).vtable._uc)->_uc).processDamage)
                      (pCStack_18,(SDamageInfo *)&stack0xfffffe10);
          }
          iStack_1fc = 0x502091;
          core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
          iStack_1fc = 0x5020b3;
          (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                    ((CDemonActor *)this_ptr_00,in_stack_fffffe0c);
          pfVar9 = &CStack_154.y;
          pfVar11 = &fStack_168;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar11 = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
            pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
          }
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_fc);
          CStack_fc.x = fStack_168 + *unaff_retaddr;
          CStack_fc.y = (float)pCStack_164 + unaff_retaddr[1];
          pCVar10 = (CVector3f *)auStack_a8;
          CStack_fc.z = fStack_160 + unaff_retaddr[2];
          pCStack_30 = (CCharacter *)(fStack_168 + *unaff_retaddr);
          (&pCStack_2c)[(uint)bVar12 * -2] = (CTrigger *)afStack_f0[(uint)bVar12 * -2 + -2];
          (&pfStack_28)[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
               (float *)afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1];
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(pCVar10);
          auStack_a8._0_4_ = (float)pCStack_30 * _DAT_005e6ff2;
          auStack_a8._4_4_ = (float)pCStack_2c * _DAT_005e6ff2;
          auStack_a8._8_4_ = (float)pfStack_28 * _DAT_005e6ff2;
          afStack_3c[0] = (float)pCStack_30 * _DAT_005e6ff2;
          afStack_3c[(uint)bVar12 * -2 + 1] = *(float *)(auStack_a8 + (uint)bVar12 * -8 + 4);
          afStack_3c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2] =
               *(float *)(auStack_a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          core_actor_cpp_FUN_00408b40();
          pCStack_18 = pCStack_84;
          (&fStack_14)[(uint)bVar12 * -2] = afStack_80[(uint)bVar12 * -2];
          *(float *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
               afStack_80[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 1];
          iVar3 = 0;
          bVar1 = false;
          do {
            iStack_1fc = 0x5021d4;
            core_setcolid_cpp_FUN_00557300();
            pCVar5 = g_CDemonSetPtr->collision_actor;
            if (pCVar5 == (CDemonActor *)0x0) break;
            if (pCVar5 == in_stack_00000010) {
              bVar1 = true;
              break;
            }
            iVar8 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar5,"CTrigger || CGlass");
            if (iVar8 == 0) break;
            iVar3 = iVar3 + 1;
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
          } while (iVar3 < 3);
          in_stack_fffffe0c = (CBoundingBox3D *)0x5021f6;
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
          if (bVar1) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_1a4);
            in_stack_fffffe0c = (CBoundingBox3D *)0x50221b;
            iVar3 = core_lightpis_cpp_FUN_005016d0();
            if (iVar3 == 0) {
              auStack_1a4._4_4_ = 0.1;
            }
            else {
              in_stack_fffffe0c = (CBoundingBox3D *)0x502239;
              auStack_1a4._16_4_ =
                   (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                             ((CCharacter *)this_ptr,in_stack_fffffe14,(int)in_stack_fffffe18);
            }
            fStack_168 = 1.5134e-43;
            fStack_190 = 0.0;
            afStack_184[0] = 0.0;
            fStack_188 = 0.0;
            fStack_18c = 0.0;
            pCStack_164 = this_ptr;
            pCStack_15c = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr)
            ;
            in_stack_fffffe18 = 7.359275e-39;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                      (this_ptr_00,(SDamageInfo *)(auStack_1a4 + 0x10));
          }
        }
      }
      else {
        dVar14 = __BITCAST_DOUBLE(CONCAT44(out_box,pCStack_2c));
        iVar3 = core_lightpis_cpp_FUN_005016d0(pCStack_2c);
        out_box = (CBoundingBox3D *)((ulonglong)dVar14 >> 0x20);
        if (iVar3 != 0) goto LAB_00501f69;
      }
      iStack_20 = iStack_20 + 1;
      iStack_24 = iStack_24 + 4;
    } while( true );
  }
  return 0;
}
