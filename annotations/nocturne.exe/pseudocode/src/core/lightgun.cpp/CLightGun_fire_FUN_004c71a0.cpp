// Name: core_lightgun.cpp_CLightGun_fire_FUN_004c71a0
// Address: 004c71a0
// Address Range: [[004c71a0, 004c7999]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004c71a0(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004c71a0(CLightGun *this_ptr)

{
  CCharacter *this_ptr_00;
  bool bVar1;
  CDemonSet *this_ptr_01;
  CVector3f *input_local_point;
  float fVar2;
  CBoundingBox3D *pCVar3;
  EDeathState EVar4;
  CDemonActor *pCVar5;
  CTrigger *this_ptr_02;
  int iVar6;
  CHero *pCVar7;
  int iVar8;
  CDemonActor *unaff_retaddr;
  double dVar9;
  byte auStack_fc [8];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  EDamageType EStack_cc;
  byte auStack_c8 [24];
  CVector3f CStack_b0;
  CVector3f aCStack_a4 [2];
  byte auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  byte auStack_6c [8];
  float fStack_64;
  CVector3f local_60;
  CVector3f CStack_50;
  byte auStack_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CTrigger *pCStack_28;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  uint uStack_14;
  
  if (this_ptr->charge_level < 30.0f) {
    return 0;
  }
  fVar2 = (this_ptr->base).bolt_velocity;
  this_ptr->charge_level = 0.0;
  this_ptr->beam_length = fVar2;
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,aCStack_a4,input_local_point);
  local_60.x = (this_ptr->base).bolt_velocity;
  auStack_6c._4_4_ = 0.0;
  fStack_64 = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,(CVector3f *)auStack_8c,(CVector3f *)(auStack_6c + 4));
  auStack_44._0_4_ = aCStack_a4[0].x + (float)auStack_8c._0_4_;
  auStack_44._4_4_ = aCStack_a4[0].y + (float)auStack_8c._4_4_;
  auStack_44._8_4_ = aCStack_a4[0].z + (float)auStack_8c._8_4_;
  fStack_2c = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_38 = (float)auStack_8c._0_4_ * fStack_2c;
  fStack_34 = (float)auStack_8c._4_4_ * fStack_2c;
  fStack_30 = (float)auStack_8c._8_4_ * fStack_2c;
  CStack_50.x = aCStack_a4[0].x - fStack_38;
  CStack_50.y = aCStack_a4[0].y - fStack_34;
  CStack_50.z = aCStack_a4[0].z - fStack_30;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
  core_setcolid_cpp_CDemonSet_FUN_00511740(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
  if ((this_ptr->base).carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
              (g_CDemonSet_PTR_005be368,(this_ptr->base).carried_by_actor);
  }
  iVar8 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(g_CDemonSet_PTR_005be368);
  do {
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                      (g_CDemonSet_PTR_005be368,&CStack_50,(CVector3f *)auStack_44);
    dVar9 = (double)fVar2;
    if ((dVar9 < 0.0) || (1.0 < dVar9)) break;
    this_ptr->beam_length = (this_ptr->base).bolt_velocity * fVar2;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CCharacterActorType_00765a60.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar4)
       ) {
      uStack_14 = 0;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (g_CDemonSet_PTR_005be368->collision_actor,
                        g_CGlassActorType_01c78c40.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_28 = this_ptr_02;
    if (pCStack_18 != (CCharacter *)0x0) {
      iVar6 = (*(((pCStack_18->base).vtable._uc)->_uc).canWalk)(pCStack_18);
      this_ptr_01 = g_CDemonSet_PTR_005be368;
      if ((iVar6 != 0) && (iVar8 == 0)) {
        this_ptr->charge_level = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(this_ptr_01);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
        return 0;
      }
      break;
    }
    if (pCVar5 == (CDemonActor *)0x0) {
      if (this_ptr_02 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_02);
        iVar8 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar8 != 0) {
          fVar2 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar9),0),
                                    (int)((ulonglong)dVar9 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_02,fVar2);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,&pCStack_28->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar5);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(g_CDemonSet_PTR_005be368);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(this_ptr);
  iStack_1c = 0;
  iStack_20 = 0;
  do {
    if (g_CDemonSet_PTR_005be368->character_count <= iStack_1c) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"cre-fire.wav",aCStack_a4);
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(this_ptr->sfx_handle,2.0f);
      pCVar7 = (CHero *)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      if (pCVar7 == g_HeroActors[g_LocalHeroIndex]) {
        engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
      }
      this_ptr->hit_enemy = 1;
      this_ptr->fire_flash_pending = 1;
      return 1;
    }
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSet_PTR_005be368->characters + iStack_20);
    iVar8 = (*(((this_ptr_00->base).vtable._uc)->_uc).canWalk)(this_ptr_00);
    if (((iVar8 == 0) &&
        ((((iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CGhoul"),
           iVar8 != 0 ||
           (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CTVBat"),
           iVar8 != 0)) ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CBatCreature")
          , iVar8 != 0)) ||
         ((iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CWerewolf"),
          iVar8 != 0 ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CSvetlana"),
          iVar8 != 0)))))) ||
       ((iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CDraculaBride"),
        iVar8 != 0 ||
        (((iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CBatman"),
          iVar8 != 0 ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CBatCreature")
          , iVar8 != 0)) ||
         (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr_00->base,"CBride"),
         iVar8 != 0)))))) {
      (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                (&this_ptr_00->base,(CBoundingBox3D *)(auStack_c8 + 0x10));
      iVar8 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                        (&g_CDemonLight_01c74640.base,&(this_ptr_00->base).location.position,
                         &(this_ptr_00->base).orient.vec,&CStack_b0,aCStack_a4);
      if (iVar8 != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"%s in volume\n");
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(g_CDemonSet_PTR_005be368);
        pCVar3 = (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                           (&this_ptr_00->base,(CBoundingBox3D *)auStack_c8);
        this_ptr = (CLightGun *)&pCVar3->max;
        core_actor_cpp_CVector_ctor_FUN_0040e160((CVector3f *)(auStack_8c + 8));
        auStack_8c._8_4_ = (pCVar3->min).x + ((CVector3f *)this_ptr)->x;
        fStack_80 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_7c = (pCVar3->min).z + (pCVar3->max).z;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&local_60);
        local_60.x = (float)auStack_8c._8_4_ * 0.5f;
        local_60.y = fStack_80 * 0.5f;
        local_60.z = fStack_7c * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  (&this_ptr_00->base,(CVector3f *)auStack_6c,&local_60);
        iVar8 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                    (g_CDemonSet_PTR_005be368,(CVector3f *)(auStack_44 + 8),(CVector3f *)auStack_6c)
          ;
          pCVar5 = g_CDemonSet_PTR_005be368->collision_actor;
          if (pCVar5 == (CDemonActor *)0x0) break;
          if (pCVar5 == unaff_retaddr) {
            bVar1 = true;
            break;
          }
          iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar5,"CTrigger || CGlass");
          if (iVar6 == 0) break;
          iVar8 = iVar8 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
        } while (iVar8 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(g_CDemonSet_PTR_005be368);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_fc);
          auStack_fc._4_4_ = 0.1;
          EStack_cc = DAMAGE_TYPE_BURN;
          fStack_f4 = 0.0;
          fStack_e8 = 0.0;
          fStack_ec = 0.0;
          fStack_f0 = 0.0;
          auStack_c8._0_4_ = this_ptr;
          auStack_c8._8_4_ = (**(code **)((int)pCVar3[0xe].min.z + 0x8c))((CDemonActor *)this_ptr);
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                    (this_ptr_00,(SDamageInfo *)(auStack_fc + 4));
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_20 = iStack_20 + 4;
  } while( true );
}
