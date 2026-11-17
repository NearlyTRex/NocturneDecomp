// Name: core_lightgun.cpp_CLightGun_fire_FUN_004e2e70
// Address: 004e2e70
// Address Range: [[004e2e70, 004e38cc]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004e2e70(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004e2e70(CLightGun *this_ptr)

{
  UOrientationVector *orientation;
  CCharacter *pCVar1;
  CHero *this_ptr_00;
  bool bVar2;
  EDeathState EVar3;
  CDemonActor *pCVar4;
  CTrigger *pCVar5;
  float fVar6;
  int iVar7;
  CLocation *position;
  float *pfVar8;
  CDemonActor *unaff_EDI;
  int iVar9;
  CVector3f *pCVar10;
  float *pfVar11;
  byte bVar12;
  float *unaff_retaddr;
  CDemonActor *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float afStackY_110c [953];
  CDemonSet *pCVar13;
  CBoundingBox3D *out_box;
  double dVar14;
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
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [2];
  CVector3f CStack_118;
  CVector3f aCStack_10c [2];
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_d8;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float afStack_ac [3];
  CVector3f CStack_a0;
  byte auStack_94 [8];
  float afStack_8c [4];
  float fStack_7c;
  byte auStack_78 [12];
  float afStack_6c [4];
  float fStack_5c;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [4];
  CCharacter *pCStack_34;
  CTrigger *pCStack_30;
  int iStack_2c;
  float *pfStack_28;
  CVector3f CStack_24;
  float fStack_18;
  CCharacter *pCStack_14;
  
  bVar12 = 0;
  if (this_ptr->charge_level < 2.0f) {
    return 0;
  }
  fVar6 = (this_ptr->base).bolt_velocity;
  this_ptr->charge_level = 0.0;
  this_ptr->beam_length = fVar6;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  CStack_a0.z = fStack_124;
  *(float *)(auStack_94 + (uint)bVar12 * -8) = afStack_120[(uint)bVar12 * -2];
  afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1] =
       afStack_120[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  afStack_8c[0] = afStack_8c[0] + -4.0f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,(CVector3f *)auStack_94,&CStack_118);
  CStack_e8.x = CStack_118.x;
  *(uint *)((int)&CStack_e8 + ((uint)bVar12 * -2 + -1) * 4 + 8) =
       *(uint *)((int)aCStack_10c + (uint)bVar12 * -8 + -8);
  *(uint *)((int)&CStack_e8 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8) =
       *(uint *)((int)aCStack_10c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -4);
  CStack_130.z = (this_ptr->base).bolt_velocity;
  CStack_130.x = 0.0;
  CStack_130.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,&CStack_130,(CVector3f *)(auStack_78 + 8));
  fVar6 = CStack_e8.x;
  afStack_6c[2] = (float)auStack_78._8_4_;
  afStack_6c[(uint)bVar12 * -2 + 3] = afStack_6c[(uint)bVar12 * -2];
  afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
       afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  fStack_7c = fVar6 + afStack_6c[2];
  auStack_78._0_4_ = CStack_e8.y + afStack_6c[3];
  auStack_78._4_4_ = CStack_e8.z + fStack_5c;
  aCStack_10c[0].x = fVar6 + afStack_6c[2];
  *(uint *)((int)aCStack_10c + (uint)bVar12 * -8 + 4) =
       *(uint *)(auStack_78 + (uint)bVar12 * -8);
  *(float *)((int)aCStack_10c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -2];
  CStack_f4.x = CStack_e8.x;
  *(uint *)((int)&CStack_f4 + (uint)bVar12 * -8 + 4) =
       *(uint *)((int)&CStack_e8 + ((uint)bVar12 * -2 + -1) * 4 + 8);
  pCVar13 = g_CDemonSetPtr;
  *(uint *)((int)&CStack_f4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       *(uint *)((int)&CStack_e8 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(pCVar13);
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(g_CDemonSetPtr,1,0xff,0xff,0xff);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00537df0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar4 = (this_ptr->base).carried_by_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar4);
  }
  iVar9 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
  do {
    pCStack_14 = (CCharacter *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                           (g_CDemonSetPtr,&CStack_f4,aCStack_10c);
    dVar14 = (double)(float)pCStack_14;
    if ((dVar14 < 0.0) || (1.0 < dVar14)) break;
    this_ptr->beam_length = (this_ptr->base).bolt_velocity * (float)pCStack_14;
    CStack_24.y = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                   (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash)
    ;
    if (((CCharacter *)CStack_24.y != (CCharacter *)0x0) &&
       (EVar3 = (*(((((CCharacter *)CStack_24.y)->base).vtable._uc)->_uc).getDeathState)
                          ((CCharacter *)CStack_24.y), 0 < (int)EVar3)) {
      CStack_24.z = 0.0;
    }
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = (CTrigger *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_30 = pCVar5;
    if ((CCharacter *)CStack_24.y != (CCharacter *)0x0) {
      iVar7 = (*(((((CDemonActor *)CStack_24.y)->vtable)._uc)->_uc).isInvulnerable)
                        ((CCharacter *)CStack_24.y);
      pCVar13 = g_CDemonSetPtr;
      if ((iVar7 != 0) && (iVar9 == 0)) {
        this_ptr->charge_level = 2.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(pCVar13);
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar4 == (CDemonActor *)0x0) {
      if (pCVar5 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(pCVar5);
        iVar9 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                          (pCVar5,(CDemonActor *)this_ptr);
        if (iVar9 != 0) {
          fVar6 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar14),0),
                                    (int)((ulonglong)dVar14 >> 0x20));
          dVar14 = __BITCAST_DOUBLE(CONCAT44(pCVar5,0x4e331b));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar5,fVar6);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_30->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar4);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004e2bf0(this_ptr);
  CStack_24.x = 0.0;
  pfStack_28 = afStack_184;
  iStack_2c = 0;
  do {
    out_box = (CBoundingBox3D *)((ulonglong)dVar14 >> 0x20);
    if (g_CDemonSetPtr->character_count <= (int)CStack_24.x) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"cre-fire.wav",&CStack_e8);
      sound_sndmain_cpp_setSfxVolume_FUN_00550f20(this_ptr->sfx_handle,2.0f);
      this_ptr->fire_flash_pending = 1;
      this_ptr->hit_enemy = 1;
      core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr->base);
      return 1;
    }
    pCVar1 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_2c);
    pCStack_34 = pCVar1;
    iVar9 = (*(((pCVar1->base).vtable._uc)->_uc).isInvulnerable)(pCVar1);
    if (((iVar9 == 0) &&
        ((((iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CGhoul"),
           iVar9 != 0 ||
           (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CTVBat"),
           iVar9 != 0)) ||
          (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CBatCreature"),
          iVar9 != 0)) ||
         ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CWerewolf"),
          iVar9 != 0 ||
          (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar1->base,"CSvetlana"),
          iVar9 != 0)))))) ||
       (((pCVar5 = pCStack_30,
         iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCStack_30->base,"CDraculaBride"),
         iVar9 != 0 ||
         ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar5->base,"CBatman"),
          iVar9 != 0 ||
          (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar5->base,"CBatCreature"),
          iVar9 != 0)))) ||
        (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar5->base,"CBride"), iVar9 != 0)
        ))) {
LAB_004e312d:
      pCVar5 = pCStack_30;
      (*((pCStack_30->base).vtable._ub)->getBoundingBox)(&pCStack_30->base,out_box);
      orientation = &(pCVar5->base).orient;
      dVar14 = __BITCAST_DOUBLE(CONCAT44(&CStack_16c,orientation));
      position = &(pCVar5->base).location;
      pfVar8 = afStack_154;
      pCVar10 = &CStack_16c;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        pCVar10->x = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
        pCVar10 = (CVector3f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
      }
      iVar9 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
                        (&g_CDemonLightInstance.base,&position->position,&orientation->vec,
                         &CStack_16c,&CStack_160);
      if (iVar9 != 0) {
        dVar14 = __BITCAST_DOUBLE(CONCAT44("%s in volume\n",g_CConsolePtr));
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s in volume\n");
        this_ptr_00 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
        fStack_7c = (this_ptr_00->base).base.location.position.x - (position->position).x;
        auStack_78._0_4_ =
             (this_ptr_00->base).base.location.position.y - (pCVar5->base).location.position.y;
        auStack_78._4_4_ =
             (this_ptr_00->base).base.location.position.z - (pCVar5->base).location.position.z;
        fStack_4c = fStack_7c;
        afStack_44[(uint)bVar12 * -2 + -1] = *(float *)(auStack_78 + (uint)bVar12 * -8);
        afStack_44[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
             afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -2];
        if (SQRT(afStack_44[0] * afStack_44[0] + fStack_4c * fStack_4c + fStack_48 * fStack_48) <
            (float)4) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr_00,&position->position,&CStack_c4);
          CStack_a0.x = CStack_c4.x;
          *(uint *)(auStack_94 + (uint)bVar12 * -8 + -8) =
               *(uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + 4);
          *(uint *)(auStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -4) =
               *(uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          CStack_a0.y = 0.0;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_a0,&CStack_b8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe04);
          dVar14 = 3.3617115671562693e-307;
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
        pfVar8 = afStack_120;
        pfVar11 = &fStack_170;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar11 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
          pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_24);
        CStack_24.x = CStack_16c.y + *unaff_retaddr;
        CStack_24.y = (float)(CStack_16c.z + unaff_retaddr[1]);
        pCVar10 = (CVector3f *)auStack_78;
        CStack_24.z = (float)(CStack_160.x + unaff_retaddr[2]);
        CStack_b8.y = CStack_16c.y + *unaff_retaddr;
        afStack_ac[(uint)bVar12 * -2 + -1] = *(float *)((int)&CStack_24 + (uint)bVar12 * -8 + 4);
        afStack_ac[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
             *(float *)((int)&CStack_24 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8);
        core_actor_cpp_CVector3f_ctor_FUN_0040d340(pCVar10);
        auStack_78._0_4_ = CStack_b8.y * 0.5f;
        auStack_78._4_4_ = CStack_b8.z * 0.5f;
        auStack_78._8_4_ = afStack_ac[0] * 0.5f;
        CStack_d8.x = CStack_b8.y * 0.5f;
        *(uint *)((int)&CStack_d8 + (uint)bVar12 * -8 + 4) =
             *(uint *)(auStack_78 + (uint)bVar12 * -8 + 4);
        *(float *)((int)&CStack_d8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  (unaff_EDI,&CStack_d8,(CVector3f *)&fStack_18);
        auStack_94._4_4_ = fStack_18;
        afStack_8c[(uint)bVar12 * -2] = (float)(&pCStack_14)[(uint)bVar12 * -2];
        afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             *(float *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        iVar9 = 0;
        bVar2 = false;
        do {
          iStack_1fc = 0x4e3630;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                    (g_CDemonSetPtr,in_stack_00000010,(CVector3f *)(auStack_94 + 4));
          pCVar4 = g_CDemonSetPtr->collision_actor;
          if (pCVar4 == (CDemonActor *)0x0) break;
          if (pCVar4 == in_stack_0000000c) {
            bVar2 = true;
            break;
          }
          iVar7 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar4,"CTrigger || CGlass");
          if (iVar7 == 0) break;
          iVar9 = iVar9 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar9 < 3);
        in_stack_fffffe0c = (CDemonActor *)0x4e3652;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
        if (bVar2) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_1a4);
          iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CDraculaBride");
          if ((((iVar9 == 0) &&
               (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBatman"),
               iVar9 == 0)) &&
              (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBatCreature"),
              iVar9 == 0)) &&
             ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CBride"),
              iVar9 == 0 &&
              (in_stack_fffffe0c = unaff_EDI,
              iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EDI,"CShadow"),
              iVar9 == 0)))) {
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
      dVar14 = (double)(ZEXT48(out_box) << 0x20);
      iVar9 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar5->base,"CShadow");
      out_box = (CBoundingBox3D *)((ulonglong)dVar14 >> 0x20);
      if (iVar9 != 0) goto LAB_004e312d;
    }
    CStack_24.x = (float)((int)CStack_24.x + 1);
    iStack_2c = iStack_2c + 4;
  } while( true );
}
