// Name: core_lightgun.cpp_FUN_004c71a0
// Address: 004c71a0
// Address Range: [[004c71a0, 004c7999]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004c71a0(CLightGun *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_lightgun_cpp_FUN_004c71a0(CLightGun *param_1)

{
  CCharacter *this_ptr;
  bool bVar1;
  CDemonSet *this_ptr_00;
  CVector3f *input_local_point;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CTrigger *this_ptr_01;
  int iVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonActor *unaff_retaddr;
  uint flags;
  double dVar7;
  int in_stack_fffffefc;
  byte auStack_fc [60];
  CDemonActor *pCStack_c0;
  byte auStack_b8 [24];
  float fStack_a0;
  float fStack_9c;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_6c;
  CVector3f local_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CTrigger *pCStack_28;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  uint uStack_14;
  
  if (param_1->charge_level < 30.0f) {
    return 0;
  }
  fVar2 = (param_1->base).bolt_velocity;
  param_1->charge_level = 0.0;
  param_1->beam_length = fVar2;
  input_local_point =
       (CVector3f *)(*((param_1->base).base.vtable._ub)->initializeInEditor)((CDemonActor *)param_1)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)param_1,(CVector3f *)(auStack_b8 + 0x14),input_local_point);
  local_60.x = (param_1->base).bolt_velocity;
  CStack_6c.y = 0.0;
  CStack_6c.z = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_8c,&CStack_6c.y);
  fStack_44 = (float)auStack_b8._20_4_ + fStack_8c;
  fStack_40 = fStack_a0 + fStack_88;
  fStack_3c = fStack_9c + fStack_84;
  fStack_2c = (float)1.5 / (param_1->base).bolt_velocity;
  fStack_38 = fStack_8c * fStack_2c;
  fStack_34 = fStack_88 * fStack_2c;
  fStack_30 = fStack_84 * fStack_2c;
  fStack_50 = (float)auStack_b8._20_4_ - fStack_38;
  fStack_4c = fStack_a0 - fStack_34;
  fStack_48 = fStack_9c - fStack_30;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_FUN_00511740(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
  if ((param_1->base).carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(param_1->base).carried_by_actor);
  }
  iVar6 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  do {
    fVar2 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                             (0x01E57284,&fStack_50,&fStack_44);
    dVar7 = (double)fVar2;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    param_1->beam_length = (param_1->base).bolt_velocity * fVar2;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CCharacterActorType_00765a60.name_hash);
    flags = SUB84(__BITCAST_UINT64(dVar7),0);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (iVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).releaseFromGrab)(pCStack_18), 0 < iVar4)) {
      uStack_14 = 0;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                        g_CGlassActorType_01c78c40.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_28 = this_ptr_01;
    if (pCStack_18 != (CCharacter *)0x0) {
      iVar4 = (*((pCStack_18->base).vtable._ub)->initializeInEditor)(&pCStack_18->base);
      this_ptr_00 = 0x01E57284;
      if ((iVar4 != 0) && (iVar6 == 0)) {
        param_1->charge_level = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(this_ptr_00);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
        return 0;
      }
      break;
    }
    if (pCVar5 == (CDemonActor *)0x0) {
      if (this_ptr_01 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_01);
        iVar6 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                          (this_ptr_01,(CDemonActor *)param_1);
        if (iVar6 != 0) {
          pCVar5 = (*((param_1->base).base.vtable._ub)->dtor)((CDemonActor *)param_1,flags);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_01,(float)pCVar5);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&pCStack_28->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar5);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(param_1);
  iStack_1c = 0;
  iStack_20 = 0;
  do {
    if ((int)0x01E57284->actors[0x6d6] <= iStack_1c) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                (0x02DC9450,(CDemonActor *)param_1,"cre-fire.wav",
                 (CVector3f *)(auStack_b8 + 0x14));
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(param_1->sfx_handle,2.0f);
      pCVar5 = (*((param_1->base).base.vtable._ub)->getCarrier)((CDemonActor *)param_1);
      if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        xxx_unk_c_FUN_004940d0(INT_005b9284);
      }
      param_1->hit_enemy = 1;
      param_1->fire_flash_pending = 1;
      return 1;
    }
    this_ptr = *(CCharacter **)((int)0x01E57284->actors + iStack_20 + 0x1b5c);
    iVar6 = (*((this_ptr->base).vtable._ub)->initializeInEditor)(&this_ptr->base);
    if (((iVar6 == 0) &&
        ((((iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CGhoul"),
           iVar6 != 0 ||
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CTVBat"),
           iVar6 != 0)) ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatCreature"),
          iVar6 != 0)) ||
         ((iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CWerewolf"),
          iVar6 != 0 ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CSvetlana"),
          iVar6 != 0)))))) ||
       ((iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CDraculaBride"),
        iVar6 != 0 ||
        (((iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatman"),
          iVar6 != 0 ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatCreature"),
          iVar6 != 0)) ||
         (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBride"),
         iVar6 != 0)))))) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)auStack_b8)
      ;
      iVar6 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                        ((CDemonCamera *)&DAT_01c74640,&(this_ptr->base).location.position,
                         &(this_ptr->base).orient.vec,(CVector3f *)(auStack_b8 + 8),
                         (CVector3f *)(auStack_b8 + 0x14));
      if (iVar6 != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s in volume\n",this_ptr);
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
        pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                           (&this_ptr->base,(CBoundingBox3D *)(auStack_fc + 0x34));
        param_1 = (CLightGun *)&pCVar3->max;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_84);
        fStack_84 = (pCVar3->min).x + ((CVector3f *)param_1)->x;
        fStack_80 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_7c = (pCVar3->min).z + (pCVar3->max).z;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&local_60);
        local_60.x = fStack_84 * 0.5f;
        local_60.y = fStack_80 * 0.5f;
        local_60.z = fStack_7c * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  (&this_ptr->base,&CStack_6c,&local_60);
        iVar6 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(0x01E57284,&fStack_3c,&CStack_6c);
          pCVar5 = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
          if (pCVar5 == (CDemonActor *)0x0) break;
          if (pCVar5 == unaff_retaddr) {
            bVar1 = true;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar5,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar6 = iVar6 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,
                     *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
        } while (iVar6 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_fc);
          auStack_fc._4_4_ = 0.1;
          auStack_fc._48_4_ = DAMAGE_TYPE_BURN;
          auStack_fc._8_4_ = 0.0;
          auStack_fc._20_4_ = 0.0;
          auStack_fc._16_4_ = 0.0;
          auStack_fc._12_4_ = 0.0;
          auStack_fc._52_4_ = param_1;
          pCStack_c0 = (**(code **)((int)pCVar3[0xe].min.z + 0x8c))((CDemonActor *)param_1);
          (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
                    (this_ptr,(CDemonActor *)(auStack_fc + 4),in_stack_fffffefc);
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_20 = iStack_20 + 4;
  } while( true );
}
