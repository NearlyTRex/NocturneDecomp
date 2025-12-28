// Name: core_lightgun.cpp_FUN_00505c70
// Address: 00505c70
// Address Range: [[00505c70, 00506442]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505c70()

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_00505c70(uint param_1) */

uint core_lightgun_cpp_FUN_00505c70(void)

{
  float fVar1;
  CDemonSet *this_ptr;
  CVector3f *input_local_point;
  CBoundingBox3D *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CDemonSet *in_stack_fffffee0;
  CDemonActor *pCVar6;
  CBoundingBox3D *in_stack_fffffef0;
  CBoundingBox3D CStack_d8;
  float fStack_c0;
  CBoundingBox3D CStack_bc;
  CVector3f aCStack_a4 [2];
  byte auStack_8c [8];
  float fStack_84;
  CVector3f local_78;
  byte auStack_6c [8];
  float fStack_64;
  CVector3f CStack_60;
  byte auStack_54 [8];
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  byte auStack_38 [12];
  uint uStack_2c;
  int iStack_28;
  CDemonActor *pCStack_24;
  float *pfStack_20;
  CDemonActor *pCStack_1c;
  byte *puStack_18;
  CDemonActor *pCStack_14;
  
  if (in_stack_00000004[4].location.position.x < DAT_00660a40) {
    return 0;
  }
  fVar1 = in_stack_00000004[2].orient.heading;
  in_stack_00000004[4].location.position.x = 0.0;
  in_stack_00000004[4].location.area_id = (int)fVar1;
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_6c,input_local_point);
  local_78.z = in_stack_00000004[2].orient.heading;
  local_78.x = 0.0;
  local_78.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)&CStack_bc.min.z,&local_78);
  CStack_bc.min.x = (float)auStack_8c._0_4_ + CStack_bc.max.x;
  CStack_bc.min.y = (float)auStack_8c._4_4_ + CStack_bc.max.y;
  CStack_bc.min.z = fStack_84 + CStack_bc.max.z;
  auStack_54._4_4_ = (float)1.5 / in_stack_00000004[2].orient.heading;
  CStack_d8.max.y = CStack_bc.max.x * (float)auStack_54._4_4_;
  CStack_d8.max.z = CStack_bc.max.y * (float)auStack_54._4_4_;
  fStack_c0 = CStack_bc.max.z * (float)auStack_54._4_4_;
  CStack_60.y = (float)auStack_8c._0_4_ - CStack_d8.max.y;
  CStack_60.z = (float)auStack_8c._4_4_ - CStack_d8.max.z;
  auStack_54._0_4_ = fStack_84 - fStack_c0;
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
    puStack_18 = (byte *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&CStack_44,aCStack_a4);
    if (((float)puStack_18 < 0.0) || (1.0 < (float)puStack_18)) break;
    in_stack_00000004[4].location.area_id =
         (int)(in_stack_00000004[2].orient.heading * (float)puStack_18);
    pCStack_1c = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_1c != (CDemonActor *)0x0) &&
       (iVar4 = (*pCStack_1c->vtable[1].hasCollision)
                          (pCStack_1c,(SCollisionInfo *)in_stack_fffffee0), 0 < iVar4)) {
      pCStack_1c = (CDemonActor *)0x0;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    in_stack_fffffee0 = (CDemonSet *)g_CTriggerClassInfo.name_hash;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCStack_14 != (CDemonActor *)0x0) {
      iVar4 = (*pCStack_14->vtable[1].renderOpaque)(pCStack_14);
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
      if (pCStack_24 != (CDemonActor *)0x0) {
        core_trigger_cpp_FUN_005e0aa0();
        iVar5 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar5 != 0) {
          (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffef0);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_1c);
        break;
      }
    }
    else {
      in_stack_fffffee0 = g_CDemonSetPtr;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_FUN_00505ac0();
  pfStack_20 = (float *)0x0;
  pCStack_24 = (CDemonActor *)0x0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= (int)pfStack_20) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,in_stack_00000004,"cre-fire.wav",(CVector3f *)(auStack_6c + 4)
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
    pCVar3 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + (int)pCStack_24 + -4);
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
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s in volume\n");
        puStack_18 = auStack_38;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar2 = (*pCVar3->vtable->getBoundingBox)(pCVar3,&CStack_bc);
        pCStack_14 = (CDemonActor *)&pCVar2->max;
        core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_60);
        auStack_6c._0_4_ = (pCVar2->min).x + *pfStack_20;
        auStack_6c._4_4_ = (pCVar2->min).y + pfStack_20[1];
        fStack_64 = (pCVar2->min).z + pfStack_20[2];
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)auStack_54);
        auStack_54._4_4_ = (float)auStack_6c._4_4_ * 0.5f;
        fStack_4c = fStack_64 * 0.5f;
        fStack_48 = CStack_60.x * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (pCVar3,(CVector3f *)auStack_8c,(CVector3f *)(auStack_54 + 4));
        iVar5 = 0;
        uStack_2c = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,(CVector3f *)pCStack_1c,(CVector3f *)(auStack_8c + 4));
          pCVar6 = g_CDemonSetPtr->collision_actor;
          if (pCVar6 == (CDemonActor *)0x0) break;
          if (pCVar3 == pCVar6) {
            iStack_28 = 1;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar6,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar5 = iVar5 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar5 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (iStack_28 != 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffeec);
          pCVar6 = in_stack_00000004;
          (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xfffffeec,(float)pCVar6);
        }
      }
    }
    pfStack_20 = (float *)((int)pfStack_20 + 1);
    pCStack_24 = (CDemonActor *)((int)pCStack_24 + 4);
  } while( true );
}
