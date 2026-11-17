// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500
// Address: 004c9500
// Address Range: [[004c9500, 004c998a]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  uint uVar3;
  CDemonActor *pCVar4;
  byte bVar5;
  float afStackY_10b8 [9];
  uint auStackY_1094 [6];
  float afStackY_107c [21];
  uint auStackY_1028 [967];
  int desired_state_index;
  float local_100 [4];
  uint local_f0;
  uint local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  float local_dc;
  uint local_d8;
  uint local_d4;
  float local_d0;
  float local_cc [4];
  uint local_bc;
  CVector3f CStack_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  uint local_3c [4];
  CVector3f *local_2c;
  float local_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  __arrinit(local_100,4,&g_CVectorTypeInfo);
  local_a0.x = -0.08;
  local_a0.y = 0.44;
  local_a0.z = 1.92;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&local_a0,&local_ac);
  local_40 = local_ac.x;
  local_3c[(uint)bVar5 * -2] = *(uint *)((int)&local_ac + (uint)bVar5 * -8 + 4);
  local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(uint *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (local_100 + 3 != &local_40) {
    local_100[3] = local_40;
    local_f0 = local_3c[0];
    local_ec = local_3c[1];
  }
  local_58.y = 0.0;
  local_58.x = -0.65;
  local_58.z = 2.12;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&local_58,&local_4c);
  local_d0 = local_4c.x;
  local_cc[(uint)bVar5 * -2] = *(float *)((int)&local_4c + (uint)bVar5 * -8 + 4);
  local_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&local_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&local_e8 != &local_d0) {
    local_e8 = local_d0;
    local_e4 = local_cc[0];
    local_e0 = local_cc[1];
  }
  local_70.x = 0.0;
  local_70.y = 0.0;
  local_70.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&local_70,&local_64);
  local_cc[2] = local_64.x;
  local_cc[(uint)bVar5 * -2 + 3] = *(float *)((int)&local_64 + (uint)bVar5 * -8 + 4);
  local_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       *(float *)((int)&local_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&local_dc != local_cc + 2) {
    local_dc = local_cc[2];
    local_d8 = local_cc[3];
    local_d4 = local_bc;
  }
  local_28 = 4.0;
  local_14 = 0;
  local_2c = &(this_ptr->base).base.base.location.position;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_14);
    pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_20 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) &&
           ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(pCVar1,local_2c,&CStack_b8);
          fStack_7c = CStack_b8.x;
          afStack_90[(uint)bVar5 * -2 + 6] = *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4);
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
          if (fStack_74 <= (float)-0.80000000000000004) goto LAB_004c970f;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) &&
              ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
LAB_004c970f:
        uVar3 = uStack_20;
        fStack_94 = (pCVar1->location).position.x - local_100[uStack_20 * 3];
        afStack_90[0] = (pCVar1->location).position.y - local_100[uStack_20 * 3 + 1];
        afStack_90[1] = (pCVar1->location).position.z - local_100[uStack_20 * 3 + 2];
        afStack_90[2] = fStack_94;
        afStack_90[(uint)bVar5 * -2 + 3] = afStack_90[(uint)bVar5 * -2];
        afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (ABS(afStack_90[3]) <= (float)2) {
          fStack_24 = afStack_90[2] * afStack_90[2] + fStack_80 * fStack_80;
          if (fStack_24 <= local_28) {
            (this_ptr->base).object_to_pick_up = pCVar1;
            local_3c[2] = uVar3;
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
       ((pCVar1->location).position.x - local_100[local_3c[2] * 3]) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((((this_ptr->base).object_to_pick_up)->location).position.z - local_100[local_3c[2] * 3 + 2]
       ) + (this_ptr->base).base.base.location.position.z;
  if (local_3c[2] < 2) {
    if (local_3c[2] != 1) {
LAB_004c9956:
      g_CHAR_PTR_01d1d400 = "..\\core\\gabriela.cpp";
      g_INT_01d1d404 = 0x637;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Hell froze - invalid pickUpType: %d");
      return 1;
    }
    desired_state_index = 0xe;
  }
  else if (local_3c[2] < 3) {
    desired_state_index = 0xf;
  }
  else {
    if (local_3c[2] != 3) goto LAB_004c9956;
    desired_state_index = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,desired_state_index,1);
  return 1;
}
