// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004b1530
// Address: 004b1530
// Address Range: [[004b1530, 004b1be2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10cc [968];
  float local_1a0;
  CBoundingBox3D *in_stack_fffffe68;
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
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_78;
  float fStack_6c;
  uint uStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  CDemonActor *local_28;
  float local_24;
  float local_20;
  uint local_18;
  float local_14;
  
  bVar5 = 0;
  if ((is_holstering == 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model),
     *(int *)(iVar2 + 0x24) == 2)) {
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
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
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
      fVar1 = delta_time / (_DAT_005f7340 * (float)_DAT_005d7183) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004b15cd;
      fVar1 = this_ptr->aim_weight - delta_time / _DAT_005f7340;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar2 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,(CVector3f *)&stack0xfffffe64);
      if (iVar2 < 1) {
        local_1a0 = 6.896818e-39;
        (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                  (this_ptr->aim_target,in_stack_fffffe68);
        puVar3 = (uint *)&stack0xffffff04;
        puVar4 = &stack0xfffffeec;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_48 = fStack_114 + fStack_108;
        fStack_44 = fStack_110 + fStack_104;
        fStack_40 = fStack_10c + fStack_100;
        fStack_9c = fStack_114 + fStack_108;
        *(float *)((int)&stack0xffffff68 + (uint)bVar5 * -8) =
             (&stack0xffffffb0)[(uint)bVar5 * -2 + 3];
        *(float *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             (&stack0xffffffb0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        fStack_3c = fStack_9c * _DAT_005d717f;
        local_38 = fStack_98 * _DAT_005d717f;
        local_34 = fStack_94 * _DAT_005d717f;
        fStack_6c = fStack_9c * _DAT_005d717f;
        *(float *)((int)&stack0xffffff98 + (uint)bVar5 * 0xfffffffe * 4) =
             (&stack0xffffffb0)[(uint)bVar5 * -2 + 6];
        *(float *)((int)&stack0xffffff98 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             (&stack0xffffffb0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if (&stack0xffffffa0 != &stack0xffffff94) {
          fStack_60 = fStack_6c;
        }
      }
      else if (&stack0xffffff98 != &stack0xfffffe6c) {
        uStack_64 = uStack_190;
      }
      core_actor_cpp_FUN_00408d70();
      uStack_c0 = uStack_90;
      *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_actor_cpp_FUN_00408de0();
      fStack_54 = fStack_84;
      (&stack0xffffffb0)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff80 + (uint)bVar5 * -8);
      (&stack0xffffffb0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (float)*(uint *)(&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_skeleton_cpp_FUN_005469a0();
      fVar1 = fStack_54;
      fStack_d8 = fStack_b4;
      *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_a8 = fVar1 - fStack_d8;
      fStack_a4 = fStack_50 - fStack_d4;
      fStack_a0 = fStack_4c - fStack_d0;
      fStack_78 = fVar1 - fStack_d8;
      *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
      fVar1 = delta_time / _DAT_005f7340;
      fStack_cc = fStack_e4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff20 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      this_ptr->target_aim_pitch = fStack_cc;
      fVar1 = fVar1 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = fStack_c8;
    }
  }
  else {
    fVar1 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005d716b * (float)_DAT_005d7173
            * delta_time + this_ptr->target_aim_pitch;
    local_18 = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar1;
    if (fVar1 < _DAT_005d717b) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar1 = delta_time / _DAT_005f7340 + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar1;
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
    fVar1 = delta_time * _DAT_005d716b * (float)_DAT_005d718b;
    if (local_20 < -fVar1) {
      local_20 = -fVar1;
    }
    if (fVar1 < local_20) {
      local_20 = fVar1;
    }
    if (local_24 < -fVar1) {
      local_24 = -fVar1;
    }
    if (fVar1 < local_24) {
      local_24 = fVar1;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_24;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_20;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
