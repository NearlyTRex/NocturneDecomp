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
  bool bVar1;
  CDemonSet *this_ptr;
  CVector3f *input_local_point;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  CVector3f *unaff_retaddr;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar7;
  float in_stack_fffffefc;
  byte auStack_fc [48];
  int iStack_cc;
  CVector3f aCStack_c8 [2];
  CBoundingBox3D CStack_b0;
  CVector3f CStack_98;
  CVector3f aCStack_8c [2];
  byte auStack_6c [8];
  float fStack_64;
  float fStack_60;
  byte auStack_50 [12];
  float fStack_44;
  float fStack_40;
  byte auStack_38 [12];
  float fStack_2c;
  CDemonActor *pCStack_28;
  int iStack_20;
  int iStack_1c;
  CDemonActor *pCStack_18;
  
  if (in_stack_00000004[4].location.position.x < 0x41F00000) {
    return 0;
  }
  fVar2 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar2;
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_6c + 4),input_local_point);
  auStack_50._8_4_ = in_stack_00000004[2].orient.heading;
  auStack_50._0_4_ = 0.0;
  auStack_50._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,aCStack_8c,(CVector3f *)auStack_50);
  CStack_98.x = (float)auStack_6c._4_4_ + aCStack_8c[0].x;
  CStack_98.y = fStack_64 + aCStack_8c[0].y;
  CStack_98.z = fStack_60 + aCStack_8c[0].z;
  fStack_2c = (float)1.5 / in_stack_00000004[2].orient.heading;
  CStack_b0.max.x = aCStack_8c[0].x * fStack_2c;
  CStack_b0.max.y = aCStack_8c[0].y * fStack_2c;
  CStack_b0.max.z = aCStack_8c[0].z * fStack_2c;
  auStack_38._0_4_ = (float)auStack_6c._4_4_ - CStack_b0.max.x;
  auStack_38._4_4_ = fStack_64 - CStack_b0.max.y;
  auStack_38._8_4_ = fStack_60 - CStack_b0.max.z;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if (in_stack_00000004[2].orient_matrix.m[2].x != 0.0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x);
  }
  iVar6 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_38,&CStack_98);
    dVar7 = (double)fVar2;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    in_stack_00000004[4].location.area_id = (int)(in_stack_00000004[2].orient.heading * fVar2);
    pCStack_18 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar7,0);
    if (pCStack_18 != (CDemonActor *)0x0) {
      (*pCStack_18->vtable[1].hasCollision)(pCStack_18,collision_info);
    }
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCStack_28 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCStack_18 != (CDemonActor *)0x0) {
      iVar5 = (*pCStack_18->vtable[1].renderOpaque)(pCStack_18);
      this_ptr = g_CDemonSetPtr;
      if ((iVar5 != 0) && (iVar6 == 0)) {
        in_stack_00000004[4].location.position.x = 0x41F00000;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (pCVar4 == (CDemonActor *)0x0) {
      if (pCStack_28 != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar6 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar6 != 0) {
          (*in_stack_00000004->vtable[1].getBoundingBox)
                    (in_stack_00000004,(CBoundingBox3D *)collision_info);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_28);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  iStack_1c = 0;
  iStack_20 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iStack_1c) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",(CVector3f *)(auStack_6c + 4)
                );
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[4].actor_name + 0x1c),0x40000000);
      in_stack_00000004[4].actor_name[0x18] = '\x01';
      in_stack_00000004[4].actor_name[0x19] = '\0';
      in_stack_00000004[4].actor_name[0x1a] = '\0';
      in_stack_00000004[4].actor_name[0x1b] = '\0';
      in_stack_00000004[4].location.position.z = 1.4013e-45;
      return 1;
    }
    pCVar4 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_20 + -4);
    iVar6 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
    if (((iVar6 == 0) &&
        ((((iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CGhoul"), iVar6 != 0 ||
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CTVBat"), iVar6 != 0)) ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CBatCreature"), iVar6 != 0
          )) || ((iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CWerewolf"),
                 iVar6 != 0 ||
                 (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CSvetlana"),
                 iVar6 != 0)))))) ||
       ((iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CDraculaBride"), iVar6 != 0
        || (((iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CBatman"), iVar6 != 0
             || (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CBatCreature"),
                iVar6 != 0)) ||
            (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,"CBride"), iVar6 != 0))))
       )) {
      (*pCVar4->vtable->getBoundingBox)(pCVar4,(CBoundingBox3D *)(auStack_fc + 0x2c));
      iVar6 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(pCVar4->location).position,
                         (CVector3f *)&pCVar4->orient,aCStack_c8);
      if (iVar6 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n",pCVar4)
        ;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar3 = (*pCVar4->vtable->getBoundingBox)(pCVar4,&CStack_b0);
        in_stack_00000004 = (CDemonActor *)&pCVar3->max;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_50 + 8));
        auStack_50._8_4_ = (pCVar3->min).x + ((CVector3f *)in_stack_00000004)->x;
        fStack_44 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_40 = (pCVar3->min).z + (pCVar3->max).z;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_38 + 8));
        auStack_38._8_4_ = (float)auStack_50._8_4_ * 0.5f;
        fStack_2c = fStack_44 * 0.5f;
        pCStack_28 = (CDemonActor *)(fStack_40 * 0.5f);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (pCVar4,(CVector3f *)auStack_6c,(CVector3f *)(auStack_38 + 8));
        iVar6 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,unaff_retaddr,(CVector3f *)auStack_6c);
          actor_ptr = g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CDemonActor *)0x0) break;
          if (pCVar4 == actor_ptr) {
            bVar1 = true;
            break;
          }
          iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
          if (iVar5 == 0) break;
          iVar6 = iVar6 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar6 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_fc);
          auStack_fc._4_4_ = 0.1;
          iStack_cc = 0x6c;
          auStack_fc._8_4_ = 0;
          auStack_fc._20_4_ = 0.0;
          auStack_fc._16_4_ = 0.0;
          auStack_fc._12_4_ = 0.0;
          aCStack_c8[0].x = (float)in_stack_00000004;
          aCStack_c8[0].z = (float)(**(code **)((int)pCVar3[0xe].max.y + 0x8c))(in_stack_00000004);
          (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,auStack_fc + 4,in_stack_fffffefc);
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_20 = iStack_20 + 4;
  } while( true );
}
