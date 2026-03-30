// Name: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004d4890
// Address: 004d4890
// Address Range: [[004d4890, 004d4c8b]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(CGabriella *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_03;
  CLadder *this_ptr_04;
  CDemonActor_vtable *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int bone_index;
  EGroundType EVar4;
  CLightActor *pCVar4;
  CEnemy *this_ptr_02;
  CVector3f *pCVar5;
  SDamageInfo SStack_a0;
  CVector3f local_64;
  CVector3f local_58 [2];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CEnemy *local_1c;
  float local_18;
  
  this_ptr_03 = &(this_ptr->base).base.model;
  do {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_03->motion_controller,&delta_time);
    switch(iVar3) {
    case 1:
    case 7:
      bone_index = g_GabriellaIndices[7];
      if (iVar3 == 7) {
        bone_index = g_GabriellaIndices[8];
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                (this_ptr_03,local_58,bone_index);
      this_ptr_04 = (this_ptr->base).ladder_to_climb;
      if (this_ptr_04 == (CLadder *)0x0) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                               (&this_ptr_03->motion_controller,2);
          if ((float)0.40000000000000002 < local_18) {
            (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)this_ptr,local_58,1.7);
          }
          else {
            local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (&this_ptr_03->motion_controller,1);
            if (local_18 <= (float)0.40000000000000002) {
              local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                   (&this_ptr_03->motion_controller,3);
              if ((float)0.40000000000000002 < local_18) {
                (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                          ((CDemonActor *)this_ptr,local_58,1.0);
              }
            }
            else {
              (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                        ((CDemonActor *)this_ptr,local_58,1.0);
            }
          }
        }
      }
      else {
        pCVar1 = (this_ptr->base).base.base.vtable._ub;
        EVar4 = (*((this_ptr_04->base).vtable._ub)->getGroundType)(&this_ptr_04->base);
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,local_58,&local_64);
        (*pCVar1->handleFootstep)((CDemonActor *)this_ptr,pCVar5,EVar4);
      }
      break;
    case 2:
      pCVar4 = (CLightActor *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         ((this_ptr->base).object_to_pick_up,g_CLightActorClassInfo.name_hash);
      if (pCVar4 != (CLightActor *)0x0) {
        if (pCVar4->light_actor_type != LIGHT_TYPE_FLASHLIGHT) {
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
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_03->motion_controller,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar3);
      break;
    case 6:
      this_ptr_02 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_1c = this_ptr_02;
      if (this_ptr_02 != (CEnemy *)0x0) {
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_03,&local_40,g_GabriellaIndices[0xc]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_64,pCVar5);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_a0);
        SStack_a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
        local_18 = SStack_a0.damage_amount;
        pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr_02,&local_34,&local_64);
        if (&SStack_a0.impact_direction != pCVar5) {
          SStack_a0.impact_direction.x = pCVar5->x;
          SStack_a0.impact_direction.y = pCVar5->y;
          SStack_a0.impact_direction.z = pCVar5->z;
        }
        SStack_a0.attacker = (CDemonActor *)this_ptr;
        SStack_a0.wielder = (CDemonActor *)this_ptr;
        (*(((local_1c->base).base.vtable._uc)->_uc).processDamage)(&local_1c->base,&SStack_a0);
        if (0.0 < (double)SStack_a0.damage_amount) {
          local_18 = (float)(int)ROUND(ROUND((double)SStack_a0.damage_amount * 0.20000000000000001));
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                    (g_CGorePtr,&local_64,(CVector3f *)0x0,(int)local_18 + 1,0);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"kick1.wav");
          (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar2 = (this_ptr->base).base.grabbed_by;
      if ((pCVar2 != (CDemonActor *)0x0) &&
         (pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_28,&(pCVar2->location).position),
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
      iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_03->motion_controller,0,1);
      }
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
