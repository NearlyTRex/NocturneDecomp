// Name: core_gabriela.cpp_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4890()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4890(uint param_1, uint
   param_2) */

void core_gabriela_cpp_FUN_004d4890(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  int bone_index;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  double dVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float volume;
  double in_stack_ffffff5c;
  SDamageInfo local_9c;
  CVector3f CStack_60;
  byte auStack_54 [16];
  byte auStack_44 [20];
  CVector3f CStack_30;
  CVector3f CStack_24;
  CDemonActor *local_18;
  float fStack_14;
  
  this_ptr = &in_stack_00000004->model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = DAT_02d7b864;
      if (iVar2 == 7) {
        bone_index = DAT_02d7b868;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr,(CVector3f *)auStack_54,bone_index);
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
        if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
          fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                (&this_ptr->motion_controller,2);
          if ((float)0.40000000000000002 < fStack_14) {
            (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                      (&in_stack_00000004->base_actor,(CVector3f *)auStack_54,1.7);
          }
          else {
            fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                  (&this_ptr->motion_controller,1);
            if (fStack_14 <= (float)0.40000000000000002) {
              fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                    (&this_ptr->motion_controller,3);
              if ((float)0.40000000000000002 < fStack_14) {
                (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                          (&in_stack_00000004->base_actor,(CVector3f *)auStack_54,1.0);
              }
            }
            else {
              (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                        (&in_stack_00000004->base_actor,(CVector3f *)auStack_54,1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (in_stack_00000004->base_actor).vtable;
        iVar2 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x154) +
                            0x3c))();
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base_actor,(CVector3f *)auStack_44,
                            (CVector3f *)(auStack_54 + 4));
        (*pCVar1->handleFootstep)
                  (&in_stack_00000004->base_actor,pCVar4,iVar2,SUB84 /* extract 2-byte value */(in_stack_ffffff5c,0));
      }
      break;
    case 2:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                          g_CLightActorClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        if (pCVar3[4].scale.y != 1) {
          in_stack_00000004[2].cloth_data[0x5508] = -0x6e;
          in_stack_00000004[2].cloth_data[0x5509] = '\n';
          in_stack_00000004[2].cloth_data[0x550a] = '\x06';
          in_stack_00000004[2].cloth_data[0x550b] = -0x41;
          core_hero_cpp_FUN_004f3890();
          break;
        }
        in_stack_00000004[2].cloth_data[0x5508] = '|';
        in_stack_00000004[2].cloth_data[0x5509] = -0x27;
        in_stack_00000004[2].cloth_data[0x550a] = -0x60;
        in_stack_00000004[2].cloth_data[0x550b] = '>';
      }
    case 0x14:
      core_hero_cpp_FUN_004f3890();
      break;
    case 3:
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      break;
    case 6:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
      volume = SUB84 /* extract 2-byte value */(in_stack_ffffff5c,0);
      local_18 = pCVar3;
      if (pCVar3 != (CDemonActor *)0x0) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr,(CVector3f *)(auStack_44 + 8),DAT_02d7b878);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,&CStack_60,pCVar4);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_9c);
        local_9c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        fStack_14 = local_9c.damage_amount;
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar3,&CStack_30,&CStack_60);
        if (&local_9c.impact_direction != pCVar4) {
          local_9c.impact_direction.x = pCVar4->x;
          local_9c.impact_direction.y = pCVar4->y;
          local_9c.impact_direction.z = pCVar4->z;
        }
        local_9c.attacker = &in_stack_00000004->base_actor;
        local_9c.wielder = &in_stack_00000004->base_actor;
        (*local_18->vtable[1].playAmbientSoundWithVolume)(local_18,(char *)&local_9c,volume);
        in_stack_ffffff5c = (double)local_9c.damage_amount;
        if (0.0 < in_stack_ffffff5c) {
          dVar5 = crt_math_c_round_FUN_005fe6b0(in_stack_ffffff5c * 0.20000000000000001);
          local_18 = (CDemonActor *)(int)ROUND(dVar5);
          core_gore_cpp_FUN_004edbb0();
          (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,"kick1.wav");
          in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
         (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&in_stack_00000004->base_actor,&CStack_24,
                              &(in_stack_00000004->grabbed_by->location).position), 0.0 < pCVar4->z)
         ) {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_FUN_004d5c10();
      break;
    case 0x15:
      core_hero_cpp_FUN_004f38d0();
      break;
    case 0x16:
      iVar2 = core_hero_cpp_FUN_004f2ed0();
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,0,1);
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
