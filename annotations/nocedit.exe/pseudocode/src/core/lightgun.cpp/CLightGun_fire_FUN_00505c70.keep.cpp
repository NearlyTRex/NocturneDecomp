// Name: core_lightgun.cpp_CLightGun_fire_FUN_00505c70
// Address: 00505c70
// MANUAL RECONSTRUCTION
// Address Range: [[00505c70, 00506442]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_00505c70(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_00505c70(CLightGun *this_ptr)

{
  CCharacter *this_ptr_03;
  bool bVar1;
  CVector3f *input_local_point;
  float fVar2;
  int iVar3;
  CBoundingBox3D *pCVar2;
  EDeathState EVar3;
  CGlass *actor;
  CTrigger *this_ptr_02;
  int iVar4;
  int iVar5;
  SDamageInfo SStack_114;
  CBoundingBox3D CStack_d8;
  CBoundingBox3D CStack_c0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f local_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  int iStack_24;
  int iStack_20;
  CCharacter *pCStack_1c;
  CCharacter *actor_ptr;
  CDemonSet *this_ptr_01;
  float fVar1;
  
  if (this_ptr->charge_level < 30.0f) {
    return 0;
  }
  fVar1 = (this_ptr->base).bolt_velocity;
  this_ptr->charge_level = 0.0;
  this_ptr->beam_length = fVar1;
  input_local_point =
       (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_78);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_6c,input_local_point);
  CStack_54.z = (this_ptr->base).bolt_velocity;
  CStack_54.x = 0.0;
  CStack_54.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_90,&CStack_54);
  CStack_9c.x = CStack_6c.x + CStack_90.x;
  CStack_9c.y = CStack_6c.y + CStack_90.y;
  CStack_9c.z = CStack_6c.z + CStack_90.z;
  fVar2 = (float)1.5 / (this_ptr->base).bolt_velocity;
  CStack_3c.x = CStack_6c.x - CStack_90.x * fVar2;
  CStack_3c.y = CStack_6c.y - CStack_90.y * fVar2;
  CStack_3c.z = CStack_6c.z - CStack_90.z * fVar2;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if ((this_ptr->base).carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(this_ptr->base).carried_by_actor);
  }
  iVar5 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_3c,&CStack_9c);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) break;
    this_ptr->beam_length = (this_ptr->base).bolt_velocity * fVar2;
    pCStack_1c = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_1c != (CCharacter *)0x0) &&
       (EVar3 = (*(((pCStack_1c->base).vtable._uc)->_uc).getDeathState)(pCStack_1c), 0 < (int)EVar3)
       ) {
      pCStack_1c = (CCharacter *)0x0;
    }
    actor = (CGlass *)
            core_actor_cpp_castToClassHash_FUN_0040c790
                      (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCStack_1c != (CCharacter *)0x0) {
      iVar3 = (*(((pCStack_1c->base).vtable._uc)->_uc).canWalk)(pCStack_1c);
      this_ptr_01 = g_CDemonSetPtr;
      if ((iVar3 != 0) && (iVar5 == 0)) {
        this_ptr->charge_level = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr_01);
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (actor == (CGlass *)0x0) {
      if (this_ptr_02 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
        iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar3 != 0) {
          fVar2 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fVar2);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr_02);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)actor);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(this_ptr);
  iStack_20 = 0;
  iStack_24 = 0;
  do {
    if (g_CDemonSetPtr->character_count <= iStack_20) {
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,(CDemonActor *)this_ptr,"cre-fire.wav",&CStack_6c);
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(this_ptr->sfx_handle,2.0f);
      this_ptr->fire_flash_pending = 1;
      this_ptr->hit_enemy = 1;
      return 1;
    }
    this_ptr_03 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
    iVar3 = (*(((this_ptr_03->base).vtable._uc)->_uc).canWalk)(this_ptr_03);
    if (((iVar3 == 0) &&
        ((((iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CGhoul"),
           iVar3 != 0 ||
           (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CTVBat"),
           iVar3 != 0)) ||
          (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CBatCreature")
          , iVar3 != 0)) ||
         ((iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CWerewolf"),
          iVar3 != 0 ||
          (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CSvetlana"),
          iVar3 != 0)))))) ||
       ((iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CDraculaBride"),
        iVar3 != 0 ||
        (((iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CBatman"),
          iVar3 != 0 ||
          (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CBatCreature")
          , iVar3 != 0)) ||
         (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_03->base,"CBride"),
         iVar3 != 0)))))) {
      (*((this_ptr_03->base).vtable._ub)->getBoundingBox)(&this_ptr_03->base,&CStack_d8);
      iVar3 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(this_ptr_03->base).location.position,
                         &(this_ptr_03->base).orient.vec,&CStack_d8.min,&CStack_d8.max);
      if (iVar3 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s in volume\n",this_ptr_03->base.actor_name);
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar2 = (*((this_ptr_03->base).vtable._ub)->getBoundingBox)(&this_ptr_03->base,&CStack_c0);
        core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_60);
        CStack_60.x = (pCVar2->min).x + (pCVar2->max).x;
        CStack_60.y = (pCVar2->min).y + (pCVar2->max).y;
        CStack_60.z = (pCVar2->min).z + (pCVar2->max).z;
        core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_48);
        CStack_48.x = CStack_60.x * 0.5f;
        CStack_48.y = CStack_60.y * 0.5f;
        CStack_48.z = CStack_60.z * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&this_ptr_03->base,&CStack_84,&CStack_48);
        iVar3 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_3c,&CStack_84);
          actor_ptr = (CCharacter *)g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CCharacter *)0x0) break;
          if (this_ptr_03 == actor_ptr) {
            bVar1 = true;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            ((CDemonActor *)actor_ptr,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar3 = iVar3 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar3 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_114);
          SStack_114.damage_amount = 0.1;
          SStack_114.damage_type = DAMAGE_TYPE_BURN;
          SStack_114.gore_multiplier = 0.0;
          SStack_114.impact_point.z = 0.0;
          SStack_114.impact_point.y = 0.0;
          SStack_114.impact_point.x = 0.0;
          SStack_114.attacker = (CDemonActor *)this_ptr;
          SStack_114.wielder =
               (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)(this_ptr_03,&SStack_114);
        }
      }
    }
    iStack_20 = iStack_20 + 1;
    iStack_24 = iStack_24 + 4;
  } while( true );
}
