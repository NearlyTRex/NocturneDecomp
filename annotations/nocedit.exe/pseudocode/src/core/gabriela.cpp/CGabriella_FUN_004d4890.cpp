// Name: core_gabriela.cpp_CGabriella_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4890(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4890(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  int bone_index;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_01;
  CVector3f *pCVar4;
  double dVar5;
  float in_stack_00000008;
  char *in_stack_ffffff58;
  ulonglong local_a0;
  float fStack_94;
  CVector3f local_84 [2];
  CGabriella *local_6c;
  CGabriella *local_68;
  CVector3f local_64;
  byte local_58 [16];
  byte auStack_48 [20];
  CVector3f local_34;
  CVector3f local_28;
  CCharacter *local_1c;
  float local_18;
  int iStack_14;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = INT_02d7b864;
      if (iVar2 == 7) {
        bone_index = INT_02d7b868;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr_00,(CVector3f *)local_58,bone_index);
      pCVar3 = (this_ptr->base).ladder_to_climb;
      if (pCVar3 == (CDemonActor *)0x0) {
        if ((this_ptr->base).base.field3_0x2410 != 0) {
          local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                               (&this_ptr_00->motion_controller,2);
          if ((float)0.40000000000000002 < local_18) {
            (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)this_ptr,(CVector3f *)local_58,1.7);
          }
          else {
            local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (&this_ptr_00->motion_controller,1);
            if (local_18 <= (float)0.40000000000000002) {
              local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                   (&this_ptr_00->motion_controller,3);
              if ((float)0.40000000000000002 < local_18) {
                (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                          ((CDemonActor *)this_ptr,(CVector3f *)local_58,1.0);
              }
            }
            else {
              (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                        ((CDemonActor *)this_ptr,(CVector3f *)local_58,1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (this_ptr->base).base.base.vtable._ub;
        iVar2 = (*((pCVar3->vtable)._ub)->getGroundType)(pCVar3);
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,(CVector3f *)auStack_48,
                            (CVector3f *)(local_58 + 4));
        (*pCVar1->handleFootstep)((CDemonActor *)this_ptr,pCVar4,iVar2,(float)in_stack_ffffff58);
      }
      break;
    case 2:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         ((this_ptr->base).object_to_pick_up,g_CLightActorClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        if (pCVar3[4].scale.y != 1) {
          this_ptr->flashlight_angle = -0.5235988;
          core_hero_cpp_CHero_FUN_004f3890(&this_ptr->base);
          break;
        }
        this_ptr->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_CHero_FUN_004f3890(&this_ptr->base);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      break;
    case 6:
      this_ptr_01 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_1c = this_ptr_01;
      if (this_ptr_01 != (CCharacter *)0x0) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,(CVector3f *)(auStack_48 + 8),INT_02d7b878);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_64,pCVar4);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_a0);
        local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        local_a0._4_4_ = local_18;
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr_01,&local_34,&local_64);
        if (local_84 != pCVar4) {
          local_84[0].x = pCVar4->x;
          local_84[0].y = pCVar4->y;
          local_84[0].z = pCVar4->z;
        }
        local_6c = this_ptr;
        local_68 = this_ptr;
        (*(((local_1c->base).vtable._uc)->_uc).processDamage)(local_1c,(SDamageInfo *)&local_a0);
        local_a0 = (double)fStack_94;
        if (0.0 < local_a0) {
          dVar5 = round(local_a0 * 0.20000000000000001);
          iStack_14 = (int)ROUND(dVar5);
          core_gore_cpp_FUN_004edbb0();
          in_stack_ffffff58 = "kick1.wav";
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"kick1.wav");
          (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar3 = (this_ptr->base).base.grabbed_by;
      if ((pCVar3 != (CDemonActor *)0x0) &&
         (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_28,&(pCVar3->location).position),
         0.0 < pCVar4->z)) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_CGabriella_FUN_004d5c10(this_ptr);
      break;
    case 0x15:
      core_hero_cpp_CHero_FUN_004f38d0(&this_ptr->base);
      break;
    case 0x16:
      iVar2 = core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,0,1);
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
