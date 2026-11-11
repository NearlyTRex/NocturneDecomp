// Name: core_lightgun.cpp_CLightGun_fire_FUN_004e2e70
// Address: 004e2e70
// Address Range: [[004e2e70, 004e38cc]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004e2e70(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004e2e70(CLightGun *this_ptr)

{
  UOrientationVector *orientation;
  CCharacter *pCVar1;
  bool bVar2;
  CDemonActor *pCVar3;
  CTrigger *pCVar4;
  float fVar5;
  int iVar6;
  CLocation *position;
  float *pfVar7;
  CDemonActor *unaff_EDI;
  int iVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  byte bVar11;
  float *unaff_retaddr;
  CDemonActor *in_stack_0000000c;
  float afStackY_110c [953];
  CDemonSet *pCVar12;
  CBoundingBox3D *out_box;
  double dVar13;
  CDemonActor *in_stack_fffffdf8;
  CCharacter *in_stack_fffffdfc;
  int iStack_1fc;
  CDemonActor *in_stack_fffffe0c;
  CDemonActor *in_stack_fffffe14;
  float in_stack_fffffe18;
  byte auStack_1a4 [20];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float afStack_184 [5];
  float fStack_170;
  CVector3f CStack_16c;
  CVector3f CStack_160;
  float afStack_154 [9];
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  uint uStack_124;
  float afStack_120 [5];
  float afStack_10c [6];
  float fStack_f4;
  float afStack_f0 [2];
  CVector3f CStack_e8;
  float fStack_d8;
  float afStack_d4 [4];
  uint uStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  float fStack_7c;
  CVector3f CStack_78;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_4c;
  float afStack_48 [5];
  CCharacter *pCStack_34;
  CTrigger *pCStack_30;
  int iStack_2c;
  float *pfStack_28;
  CVector3f CStack_24;
  uint uStack_18;
  CCharacter *pCStack_14;
  
  bVar11 = 0;
  if (this_ptr->charge_level < _DAT_005f95d0) {
    return 0;
  }
  fVar5 = (this_ptr->base).bolt_velocity;
  this_ptr->charge_level = 0.0;
  this_ptr->beam_length = fVar5;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_9c[1] = (float)uStack_124;
  afStack_9c[(uint)bVar11 * -2 + 2] = afStack_120[(uint)bVar11 * -2];
  afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
       afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_8c = fStack_8c + _DAT_005dc0a6;
  core_actor_cpp_FUN_00408d70(this_ptr,afStack_9c + 2);
  CStack_e8.x = afStack_120[2];
  *(float *)((int)&CStack_e8 + (uint)bVar11 * -8 + 4) = afStack_120[(uint)bVar11 * -2 + 3];
  *(float *)((int)&CStack_e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  fStack_128 = (this_ptr->base).bolt_velocity;
  uStack_130 = 0;
  uStack_12c = 0;
  core_actor_cpp_FUN_00408cf0(this_ptr,&uStack_130);
  fVar5 = CStack_e8.x;
  afStack_6c[2] = CStack_78.z;
  afStack_6c[(uint)bVar11 * -2 + 3] = afStack_6c[(uint)bVar11 * -2];
  afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_7c = fVar5 + afStack_6c[2];
  CStack_78.x = CStack_e8.y + afStack_6c[3];
  CStack_78.y = CStack_e8.z + fStack_5c;
  afStack_10c[0] = fVar5 + afStack_6c[2];
  afStack_120[(uint)bVar11 * -2 + 6] = *(float *)((int)&CStack_78 + (uint)bVar11 * -8);
  afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -2];
  fStack_f4 = CStack_e8.x;
  afStack_f0[(uint)bVar11 * -2] = *(float *)((int)&CStack_e8 + (uint)bVar11 * -8 + 4);
  pCVar12 = g_CDemonSetPtr;
  afStack_f0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       *(float *)((int)&CStack_e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(pCVar12);
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(g_CDemonSetPtr,1,0xff,0xff,0xff);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00537df0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar3 = (this_ptr->base).carried_by_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar3);
  }
  iVar8 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
  do {
    pCStack_14 = (CCharacter *)
                 core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&fStack_f4,afStack_120 + 5);
    dVar13 = (double)(float)pCStack_14;
    if ((dVar13 < 0.0) || (1.0 < dVar13)) break;
    this_ptr->beam_length = (this_ptr->base).bolt_velocity * (float)pCStack_14;
    CStack_24.y = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                   (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash)
    ;
    if ((CStack_24.y != 0.0) &&
       (iVar6 = (**(code **)(*(int *)((int)CStack_24.y + 0x2b0) + 0x114))(CStack_24.y), 0 < iVar6))
    {
      CStack_24.y = 0.0;
    }
    pCVar3 = (CDemonActor *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = (CTrigger *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_30 = pCVar4;
    if (CStack_24.y != 0.0) {
      iVar6 = (**(code **)(*(int *)((int)CStack_24.y + 0x2b0) + 0xe8))(CStack_24.y);
      pCVar12 = g_CDemonSetPtr;
      if ((iVar6 != 0) && (iVar8 == 0)) {
        this_ptr->charge_level = _DAT_005f95d0;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(pCVar12);
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCVar4 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(pCVar4);
        iVar8 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                          (pCVar4,(CDemonActor *)this_ptr);
        if (iVar8 != 0) {
          fVar5 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar13),0),
                                    (int)((ulonglong)dVar13 >> 0x20));
          dVar13 = __BITCAST_DOUBLE(CONCAT44(pCVar4,0x4e331b));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar4,fVar5);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_30->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_004e2bf0(this_ptr);
  CStack_24.x = 0.0;
  pfStack_28 = afStack_184;
  iStack_2c = 0;
  do {
    out_box = (CBoundingBox3D *)((ulonglong)dVar13 >> 0x20);
    if (g_CDemonSetPtr->character_count <= (int)CStack_24.x) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"cre-fire.wav",&CStack_e8);
      sound_sndmain_cpp_FUN_00550f20(this_ptr->sfx_handle,0x40000000);
      this_ptr->fire_flash_pending = 1;
      this_ptr->hit_enemy = 1;
      core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr->base);
      return 1;
    }
    pCVar1 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_2c);
    pCStack_34 = pCVar1;
    iVar8 = (*(((pCVar1->base).vtable._uc)->_uc).isInvulnerable)(pCVar1);
    if (((iVar8 == 0) &&
        ((((iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CGhoul"),
           iVar8 != 0 ||
           (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CTVBat"),
           iVar8 != 0)) ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CBatCreature"),
          iVar8 != 0)) ||
         ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CWerewolf"),
          iVar8 != 0 ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CSvetlana"),
          iVar8 != 0)))))) ||
       (((pCVar4 = pCStack_30,
         iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCStack_30->base,"CDraculaBride"),
         iVar8 != 0 ||
         ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar4->base,"CBatman"),
          iVar8 != 0 ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar4->base,"CBatCreature"),
          iVar8 != 0)))) ||
        (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar4->base,"CBride"), iVar8 != 0)
        ))) {
LAB_004e312d:
      pCVar4 = pCStack_30;
      (*((pCStack_30->base).vtable._ub)->getBoundingBox)(&pCStack_30->base,out_box);
      orientation = &(pCVar4->base).orient;
      dVar13 = __BITCAST_DOUBLE(CONCAT44(&CStack_16c,orientation));
      position = &(pCVar4->base).location;
      pfVar7 = afStack_154;
      pCVar9 = &CStack_16c;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        pCVar9->x = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
        pCVar9 = (CVector3f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
      }
      iVar8 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
                        (&g_CDemonLightInstance.base,&position->position,&orientation->vec,
                         &CStack_16c,&CStack_160);
      if (iVar8 != 0) {
        dVar13 = __BITCAST_DOUBLE(CONCAT44("?%s in volume\n" + 1,g_CConsolePtr));
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"?%s in volume\n" + 1,pfStack_28);
        iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_7c = *(float *)(iVar8 + 0x20) - (position->position).x;
        CStack_78.x = *(float *)(iVar8 + 0x24) - (pCVar4->base).location.position.y;
        CStack_78.y = *(float *)(iVar8 + 0x28) - (pCVar4->base).location.position.z;
        fStack_4c = fStack_7c;
        afStack_48[(uint)bVar11 * -2] = *(float *)((int)&CStack_78 + (uint)bVar11 * -8);
        afStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -2];
        if (SQRT(afStack_48[1] * afStack_48[1] +
                 fStack_4c * fStack_4c + afStack_48[0] * afStack_48[0]) < (float)_DAT_005dc0b2) {
          core_actor_cpp_FUN_00408de0();
          fStack_a0 = (float)uStack_c4;
          afStack_9c[(uint)bVar11 * -2] = afStack_c0[(uint)bVar11 * -2];
          afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          afStack_9c[0] = 0.0;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_c0 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe04);
          dVar13 = 3.3617115671562693e-307;
          in_stack_fffffe14 =
               (CDemonActor *)
               (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                         ((CCharacter *)this_ptr,in_stack_fffffdf8,(int)in_stack_fffffdfc);
          in_stack_fffffdf8 = (CDemonActor *)0x4e37aa;
          in_stack_fffffdfc = (CCharacter *)CStack_24.z;
          (*(((((CDemonActor *)CStack_24.z)->vtable)._uc)->_uc).processDamage)
                    ((CCharacter *)CStack_24.z,(SDamageInfo *)&stack0xfffffe10);
        }
        pCVar1 = pCStack_14;
        this_ptr = (CLightGun *)pCStack_14;
        iStack_1fc = 0x4e34ed;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
        iStack_1fc = 0x4e3516;
        (*((pCStack_14->base).vtable._ub)->getBoundingBox)
                  (&pCStack_14->base,(CBoundingBox3D *)in_stack_fffffe0c);
        pfVar7 = afStack_120;
        pfVar10 = &fStack_170;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar10 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_24);
        CStack_24.x = CStack_16c.y + *unaff_retaddr;
        CStack_24.y = CStack_16c.z + unaff_retaddr[1];
        pCVar9 = &CStack_78;
        CStack_24.z = (float)(CStack_160.x + unaff_retaddr[2]);
        afStack_c0[3] = CStack_16c.y + *unaff_retaddr;
        afStack_c0[(uint)bVar11 * -2 + 4] = *(float *)((int)&CStack_24 + (uint)bVar11 * -8 + 4);
        afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             *(float *)((int)&CStack_24 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_actor_cpp_CVector3f_ctor_FUN_0040d340(pCVar9);
        CStack_78.x = afStack_c0[3] * _DAT_005dc0aa;
        CStack_78.y = fStack_b0 * _DAT_005dc0aa;
        CStack_78.z = fStack_ac * _DAT_005dc0aa;
        fStack_d8 = afStack_c0[3] * _DAT_005dc0aa;
        afStack_d4[(uint)bVar11 * -2] = afStack_6c[(uint)bVar11 * -2 + -2];
        afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
        core_actor_cpp_FUN_00408d70();
        afStack_9c[3] = (float)uStack_18;
        afStack_9c[(uint)bVar11 * -2 + 4] = (float)(&pCStack_14)[(uint)bVar11 * -2];
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             *(float *)(&stack0xfffffff0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        iVar8 = 0;
        bVar2 = false;
        do {
          iStack_1fc = 0x4e3630;
          core_setcolid_cpp_FUN_00535ee0();
          pCVar3 = g_CDemonSetPtr->collision_actor;
          if (pCVar3 == (CDemonActor *)0x0) break;
          if (pCVar3 == in_stack_0000000c) {
            bVar2 = true;
            break;
          }
          iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar3,"CTrigger || CGlass");
          if (iVar6 == 0) break;
          iVar8 = iVar8 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar8 < 3);
        in_stack_fffffe0c = (CDemonActor *)0x4e3652;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
        if (bVar2) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_1a4);
          iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CDraculaBride");
          if ((((iVar8 == 0) &&
               (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBatman"),
               iVar8 == 0)) &&
              (iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBatCreature"),
              iVar8 == 0)) &&
             ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBride"),
              iVar8 == 0 &&
              (in_stack_fffffe0c = unaff_EDI,
              iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CShadow"),
              iVar8 == 0)))) {
            auStack_1a4._4_4_ = 0.1;
          }
          else {
            in_stack_fffffe0c = (CDemonActor *)0x4e369a;
            auStack_1a4._16_4_ =
                 (*(((pCVar1->base).vtable._uc)->_uc).getGrabbed)
                           (pCVar1,in_stack_fffffe14,(int)in_stack_fffffe18);
          }
          fStack_190 = 0.0;
          afStack_184[0] = 0.0;
          fStack_188 = 0.0;
          fStack_18c = 0.0;
          CStack_16c.y = 1.5134e-43;
          CStack_16c.z = (float)pCVar1;
          CStack_160.y = (float)(*((pCVar1->base).vtable._ub)->getCarrier)(&pCVar1->base);
          in_stack_fffffe18 = 7.182914e-39;
          (*(((pCVar1->base).vtable._uc)->_uc).processDamage)
                    (pCVar1,(SDamageInfo *)(auStack_1a4 + 0x10));
        }
      }
    }
    else {
      dVar13 = (double)(ZEXT48(out_box) << 0x20);
      iVar8 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar4->base,"CShadow");
      out_box = (CBoundingBox3D *)((ulonglong)dVar13 >> 0x20);
      if (iVar8 != 0) goto LAB_004e312d;
    }
    CStack_24.x = (float)((int)CStack_24.x + 1);
    iStack_2c = iStack_2c + 4;
  } while( true );
}
