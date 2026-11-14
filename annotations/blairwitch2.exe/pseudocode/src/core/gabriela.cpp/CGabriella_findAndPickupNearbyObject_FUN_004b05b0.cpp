// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0
// Address: 004b05b0
// Address Range: [[004b05b0, 004b0a3a]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  uint uVar3;
  CDemonActor *pCVar4;
  byte bVar5;
  uint auStackY_10b8 [1003];
  int desired_state_index;
  float local_100 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc [2];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  float fStack_b8;
  uint local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint auStack_60 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint auStack_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  CLocation *local_2c;
  float local_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  __arrinit(local_100,4,&g_CVectorTypeInfo);
  local_a0 = 0xbda3d70a;
  local_9c = 0x3ee147ae;
  local_98 = 0x3ff5c28f;
  core_actor_cpp_FUN_00408d70(this_ptr,&local_a0);
  local_40 = local_ac;
  *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 9) * 4);
  *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
  if (&local_f4 != &local_40) {
    local_f4 = local_40;
    local_f0 = local_3c;
    local_ec = local_38;
  }
  local_54 = 0;
  local_58 = 0xbf266666;
  local_50 = 0x4007ae14;
  core_actor_cpp_FUN_00408d70(this_ptr,&local_58);
  local_d0 = local_4c;
  *(uint *)((int)local_cc + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)auStack_48 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  if (&local_e8 != &local_d0) {
    local_e8 = local_d0;
    local_e4 = local_cc[0];
    local_e0 = local_cc[1];
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x40000000;
  core_actor_cpp_FUN_00408d70(this_ptr,&local_70);
  local_c4 = local_64;
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)auStack_60 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  if (&local_dc != &local_c4) {
    local_dc = local_c4;
    local_d8 = local_c0;
    local_d4 = local_bc;
  }
  local_28 = 4.0;
  local_14 = 0;
  local_2c = &(this_ptr->base).base.base.location;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_14);
    pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_20 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) &&
           ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
          core_actor_cpp_FUN_00408de0(pCVar1,local_2c);
          fStack_7c = fStack_b8;
          *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + 6) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 6) * 4);
          *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
          fStack_1c = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
          if (fStack_1c <= 0.0) {
            fStack_78 = 0.0;
            fStack_7c = 0.0;
            fStack_74 = 0.0;
          }
          else {
            fVar2 = 1.0 / fStack_1c;
            fStack_7c = fStack_7c * fVar2;
            fStack_78 = fStack_78 * fVar2;
            fStack_74 = fStack_74 * fVar2;
          }
          if (fStack_74 <= (float)_DAT_005d70b3) goto LAB_004b07bf;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) &&
              ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
LAB_004b07bf:
        uVar3 = uStack_20;
        fStack_94 = (pCVar1->location).position.x - *(float *)((int)local_100 + uStack_20 * 0xc);
        afStack_90[0] = (pCVar1->location).position.y - local_100[uStack_20 * 3 + 1];
        afStack_90[1] = (pCVar1->location).position.z - local_100[uStack_20 * 3 + 2];
        afStack_90[2] = fStack_94;
        *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + 3) * 4) =
             *(uint *)((int)afStack_90 + (uint)bVar5 * 0xfffffff8);
        *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
             *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
        if (ABS(afStack_90[3]) <= (float)_DAT_005d70bb) {
          fStack_24 = afStack_90[2] * afStack_90[2] + fStack_80 * fStack_80;
          if (fStack_24 <= local_28) {
            (this_ptr->base).object_to_pick_up = pCVar1;
            uStack_34 = uVar3;
            local_28 = fStack_24;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  pCVar1 = (this_ptr->base).object_to_pick_up;
  if (pCVar1 == (CDemonActor *)0x0) {
    return 0;
  }
  (this_ptr->base).base.base.location.position.x =
       ((pCVar1->location).position.x - *(float *)((int)local_100 + uStack_34 * 0xc)) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((((this_ptr->base).object_to_pick_up)->location).position.z - local_100[uStack_34 * 3 + 2])
       + (this_ptr->base).base.base.location.position.z;
  if (uStack_34 < 2) {
    if (uStack_34 != 1) {
LAB_004b0a06:
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x637;
      core_main_c_FUN_004e4500("Hell froze - invalid pickUpType: %d",uStack_34);
      return 1;
    }
    desired_state_index = 0xe;
  }
  else if (uStack_34 < 3) {
    desired_state_index = 0xf;
  }
  else {
    if (uStack_34 != 3) goto LAB_004b0a06;
    desired_state_index = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,desired_state_index,1);
  return 1;
}
