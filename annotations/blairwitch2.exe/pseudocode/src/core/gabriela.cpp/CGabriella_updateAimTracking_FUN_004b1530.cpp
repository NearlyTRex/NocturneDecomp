// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004b1530
// Address: 004b1530
// Address Range: [[004b1530, 004b1be2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_10cc [968];
  float local_1a0;
  CBoundingBox3D *in_stack_fffffe68;
  float fVar5;
  uint uStack_190;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_78;
  float fStack_6c;
  float afStack_68 [5];
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  CDemonActor *local_28;
  float local_24;
  float local_20;
  uint local_18;
  float local_14;
  
  bVar4 = 0;
  if ((is_holstering == 0) &&
     (iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model),
     *(int *)(iVar1 + 0x24) == 2)) {
    is_holstering = 1;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) ||
     ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    if ((this_ptr->weapon_state_flags == 0) || (is_holstering != 0)) {
      this_ptr->aim_target = (CDemonActor *)0x0;
    }
    else if (this_ptr->fire_state == 0) {
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      local_20 = 0.0;
      for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
        target_actor = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_20);
        local_1a0 = core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0
                              (this_ptr,target_actor,(uint)(target_actor == this_ptr->aim_target));
        if ((0.0 <= local_1a0) && (local_1a0 < local_24)) {
          local_28 = target_actor;
          local_24 = local_1a0;
        }
        local_20 = (float)((int)local_20 + 4);
        local_14 = local_1a0;
      }
      this_ptr->aim_target = local_28;
    }
    if (this_ptr->fire_state == 2) {
      if (this_ptr->aim_target == (CDemonActor *)0x0) {
        this_ptr->aim_yaw = 0.0;
        this_ptr->aim_pitch = this_ptr->aim_yaw;
        this_ptr->target_aim_yaw = this_ptr->aim_pitch;
        this_ptr->target_aim_pitch = this_ptr->target_aim_yaw;
      }
      fVar5 = delta_time / (_DAT_005f7340 * (float)_DAT_005d7183) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004b15cd;
      fVar5 = this_ptr->aim_weight - delta_time / _DAT_005f7340;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar1 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,(CVector3f *)&stack0xfffffe64);
      if (iVar1 < 1) {
        local_1a0 = 6.896818e-39;
        (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                  (this_ptr->aim_target,in_stack_fffffe68);
        puVar2 = (uint *)&stack0xffffff04;
        puVar3 = &stack0xfffffeec;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        afStack_50[2] = fStack_114 + fStack_108;
        afStack_50[3] = fStack_110 + fStack_104;
        fStack_40 = fStack_10c + fStack_100;
        afStack_a4[2] = fStack_114 + fStack_108;
        afStack_a4[(uint)bVar4 * -2 + 3] = afStack_50[(uint)bVar4 * -2 + 3];
        afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        fStack_3c = afStack_a4[2] * _DAT_005d717f;
        local_38 = afStack_a4[3] * _DAT_005d717f;
        local_34 = fStack_94 * _DAT_005d717f;
        fStack_6c = afStack_a4[2] * _DAT_005d717f;
        afStack_68[(uint)bVar4 * -2] = afStack_50[(uint)bVar4 * -2 + 6];
        afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        if (afStack_68 + 2 != afStack_a4 + 0xe) {
          afStack_68[2] = fStack_6c;
        }
      }
      else if (afStack_68 != (float *)&stack0xfffffe6c) {
        afStack_68[1] = (float)uStack_190;
      }
      core_actor_cpp_FUN_00408d70();
      uStack_c0 = uStack_90;
      *(float *)(&stack0xffffff44 + (uint)bVar4 * -8) = afStack_a4[(uint)bVar4 * -2 + 6];
      *(float *)(&stack0xffffff48 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      core_actor_cpp_FUN_00408de0();
      fStack_54 = fStack_84;
      afStack_50[(uint)bVar4 * -2] = afStack_a4[(uint)bVar4 * -2 + 9];
      fVar5 = _DAT_01cb0690;
      afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (&(this_ptr->base).base.model,(int)fVar5,&CStack_b4);
      fVar5 = fStack_54;
      fStack_d8 = CStack_b4.x;
      *(uint *)((int)&stack0xffffff2c + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      fStack_a8 = fVar5 - fStack_d8;
      afStack_a4[0] = afStack_50[0] - fStack_d4;
      afStack_a4[1] = afStack_50[1] - fStack_d0;
      fStack_78 = fVar5 - fStack_d8;
      afStack_a4[(uint)bVar4 * -2 + 0xc] = afStack_a4[(uint)bVar4 * -2];
      afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
      fVar5 = delta_time / _DAT_005f7340;
      fStack_cc = fStack_e4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff20 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffff3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff24 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->target_aim_pitch = fStack_cc;
      fVar5 = fVar5 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = fStack_c8;
    }
  }
  else {
    fVar5 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005d716b * (float)_DAT_005d7173
            * delta_time + this_ptr->target_aim_pitch;
    local_18 = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar5;
    if (fVar5 < _DAT_005d717b) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar5 = delta_time / _DAT_005f7340 + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar5;
LAB_004b15cd:
  if (1.0 < this_ptr->aim_weight) {
    this_ptr->aim_weight = 1.0;
  }
  if (this_ptr->aim_weight < 0.0) {
    this_ptr->aim_pitch = 0.0;
    this_ptr->aim_yaw = 0.0;
    this_ptr->aim_weight = 0.0;
  }
  if (0.0 < this_ptr->aim_weight) {
    local_20 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (this_ptr->target_aim_yaw - this_ptr->aim_yaw);
    local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    fVar5 = delta_time * _DAT_005d716b * (float)_DAT_005d718b;
    if (local_20 < -fVar5) {
      local_20 = -fVar5;
    }
    if (fVar5 < local_20) {
      local_20 = fVar5;
    }
    if (local_24 < -fVar5) {
      local_24 = -fVar5;
    }
    if (fVar5 < local_24) {
      local_24 = fVar5;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_24;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_20;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
