// Name: core_larva.cpp_CLarva_process_FUN_00503080
// Address: 00503080
// Address Range: [[00503080, 0050334d] [005034b7, 00503676] [0050368b, 005038ec] [0050393e, 00503951]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0050389e) */

void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  CEnemy *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CLarva *pCVar10;
  CVector3f *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST1;
  float10 extraout_ST2;
  float10 fVar16;
  unkbyte10 extraout_ST3;
  char local_1f0 [200];
  CVector3f local_128;
  CVector3f local_11c;
  uint local_110;
  uint local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  double local_68;
  double local_60;
  float local_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(this_ptr->base).base.base.location;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_18 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_18) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    if ((iVar8 == 100) && (iVar8 = *(int *)((this_ptr->base).unk2 + 4), iVar8 != 0)) {
      local_d4 = *(float *)(iVar8 + 0x20) - (pCVar1->position).x;
      local_d0 = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
      local_cc = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
      if (&local_ec != &local_d4) {
        local_ec = local_d4;
        local_e8 = local_d0;
        local_e4 = local_cc;
      }
      local_e8 = local_e8 + 2.0f;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
      local_ec = local_14 + local_ec;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
      fsin((float10)-0.52359877558333301);
      fptan((float10)0.52359877558333301);
      fVar15 = (float10)local_e4;
      local_e4 = (float)((float10)local_14 + fVar15);
      fVar15 = atan2((float10)local_ec,(float10)local_14 + fVar15);
      fVar3 = SQRT(local_ec * local_ec + local_e4 * local_e4);
      fVar13 = (float10)fcos(extraout_ST3);
      fVar14 = (float10)fsin(fVar15);
      fVar15 = (float10)fcos(fVar15);
      local_60 = (double)fVar3;
      local_24 = fVar3 * (float)32 * fVar3;
      fVar16 = fVar13 * (float10)2.0f * fVar13 *
               (extraout_ST1 * (float10)fVar3 - (float10)local_e8);
      local_ac = (float)-extraout_ST2;
      local_20 = (float)fVar16;
      local_b0 = (float)(fVar14 * fVar13);
      local_a8 = (float)(fVar15 * fVar13);
      if ((float10)0 < fVar16) {
        local_1c = SQRT(local_24 / local_20);
        local_8c = local_b0 * local_1c;
        local_88 = local_ac * local_1c;
        local_84 = local_a8 * local_1c;
        if (&local_b0 != &local_8c) {
          local_b0 = local_8c;
          local_ac = local_88;
          local_a8 = local_84;
        }
        local_11c.z = 1.0;
        local_11c.x = 0.0;
        local_11c.y = 0.5;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,&local_11c);
        core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  fVar3 = (this_ptr->base).speed;
  fVar6 = (float)0.39269908168750001;
  fVar5 = (float)3;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * fVar6 * fVar3 * fVar5;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  local_30 = pSVar9->state_index;
  local_28 = local_30;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    if (local_28 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar8 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar8 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        local_128.x = *(float *)(iVar8 + 0x20) - (pCVar1->position).x;
        local_128.y = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
        local_128.z = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
        local_54 = local_128.z * local_128.z + local_128.x * local_128.x + local_128.y * local_128.y
        ;
        local_2c = (float)(((int)local_54 >> 1) + INT_02d7a7b8);
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_128);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_80.y - (this_ptr->base).base.base.orient.bank);
        if (((float)0.39269908168750001 <= ABS(local_14)) || ((float)12 < local_2c)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else if (*(float *)(this_ptr->base).unk2 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
          *(float *)(this_ptr->base).unk2 = local_14;
        }
      }
    }
    else if (local_28 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar3 = 20.0f;
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        local_38 = 20.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_110 = 0;
        local_10c = 0;
        local_108 = fVar3;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        if (*(float *)(this_ptr->base).unk2 <= 0.0) {
          iVar8 = *(int *)((this_ptr->base).unk2 + 4);
          local_f8.x = *(float *)(iVar8 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_f8.y = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_f8.z = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
          local_44 = local_f8.z * local_f8.z + local_f8.x * local_f8.x + local_f8.y * local_f8.y;
          local_40 = (float)(((int)local_44 >> 1) + INT_02d7a7b8);
          if (local_40 < (this_ptr->base).guard_distance) {
            pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_a4,&local_f8);
            if (&local_f8 != pCVar11) {
              local_f8.x = pCVar11->x;
              local_f8.y = pCVar11->y;
              local_f8.z = pCVar11->z;
            }
            local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_f8.y);
            local_14 = local_3c;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->base).base.base.orient.bank);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c - local_14);
            if (ABS(local_14) < (float)0.39269908168750001) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x40;
              (this_ptr->base).unk2[3] = '@';
            }
          }
        }
      }
    }
    else if (((local_28 == 5) && ((this_ptr->base).pool_me == 0)) &&
            ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (this_ptr_00,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_e0,pCVar11);
      core_gore_cpp_FUN_004ede30();
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_00503184;
  }
  uVar4 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00503159:
      iVar8 = 1;
    }
    else {
LAB_00503501:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00503159;
    if (uVar4 != 3) goto LAB_00503501;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00503184:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  if (local_30 == 1) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x10));
    if (iVar8 == 0) {
      fVar15 = (float10)1;
      fVar13 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(this_ptr->base).base.size_scale *
               (float10)-0.20000000000000001;
      fVar14 = (float10)f2xm1(fVar13 - (fVar13 / fVar15) * fVar15);
      fVar15 = (float10)fscale(fVar14 + fVar15,fVar13);
      local_68 = (double)fVar15;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.99,1.01);
      sprintf
                (local_1f0,"slime.wav @%f *%f",(double)(this_ptr->base).base.size_scale,
                 (double)(local_14 * (float)local_68));
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,local_1f0);
      *(uint *)(this_ptr->unk + 0x10) = uVar12;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x10));
  }
  iVar8 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    iVar8 = *(int *)((this_ptr->base).unk2 + 4);
    if ((iVar8 != 0) &&
       (pCVar10 = (CLarva *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(), pCVar10 == this_ptr))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
    }
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    local_104 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_100 = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    pcVar2 = (this_ptr->base).base.unk1 + 0x10;
    local_fc = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_98 = local_104 + *(float *)pcVar2;
    local_94 = local_100 + *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_90 = local_fc + *(float *)((this_ptr->base).base.unk1 + 0x18);
    local_bc = local_98 + pCVar11->x;
    local_b8 = local_94 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b4 = local_90 + (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7 = &this_ptr->base;
    (pCVar7->base).unk1[0x18] = '\0';
    (pCVar7->base).unk1[0x19] = '\0';
    (pCVar7->base).unk1[0x1a] = '\0';
    (pCVar7->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar3;
    pCVar11->x = fVar3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
