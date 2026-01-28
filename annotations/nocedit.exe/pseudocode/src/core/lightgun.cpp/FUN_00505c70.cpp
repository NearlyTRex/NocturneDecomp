// Name: core_lightgun.cpp_FUN_00505c70
// Address: 00505c70
// Address Range: [[00505c70, 00506442]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_00505c70(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_00505c70(uint param_1) */

uint core_lightgun_cpp_FUN_00505c70(void)

{
  float fVar1;
  CCharacter *this_ptr;
  CCharacter *actor_ptr;
  CDemonSet *this_ptr_00;
  CVector3f *input_local_point;
  CBoundingBox3D *pCVar2;
  CDemonActor *actor;
  int iVar3;
  CVector3f *unaff_ESI;
  int iVar4;
  CDemonActor *in_stack_00000004;
  byte auStack_104 [8];
  int iStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CBoundingBox3D CStack_d8;
  CBoundingBox3D CStack_b8;
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f aCStack_90 [2];
  byte auStack_74 [12];
  float fStack_68;
  float fStack_64;
  byte auStack_54 [8];
  float fStack_4c;
  float fStack_48;
  byte auStack_3c [8];
  float fStack_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  int iStack_24;
  int iStack_20;
  CCharacter *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  if (in_stack_00000004[4].location.position.x < 30.0f) {
    return 0;
  }
  fVar1 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar1;
  input_local_point = (CVector3f *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_74 + 8),input_local_point);
  fStack_4c = in_stack_00000004[2].orient.heading;
  auStack_54._0_4_ = 0.0;
  auStack_54._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,aCStack_90,(CVector3f *)auStack_54);
  CStack_9c.x = (float)auStack_74._8_4_ + aCStack_90[0].x;
  CStack_9c.y = fStack_68 + aCStack_90[0].y;
  CStack_9c.z = fStack_64 + aCStack_90[0].z;
  fStack_30 = (float)1.5 / in_stack_00000004[2].orient.heading;
  CStack_b8.max.y = aCStack_90[0].x * fStack_30;
  CStack_b8.max.z = aCStack_90[0].y * fStack_30;
  fStack_a0 = aCStack_90[0].z * fStack_30;
  auStack_3c._0_4_ = (float)auStack_74._8_4_ - CStack_b8.max.y;
  auStack_3c._4_4_ = fStack_68 - CStack_b8.max.z;
  fStack_34 = fStack_64 - fStack_a0;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if (in_stack_00000004[2].orient_matrix.m[2].x != 0.0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x);
  }
  iVar4 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,(CVector3f *)auStack_3c,&CStack_9c);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    in_stack_00000004[4].location.area_id = (int)(in_stack_00000004[2].orient.heading * fStack_14);
    pCStack_1c = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_1c != (CCharacter *)0x0) &&
       (iVar3 = (*(((pCStack_1c->base).vtable._uc)->_uc).isDamageable)(pCStack_1c), 0 < iVar3)) {
      iStack_18 = 0;
    }
    actor = core_actor_cpp_castToClassHash_FUN_0040c790
                      (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCStack_2c = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCStack_1c != (CCharacter *)0x0) {
      iVar3 = (*(((pCStack_1c->base).vtable._uc)->_uc).cfunc3)();
      this_ptr_00 = g_CDemonSetPtr;
      if ((iVar3 != 0) && (iVar4 == 0)) {
        in_stack_00000004[4].location.position.x = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr_00);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (actor == (CDemonActor *)0x0) {
      if (pCStack_2c != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar4 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar4 != 0) {
          fStack_14 = (float)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc6)();
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_2c);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  iStack_20 = 0;
  iStack_24 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iStack_20) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",(CVector3f *)(auStack_74 + 8)
                );
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[4].actor_name + 0x1c),2.0f);
      in_stack_00000004[4].actor_name[0x18] = '\x01';
      in_stack_00000004[4].actor_name[0x19] = '\0';
      in_stack_00000004[4].actor_name[0x1a] = '\0';
      in_stack_00000004[4].actor_name[0x1b] = '\0';
      in_stack_00000004[4].location.position.z = 1.4013e-45;
      return 1;
    }
    this_ptr = *(CCharacter **)(g_CDemonSetPtr->unk4 + iStack_24 + -4);
    iVar4 = (*(((this_ptr->base).vtable._uc)->_uc).cfunc3)();
    if (((iVar4 == 0) &&
        ((((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CGhoul"),
           iVar4 != 0 ||
           (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CTVBat"),
           iVar4 != 0)) ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CBatCreature"),
          iVar4 != 0)) ||
         ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CWerewolf"),
          iVar4 != 0 ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CSvetlana"),
          iVar4 != 0)))))) ||
       ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CDraculaBride"),
        iVar4 != 0 ||
        (((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CBatman"),
          iVar4 != 0 ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CBatCreature"),
          iVar4 != 0)) ||
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CBride"),
         iVar4 != 0)))))) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_d8);
      iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(this_ptr->base).location.position,
                         (CVector3f *)&(this_ptr->base).orient,(CVector3f *)&CStack_d8.min.z);
      if (iVar4 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n");
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_b8);
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_54 + 4));
        auStack_54._4_4_ = (pCVar2->min).x + (pCVar2->max).x;
        fStack_4c = (pCVar2->min).y + (pCVar2->max).y;
        fStack_48 = (pCVar2->min).z + (pCVar2->max).z;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_3c + 4));
        auStack_3c._4_4_ = (float)auStack_54._4_4_ * 0.5f;
        fStack_34 = fStack_4c * 0.5f;
        fStack_30 = fStack_48 * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&this_ptr->base,(CVector3f *)auStack_74,(CVector3f *)(auStack_3c + 4));
        iVar4 = 0;
        iStack_18 = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,unaff_ESI,(CVector3f *)auStack_74);
          actor_ptr = (CCharacter *)g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CCharacter *)0x0) break;
          if (this_ptr == actor_ptr) {
            iStack_18 = 1;
            break;
          }
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            ((CDemonActor *)actor_ptr,"CTrigger || CGlass");
          if (iVar3 == 0) break;
          iVar4 = iVar4 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar4 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (iStack_18 != 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_104);
          auStack_104._4_4_ = 0.1;
          CStack_d8.min.y = 1.5134e-43;
          iStack_fc = 0;
          fStack_f0 = 0.0;
          fStack_f4 = 0.0;
          fStack_f8 = 0.0;
          CStack_d8.min.z = (float)in_stack_00000004;
          CStack_d8.max.y =
               (float)(*((in_stack_00000004->vtable)._ub)->getCarrier)(in_stack_00000004);
          (*(((this_ptr->base).vtable._uc)->_uc).processDamage)
                    (this_ptr,(SDamageInfo *)(auStack_104 + 4));
        }
      }
    }
    iStack_20 = iStack_20 + 1;
    iStack_24 = iStack_24 + 4;
  } while( true );
}
