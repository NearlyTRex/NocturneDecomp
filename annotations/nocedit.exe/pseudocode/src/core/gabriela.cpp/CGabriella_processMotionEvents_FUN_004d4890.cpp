// Name: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(CGabriella *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CLadder *this_ptr_01;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  int bone_index;
  EGroundType EVar3;
  CDemonActor *pCVar4;
  CCharacter *this_ptr_02;
  CVector3f *pCVar5;
  CGabriella *in_stack_ffffff58;
  float fStack_94;
  CVector3f local_84 [2];
  CGabriella *local_6c;
  CGabriella *local_68;
  byte local_64 [12];
  byte local_58 [16];
  byte auStack_48 [20];
  CVector3f local_34;
  CVector3f local_28;
  CCharacter *local_1c;
  float local_18;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_00->motion_controller,&delta_time);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = INT_02d7b864;
      if (iVar2 == 7) {
        bone_index = INT_02d7b868;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr_00,(CVector3f *)local_58,bone_index);
      this_ptr_01 = (this_ptr->base).ladder_to_climb;
      if (this_ptr_01 == (CLadder *)0x0) {
        if ((this_ptr->base).base.is_on_ground != 0) {
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
        EVar3 = (*((this_ptr_01->base).vtable._ub)->getGroundType)(&this_ptr_01->base);
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,(CVector3f *)auStack_48,
                            (CVector3f *)(local_58 + 4));
        (*pCVar1->handleFootstep)((CDemonActor *)this_ptr,pCVar5,EVar3,(float)in_stack_ffffff58);
      }
      break;
    case 2:
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                         ((this_ptr->base).object_to_pick_up,g_CLightActorClassInfo.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        if (pCVar4[4].scale.y != 1) {
          this_ptr->flashlight_angle = -0.5235988;
          core_hero_cpp_CHero_executeObjectPickup_FUN_004f3890(&this_ptr->base,0);
          break;
        }
        this_ptr->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_CHero_executeObjectPickup_FUN_004f3890(&this_ptr->base,0);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
      in_stack_ffffff58 = (CGabriella *)this_ptr_00;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar2);
      break;
    case 6:
      this_ptr_02 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_1c = this_ptr_02;
      if (this_ptr_02 != (CCharacter *)0x0) {
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,(CVector3f *)(auStack_48 + 8),INT_02d7b878);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,(CVector3f *)local_64,pCVar5);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff60);
        local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr_02,&local_34,(CVector3f *)local_64);
        if (local_84 != pCVar5) {
          local_84[0].x = pCVar5->x;
          local_84[0].y = pCVar5->y;
          local_84[0].z = pCVar5->z;
        }
        local_6c = this_ptr;
        local_68 = this_ptr;
        (*(((local_1c->base).vtable._uc)->_uc).processDamage)
                  (local_1c,(SDamageInfo *)&stack0xffffff60);
        if (0.0 < (double)fStack_94) {
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                    (g_CGorePtr,(CVector3f *)(local_64 + 8),(CVector3f *)0x0,
                     (int)ROUND(ROUND((double)fStack_94 * 0.20000000000000001)) + 1,0);
          in_stack_ffffff58 = this_ptr;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"kick1.wav");
          (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar4 = (this_ptr->base).base.grabbed_by;
      if ((pCVar4 != (CDemonActor *)0x0) &&
         (pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_28,&(pCVar4->location).position),
         0.0 < pCVar5->z)) {
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
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_004d5c10(this_ptr);
      break;
    case 0x15:
      core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(&this_ptr->base,0);
      break;
    case 0x16:
      iVar2 = core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,0,1);
      }
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
