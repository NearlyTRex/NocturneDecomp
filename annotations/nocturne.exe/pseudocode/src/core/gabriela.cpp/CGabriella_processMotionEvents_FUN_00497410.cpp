// Name: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410
// Address: 00497410
// Address Range: [[00497410, 0049780b]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(CGabriella *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CLadder *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  int bone_index;
  EGroundType ground_type;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_01;
  CVector3f *pCVar4;
  double dVar5;
  CGabriella *in_stack_ffffff58;
  byte local_a0 [16];
  float fStack_90;
  CVector3f local_84 [2];
  uint local_6c;
  uint local_68;
  byte local_64 [12];
  byte local_58 [16];
  byte auStack_48 [20];
  CVector3f local_34;
  CVector3f local_28;
  CCharacter *local_1c;
  float local_18;
  
  this_ptr = &(param_1->base).base.model;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&param_2);
    switch(iVar2) {
    case 1:
    case 7:
      bone_index = _DAT_01c713b4;
      if (iVar2 == 7) {
        bone_index = _DAT_01c713b8;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                (this_ptr,(CVector3f *)local_58,bone_index);
      this_ptr_00 = (param_1->base).ladder_to_climb;
      if (this_ptr_00 == (CLadder *)0x0) {
        if ((param_1->base).base.is_on_ground != 0) {
          local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                      (this_ptr,2);
          if ((float)0.40000000000000002 < local_18) {
            (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)param_1,(CVector3f *)local_58,1.7);
          }
          else {
            local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                        (this_ptr,1);
            if (local_18 <= (float)0.40000000000000002) {
              local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                          (this_ptr,3);
              if ((float)0.40000000000000002 < local_18) {
                (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                          ((CDemonActor *)param_1,(CVector3f *)local_58,1.0);
              }
            }
            else {
              (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                        ((CDemonActor *)param_1,(CVector3f *)local_58,1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (param_1->base).base.base.vtable._ub;
        ground_type = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)param_1,(CVector3f *)auStack_48,
                            (CVector3f *)(local_58 + 4));
        (*pCVar1->handleFootstep)
                  ((CDemonActor *)param_1,pCVar4,ground_type,(float)in_stack_ffffff58);
      }
      break;
    case 2:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         ((param_1->base).object_to_pick_up,
                          g_CLightActorActorType_00764a9c.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        if (pCVar3[4].dead2 != 1) {
          param_1->flashlight_angle = -0.5235988;
          core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(&param_1->base,0);
          break;
        }
        param_1->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(&param_1->base,0);
      break;
    case 3:
      (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
      in_stack_ffffff58 = (CGabriella *)0x1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar2);
      break;
    case 6:
      this_ptr_01 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              ((param_1->base).base.grabbed_by,g_CEnemyActorType_01bcdebc.name_hash)
      ;
      local_1c = this_ptr_01;
      if (this_ptr_01 != (CCharacter *)0x0) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr,(CVector3f *)(auStack_48 + 8),_DAT_01c713c8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,(CVector3f *)local_64,pCVar4);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_a0);
        local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41700000)
        ;
        local_a0._4_4_ = local_18;
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           ((CDemonActor *)this_ptr_01,&local_34,(CVector3f *)local_64);
        if (local_84 != pCVar4) {
          local_84[0].x = pCVar4->x;
          local_84[0].y = pCVar4->y;
          local_84[0].z = pCVar4->z;
        }
        local_6c = param_1;
        local_68 = param_1;
        (*(((local_1c->base).vtable._uc)->_uc).getGrabbed)
                  (local_1c,(CDemonActor *)local_a0,(int)in_stack_ffffff58);
        local_a0._4_8_ = (ulonglong)fStack_90;
        if (0.0 < (double)local_a0._4_8_) {
          local_a0._0_4_ = 0x497725;
          dVar5 = round((double)local_a0._4_8_ * 0.20000000000000001);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                    ((CGore *)INT_005b96c4,(CVector3f *)(local_64 + 8),(CVector3f *)0x0,
                     (int)ROUND(dVar5) + 1,0);
          in_stack_ffffff58 = param_1;
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"kick1.wav");
          (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar3 = (param_1->base).base.grabbed_by;
      if ((pCVar3 != (CDemonActor *)0x0) &&
         (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)param_1,&local_28,&(pCVar3->location).position),
         0.0 < pCVar4->z)) {
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(param_1);
      break;
    case 0x15:
      core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(&param_1->base,0);
      break;
    case 0x16:
      iVar2 = core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
