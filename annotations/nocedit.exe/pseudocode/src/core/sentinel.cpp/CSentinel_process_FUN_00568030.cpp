// Name: core_sentinel.cpp_CSentinel_process_FUN_00568030
// Address: 00568030
// Address Range: [[00568030, 00568b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint uVar7;
  CVector3f *pCVar8;
  int extraout_EAX;
  CSentinel *extraout_EAX_00;
  CPathMap *pCVar9;
  CSentinel *in_stack_fffffe60;
  CSentinel *pCVar10;
  float fVar11;
  float fVar12;
  CSentinel *in_stack_fffffe68;
  SDamageInfo local_164;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  uint local_dc;
  float local_d8;
  float local_d0;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
LAB_00568089:
  if (0.0 < local_2c) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    switch(uVar7) {
    case 100:
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      pCVar10 = in_stack_fffffe68;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (iVar3 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
         pCVar10 = in_stack_fffffe68, iVar3 == 0)) {
        in_stack_fffffe60 = (CSentinel *)(this_ptr->base).victim;
        pCVar6 = (*(((in_stack_fffffe60->base).base.base.vtable._uc)->_uc).getGrabber)
                           ((CCharacter *)in_stack_fffffe60);
        pCVar10 = in_stack_fffffe68;
        if ((pCVar6 == (CDemonActor *)0x0) &&
           (pCVar2 = (CCharacter *)(this_ptr->base).victim, in_stack_fffffe60 = this_ptr,
           iVar3 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar2,(CDemonActor *)this_ptr,0), pCVar10 = in_stack_fffffe68,
           iVar3 != 0)) {
          local_110.z = 4.0f;
          local_110.x = 0.0;
          local_110.y = 0.0;
          pCVar10 = this_ptr;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_c8,&local_110);
          pCVar6 = (this_ptr->base).victim;
          fVar12 = local_c8.x - (pCVar6->location).position.x;
          fVar11 = local_c8.z - (pCVar6->location).position.z;
          fVar12 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
          fVar11 = (float)0.80000000000000004;
          in_stack_fffffe68 = (CSentinel *)(this_ptr->base).victim;
          if (ABS(local_c8.y - (in_stack_fffffe68->base).base.base.location.position.y) <=
              (float)4) {
            if ((fVar11 < fVar12) ||
               (iVar3 = (*(((in_stack_fffffe68->base).base.base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)in_stack_fffffe68,(CDemonActor *)this_ptr,0),
               pCVar10 = in_stack_fffffe68, iVar3 != 0)) {
              in_stack_fffffe68 = pCVar10;
              if (fVar11 < fVar12) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&this_ptr_00->motion_controller,0,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,0,1);
            }
            break;
          }
        }
      }
      in_stack_fffffe68 = pCVar10;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,0,1);
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
        pCVar2 = (CCharacter *)(this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&local_164);
      }
      break;
    case 0x67:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"wing?.wav");
      break;
    case 0x68:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
    }
    goto LAB_00568089;
  }
  fVar12 = (this_ptr->base).speed;
  fVar11 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar11 * fVar12;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar3 = pSVar4->state_index;
  local_1c = iVar3;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if ((iVar3 == 10) || (iVar3 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
    }
    else {
      (this_ptr->base).base.collision_cylinder_radius = 2.0;
    }
    switch(local_1c) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX == 0) {
          in_stack_fffffe60 = (CSentinel *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
          in_stack_fffffe60 = (CSentinel *)0x2;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
      }
      else {
        local_5c = (pCVar6->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_58 = (pCVar6->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_54 = (pCVar6->location).position.z - (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= 12.0f)
        {
          in_stack_fffffe60 = (CSentinel *)0x2;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
        else {
          in_stack_fffffe60 = (CSentinel *)0x3;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        in_stack_fffffe60 = (CSentinel *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      break;
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar12 = 4.0f;
      pCVar10 = (CSentinel *)&(this_ptr->base).base.model;
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        fVar11 = 0.17453292;
        local_20 = 4.0f;
        in_stack_fffffe60 = (CSentinel *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_98 = 0.0;
        local_90 = fVar12;
        local_94 = 0.0;
        pCVar6 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar6->vtable)._ub)->getPathMap)(pCVar6);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           pCVar9,(CVector3f *)in_stack_fffffe60,fVar11,(float)in_stack_fffffe68);
        if (-1 < iVar3) {
          pCVar6 = (this_ptr->base).victim;
          local_e0 = (this_ptr->base).base.base.location.position.x - (pCVar6->location).position.x;
          local_d8 = (this_ptr->base).base.base.location.position.z - (pCVar6->location).position.z;
          local_24 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
          local_dc = 0;
          local_18 = local_24;
          if (12.0f < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pCVar10,3,1);
            in_stack_fffffe60 = pCVar10;
          }
          if ((local_24 <= local_20) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
            pCVar6 = (this_ptr->base).victim;
            local_bc.x = (pCVar6->location).position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_bc.y = (pCVar6->location).position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_bc.z = (pCVar6->location).position.z -
                         (this_ptr->base).base.base.location.position.z;
            in_stack_fffffe60 = (CSentinel *)0x5688d1;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_74,&local_bc);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_74.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
              in_stack_fffffe60 = (CSentinel *)&(this_ptr->base).base.model;
              if (iVar3 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)in_stack_fffffe60,10,1);
                this_ptr->unk4 = 0x40a00000;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)in_stack_fffffe60,4,1);
              }
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x80;
              (this_ptr->base).unk2[3] = '?';
            }
          }
          if ((this_ptr->base).guard_distance < local_24) {
            in_stack_fffffe60 = (CSentinel *)&(this_ptr->base).base.model;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)in_stack_fffffe60,0,1);
          }
        }
        break;
      }
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX_00 == (CSentinel *)0x0) {
        in_stack_fffffe60 = extraout_EAX_00;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar10,0,1);
        break;
      }
LAB_0056878f:
      in_stack_fffffe60 = (CSentinel *)&(this_ptr->base).base.model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)in_stack_fffffe60,2,1);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      in_stack_fffffe60 = (CSentinel *)(this_ptr->base).victim;
      pCVar10 = (CSentinel *)&(this_ptr->base).base.model;
      if (in_stack_fffffe60 == (CSentinel *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar10,0,1);
        break;
      }
      fVar12 = 0.17453292;
      in_stack_fffffe60 = (CSentinel *)0x3f000000;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_80 = 0.0;
      local_78 = 4.0f;
      local_7c = 0.0;
      pCVar6 = (this_ptr->base).victim;
      pCVar9 = (*((pCVar6->vtable)._ub)->getPathMap)(pCVar6);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,pCVar9,
                 (CVector3f *)in_stack_fffffe60,fVar12,(float)in_stack_fffffe68);
      pCVar6 = (this_ptr->base).victim;
      local_11c = (this_ptr->base).base.base.location.position.x - (pCVar6->location).position.x;
      local_118 = (this_ptr->base).base.base.location.position.y - (pCVar6->location).position.y;
      local_114 = (this_ptr->base).base.base.location.position.z - (pCVar6->location).position.z;
      if (12.0f <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar3 == 0) break;
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar3 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)pCVar10,0xe,1);
          in_stack_fffffe60 = pCVar10;
          break;
        }
      }
      else {
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar3 == 0) {
          iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pCVar10,4,1);
            in_stack_fffffe60 = pCVar10;
            break;
          }
          goto LAB_0056878f;
        }
        iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar3 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)pCVar10,0xe,1);
          in_stack_fffffe60 = pCVar10;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)pCVar10,0xf,1);
      in_stack_fffffe60 = pCVar10;
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [INT_03114214].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar8);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [INT_0311420c].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_8c,pCVar8);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (&(this_ptr->base).base.model,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_128,pCVar8);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
      fVar12 = (float)this_ptr->unk4 - delta_time;
      this_ptr->unk4 = (int)fVar12;
      if (fVar12 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      in_stack_fffffe60 = (CSentinel *)(this_ptr->base).victim;
      if (in_stack_fffffe60 == (CSentinel *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        local_f8.x = (in_stack_fffffe60->base).base.base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        local_f8.y = (in_stack_fffffe60->base).base.base.location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        local_f8.z = (in_stack_fffffe60->base).base.base.location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        in_stack_fffffe60 = (CSentinel *)&stack0xffffff2c;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                  ((CVector3f *)in_stack_fffffe60,&local_f8);
        (this_ptr->base).base.base.orient.vec.y = local_d0;
      }
    }
    goto switchD_00568487_caseD_d;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_005680fd:
      iVar3 = 2;
    }
    else {
LAB_0056845d:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar3,1);
  }
  else {
    if (uVar7 < 3) goto LAB_005680fd;
    if (uVar7 != 3) goto LAB_0056845d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00568487_caseD_d:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_100 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar8 = &(this_ptr->base).base.field6_0x241c;
    local_fc = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_ec = local_104 + pCVar8->x;
    local_e8 = local_100 + (this_ptr->base).base.field6_0x241c.y;
    local_e4 = local_fc + (this_ptr->base).base.field6_0x241c.z;
    local_68.x = local_ec + pCVar1->x;
    local_68.y = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_68.z = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar8->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe60);
  return;
}
