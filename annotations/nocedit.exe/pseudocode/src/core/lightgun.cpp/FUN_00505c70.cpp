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
  CBoundingBox3D *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000018;
  CDemonActor *in_stack_0000001c;
  CDemonActor *in_stack_00000024;
  uint in_stack_0000002c;
  CDemonActor *in_stack_00000034;
  CDemonActor *in_stack_00000044;
  CBoundingBox3D *in_stack_00000058;
  float in_stack_0000005c;
  float in_stack_00000074;
  float in_stack_00000078;
  float in_stack_0000007c;
  float in_stack_00000080;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  uint *in_stack_000000a0;
  uint in_stack_000000b4;
  uint in_stack_000000b8;
  CVector3f *in_stack_000000bc;
  float *in_stack_000000c0;
  CVector3f *in_stack_000000c4;
  double dVar5;
  CBoundingBox3D *in_stack_ffffff38;
  float in_stack_ffffff84;
  CDemonActor *pCStack_70;
  CVector3f CStack_60;
  float fVar6;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (in_stack_00000004[4].location.position.x < DAT_00660a40) {
    return 0;
  }
  fVar6 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar6;
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_60,input_local_point);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)&stack0xffffff80,(CVector3f *)&stack0xffffffbc);
  fStack_1c = (float)1.5 / in_stack_00000004[2].orient.heading;
  fVar6 = CStack_60.z - in_stack_ffffff84 * fStack_1c;
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
    in_stack_0000001c =
         (CDemonActor *)
         core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                   (g_CDemonSetPtr,(CVector3f *)&stack0xfffffff0,(CVector3f *)&pCStack_70);
    dVar5 = (double)(float)in_stack_0000001c;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    in_stack_00000004[4].location.area_id =
         (int)(in_stack_00000004[2].orient.heading * (float)in_stack_0000001c);
    in_stack_00000018 =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((in_stack_00000018 != (CDemonActor *)0x0) &&
       (iVar3 = (*in_stack_00000018->vtable[1].hasCollision)
                          (in_stack_00000018,(SCollisionInfo *)((ulonglong)dVar5 >> 0x20)),
       0 < iVar3)) {
      in_stack_0000002c = 0;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    in_stack_00000024 =
         core_actor_cpp_castToClassHash_FUN_0040c790
                   (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (in_stack_00000034 != (CDemonActor *)0x0) {
      iVar3 = (*in_stack_00000034->vtable[1].renderOpaque)(in_stack_00000034);
      this_ptr = g_CDemonSetPtr;
      if ((iVar3 != 0) && (iVar4 == 0)) {
        in_stack_00000004[4].location.position.x = DAT_00660a40;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar2 == (CDemonActor *)0x0) {
      if (in_stack_00000024 != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar4 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar4 != 0) {
          in_stack_00000058 =
               (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_ffffff38);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000044);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  in_stack_0000005c = 0.0;
  in_stack_00000058 = (CBoundingBox3D *)0x0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= (int)in_stack_0000005c) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",(CVector3f *)&stack0x00000014
                );
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[4].actor_name + 0x1c),DAT_00660a48);
      in_stack_00000004[4].actor_name[0x18] = '\x01';
      in_stack_00000004[4].actor_name[0x19] = '\0';
      in_stack_00000004[4].actor_name[0x1a] = '\0';
      in_stack_00000004[4].actor_name[0x1b] = '\0';
      in_stack_00000004[4].location.position.z = 1.4013e-45;
      return 1;
    }
    pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + (int)in_stack_00000058 + -4);
    iVar4 = (*pCVar2->vtable[1].renderOpaque)(pCVar2);
    if (((iVar4 == 0) &&
        ((((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CGhoul"), iVar4 != 0 ||
           (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CTVBat"), iVar4 != 0)) ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatCreature"), iVar4 != 0
          )) || ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CWerewolf"),
                 iVar4 != 0 ||
                 (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CSvetlana"),
                 iVar4 != 0)))))) ||
       ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CDraculaBride"), iVar4 != 0
        || (((iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatman"), iVar4 != 0
             || (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBatCreature"),
                iVar4 != 0)) ||
            (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBride"), iVar4 != 0))))
       )) {
      (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xffffffc4);
      iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(pCVar2->location).position,
                         (CVector3f *)&pCVar2->orient,(CVector3f *)&stack0xffffffd8);
      if (iVar4 != 0) {
        pCStack_70 = pCVar2;
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n");
        in_stack_000000a0 = &stack0x0000007c;
        pCStack_70 = (CDemonActor *)0x505f8a;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCStack_70 = (CDemonActor *)0x505f9c;
        pCVar1 = (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xfffffffc);
        in_stack_000000bc = &pCVar1->max;
        CStack_60.z = 7.381177e-39;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x00000070);
        in_stack_00000074 = (pCVar1->min).x + *in_stack_000000c0;
        in_stack_00000078 = (pCVar1->min).y + in_stack_000000c0[1];
        in_stack_0000007c = (pCVar1->min).z + in_stack_000000c0[2];
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x0000008c);
        in_stack_00000090 = in_stack_00000078 * 0.5f;
        in_stack_00000094 = in_stack_0000007c * 0.5f;
        in_stack_00000098 = in_stack_00000080 * 0.5f;
        CStack_60.z = 7.381377e-39;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (pCVar2,(CVector3f *)&stack0x00000054,(CVector3f *)&stack0x00000090);
        iVar4 = 0;
        in_stack_000000b4 = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,in_stack_000000c4,(CVector3f *)&stack0x00000058);
          actor_ptr = g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CDemonActor *)0x0) break;
          if (pCVar2 == actor_ptr) {
            in_stack_000000b8 = 1;
            break;
          }
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
          if (iVar3 == 0) break;
          iVar4 = iVar4 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar4 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (in_stack_000000c0 != (float *)0x0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffd4);
          fStack_14 = 0.0;
          fStack_18 = 0.0;
          fStack_1c = 0.0;
          in_stack_0000001c = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          (*pCVar2->vtable[1].playAmbientSoundWithVolume)(pCVar2,(char *)&fStack_1c,fVar6);
        }
      }
    }
    in_stack_0000005c = (float)((int)in_stack_0000005c + 1);
    in_stack_00000058 = (CBoundingBox3D *)((int)in_stack_00000058 + 4);
  } while( true );
}
