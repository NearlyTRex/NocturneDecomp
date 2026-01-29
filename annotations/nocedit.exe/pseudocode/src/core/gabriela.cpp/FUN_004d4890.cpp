// Name: core_gabriela.cpp_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004d4890(void)

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
  CCharacter *this_ptr_00;
  CVector3f *pCVar4;
  double dVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffff44;
  ulonglong local_a0;
  float fStack_94;
  CVector3f local_84 [2];
  CCharacter *local_6c;
  byte local_68 [12];
  byte auStack_5c [28];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CCharacter *local_1c;
  float local_18;
  int iStack_14;
  
  this_ptr = &in_stack_00000004->model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = INT_02d7b864;
      if (iVar2 == 7) {
        bone_index = INT_02d7b868;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr,(CVector3f *)(auStack_5c + 4),bone_index);
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
        if (*(int *)(in_stack_00000004->unk1 + 4) != 0) {
          local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                               (&this_ptr->motion_controller,2);
          if ((float)0.40000000000000002 < local_18) {
            (*((in_stack_00000004->base).vtable._ub)->processFootstepAtOffset)
                      (&in_stack_00000004->base,(CVector3f *)(auStack_5c + 4),1.7);
          }
          else {
            local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (&this_ptr->motion_controller,1);
            if (local_18 <= (float)0.40000000000000002) {
              local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                   (&this_ptr->motion_controller,3);
              if ((float)0.40000000000000002 < local_18) {
                (*((in_stack_00000004->base).vtable._ub)->processFootstepAtOffset)
                          (&in_stack_00000004->base,(CVector3f *)(auStack_5c + 4),1.0);
              }
            }
            else {
              (*((in_stack_00000004->base).vtable._ub)->processFootstepAtOffset)
                        (&in_stack_00000004->base,(CVector3f *)(auStack_5c + 4),1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (in_stack_00000004->base).vtable._ub;
        iVar2 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x154) +
                            0x3c))();
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base,(CVector3f *)auStack_5c,(CVector3f *)local_68);
        (*pCVar1->handleFootstep)(&in_stack_00000004->base,pCVar4,iVar2,in_stack_ffffff44);
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
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      break;
    case 6:
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
      local_1c = this_ptr_00;
      if (this_ptr_00 != (CCharacter *)0x0) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr,&local_40,INT_02d7b878);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base,(CVector3f *)(local_68 + 4),pCVar4);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_a0);
        local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        local_a0._4_4_ = local_18;
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr_00,&local_34,(CVector3f *)(local_68 + 4));
        if (local_84 != pCVar4) {
          local_84[0].x = pCVar4->x;
          local_84[0].y = pCVar4->y;
          local_84[0].z = pCVar4->z;
        }
        local_6c = in_stack_00000004;
        local_68._0_4_ = in_stack_00000004;
        (*(((local_1c->base).vtable._uc)->_uc).processDamage)(local_1c,(SDamageInfo *)&local_a0);
        local_a0 = (double)fStack_94;
        if (0.0 < local_a0) {
          dVar5 = round(local_a0 * 0.20000000000000001);
          iStack_14 = (int)ROUND(dVar5);
          in_stack_ffffff44 = 7.098521e-39;
          core_gore_cpp_FUN_004edbb0();
          (*((in_stack_00000004->base).vtable._ub)->playSound)
                    (&in_stack_00000004->base,"kick1.wav");
          in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
         (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&in_stack_00000004->base,&local_28,
                              &(in_stack_00000004->grabbed_by->location).position), 0.0 < pCVar4->z)
         ) {
        (*((in_stack_00000004->base).vtable._ub)->playSound)
                  (&in_stack_00000004->base,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (*((in_stack_00000004->base).vtable._ub)->playSound)
                (&in_stack_00000004->base,"gb-fall1.wav");
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
