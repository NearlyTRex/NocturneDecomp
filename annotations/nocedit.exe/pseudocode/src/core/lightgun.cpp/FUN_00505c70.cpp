// Name: core_lightgun.cpp_FUN_00505c70
// Address: 00505c70
// Address Range: [[00505c70, 00506442]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505c70()

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_00505c70(uint param_1) */

uint core_lightgun_cpp_FUN_00505c70(void)

{
  CDemonActor *actor_ptr;
  CDemonSet *this_ptr;
  CVector3f *input_local_point;
  float fVar1;
  CBoundingBox3D *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  double dVar6;
  SDamageInfo SStack_114;
  CBoundingBox3D CStack_d8;
  CBoundingBox3D CStack_c0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f aCStack_84 [2];
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  byte auStack_3c [8];
  float fStack_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  CDemonActor *pCStack_1c;
  CVector3f *pCStack_18;
  CVector3f *pCStack_14;
  
  if (in_stack_00000004[4].location.position.x < DAT_00660a40) {
    return 0;
  }
  fVar1 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar1;
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_6c,input_local_point);
  CStack_54.z = in_stack_00000004[2].orient.heading;
  CStack_54.x = 0.0;
  CStack_54.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_90,&CStack_54);
  CStack_9c.x = CStack_6c.x + CStack_90.x;
  CStack_9c.y = CStack_6c.y + CStack_90.y;
  CStack_9c.z = CStack_6c.z + CStack_90.z;
  fStack_30 = (float)1.5 / in_stack_00000004[2].orient.heading;
  fStack_a8 = CStack_90.x * fStack_30;
  fStack_a4 = CStack_90.y * fStack_30;
  fStack_a0 = CStack_90.z * fStack_30;
  auStack_3c._0_4_ = CStack_6c.x - fStack_a8;
  auStack_3c._4_4_ = CStack_6c.y - fStack_a4;
  fStack_34 = CStack_6c.z - fStack_a0;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if (in_stack_00000004[2].orient_matrix.m[2].x != 0.0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x);
  }
  iVar5 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    fVar1 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_3c,&CStack_9c);
    dVar6 = (double)fVar1;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    in_stack_00000004[4].location.area_id = (int)(in_stack_00000004[2].orient.heading * fVar1);
    pCStack_1c = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_1c != (CDemonActor *)0x0) &&
       (iVar4 = (*pCStack_1c->vtable[1].hasCollision)(pCStack_1c,SUB84 /* extract 2-byte value */(dVar6,0)), 0 < iVar4)) {
      pCStack_1c = (CDemonActor *)0x0;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCStack_2c = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCStack_1c != (CDemonActor *)0x0) {
      iVar4 = (*pCStack_1c->vtable[1].renderOpaque)(pCStack_1c);
      this_ptr = g_CDemonSetPtr;
      if ((iVar4 != 0) && (iVar5 == 0)) {
        in_stack_00000004[4].location.position.x = DAT_00660a40;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCStack_2c != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar5 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar5 != 0) {
          (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,SUB84 /* extract 2-byte value */(dVar6,0));
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_2c);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  iStack_20 = 0;
  iStack_24 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iStack_20) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",&CStack_6c);
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[4].actor_name + 0x1c),DAT_00660a48);
      in_stack_00000004[4].actor_name[0x18] = '\x01';
      in_stack_00000004[4].actor_name[0x19] = '\0';
      in_stack_00000004[4].actor_name[0x1a] = '\0';
      in_stack_00000004[4].actor_name[0x1b] = '\0';
      in_stack_00000004[4].location.position.z = 1.4013e-45;
      return 1;
    }
    pCVar3 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_24 + -4);
    iVar5 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
    if (((iVar5 == 0) &&
        ((((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CGhoul"), iVar5 != 0 ||
           (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CTVBat"), iVar5 != 0)) ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CBatCreature"), iVar5 != 0
          )) || ((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CWerewolf"),
                 iVar5 != 0 ||
                 (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CSvetlana"),
                 iVar5 != 0)))))) ||
       ((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CDraculaBride"), iVar5 != 0
        || (((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CBatman"), iVar5 != 0
             || (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CBatCreature"),
                iVar5 != 0)) ||
            (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CBride"), iVar5 != 0))))
       )) {
      (*pCVar3->vtable->getBoundingBox)(pCVar3,&CStack_d8);
      iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(pCVar3->location).position,
                         (CVector3f *)&pCVar3->orient,&CStack_d8.min);
      if (iVar5 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n",pCVar3)
        ;
        pCStack_18 = (CVector3f *)(auStack_3c + 4);
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar2 = (*pCVar3->vtable->getBoundingBox)(pCVar3,&CStack_c0);
        pCStack_14 = &pCVar2->max;
        core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_60);
        CStack_60.x = (pCVar2->min).x + pCStack_14->x;
        CStack_60.y = (pCVar2->min).y + pCStack_14->y;
        CStack_60.z = (pCVar2->min).z + pCStack_14->z;
        core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_48);
        CStack_48.x = CStack_60.x * 0.5f;
        CStack_48.y = CStack_60.y * 0.5f;
        CStack_48.z = CStack_60.z * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar3,aCStack_84,&CStack_48);
        iVar5 = 0;
        iStack_28 = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,pCStack_18,aCStack_84);
          actor_ptr = g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CDemonActor *)0x0) break;
          if (pCVar3 == actor_ptr) {
            iStack_28 = 1;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar5 = iVar5 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar5 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (iStack_28 != 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_114);
          SStack_114.damage_amount = 0.1;
          SStack_114.damage_type = 0x6c;
          SStack_114.damage_flags = 0;
          SStack_114.impact_point.z = 0.0;
          SStack_114.impact_point.y = 0.0;
          SStack_114.impact_point.x = 0.0;
          SStack_114.attacker = in_stack_00000004;
          SStack_114.wielder = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,(char *)&SStack_114,SUB84 /* extract 2-byte value */(dVar6,0))
          ;
        }
      }
    }
    iStack_20 = iStack_20 + 1;
    iStack_24 = iStack_24 + 4;
  } while( true );
}
