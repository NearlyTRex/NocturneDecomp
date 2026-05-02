// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870
// Address: 004d5870
// MANUAL RECONSTRUCTION
// Address Range: [[004d5870, 004d5c0e]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870(CGabriella *this_ptr)

{
  CDemonActor *pCVar2;
  CDemonActor *pCVar5;
  float fVar6;
  float fVar7;
  CVector3f *pCVar3;
  CVector3f *pCVar8;
  CDemonActor *pCVar4;
  uint uVar9;
  int iVar5;
  int desired_state_index;
  float local_bc [3];
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f CStack_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_38;
  uint local_28;
  float local_24;
  int local_18;
  CDemonActor *pCVar1;
  float fVar2;
  
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  __arrinit(local_bc,4,&g_CVectorTypeInfo);
  local_5c.x = -0.08;
  local_5c.y = 0.44;
  local_5c.z = 1.92;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_74,&local_5c);
  if (&local_b0 != pCVar3) {
    local_b0.x = pCVar3->x;
    local_b0.y = pCVar3->y;
    local_b0.z = pCVar3->z;
  }
  local_50.y = 0.0;
  local_50.x = -0.65;
  local_50.z = 2.12;
  pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_38,&local_50);
  if (&local_a4 != pCVar8) {
    local_a4.x = pCVar8->x;
    local_a4.y = pCVar8->y;
    local_a4.z = pCVar8->z;
  }
  local_8c.x = 0.0;
  local_8c.y = 0.0;
  local_8c.z = 2.0;
  pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_80,&local_8c);
  if (&local_98 != pCVar8) {
    local_98.x = pCVar8->x;
    local_98.y = pCVar8->y;
    local_98.z = pCVar8->z;
  }
  iVar5 = 0;
  local_24 = 4.0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
    pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
    if (pCVar4 == (CDemonActor *)0x0) {
      uVar9 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
      if (uVar9 < 2) {
        if ((uVar9 == 1) && ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)
           ) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar1,&CStack_68,&(this_ptr->base).base.base.location.position);
          fVar2 = SQRT(CStack_68.z * CStack_68.z +
                       CStack_68.x * CStack_68.x + CStack_68.y * CStack_68.y);
          if (fVar2 <= 0.0) {
            CStack_68.y = 0.0;
            CStack_68.x = 0.0;
            CStack_68.z = 0.0;
          }
          else {
            fVar6 = 1.0 / fVar2;
            CStack_68.x = CStack_68.x * fVar6;
            CStack_68.y = CStack_68.y * fVar6;
            CStack_68.z = CStack_68.z * fVar6;
          }
          if (CStack_68.z <= (float)-0.80000000000000004) goto LAB_004d59f9;
        }
      }
      else if (((uVar9 < 3) || (uVar9 == 3)) &&
              ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
LAB_004d59f9:
        fVar6 = (pCVar1->location).position.x - local_bc[uVar9 * 3];
        fVar7 = (pCVar1->location).position.z - local_bc[uVar9 * 3 + 2];
        if ((ABS((pCVar1->location).position.y - local_bc[uVar9 * 3 + 1]) <= (float)2)
           && (fVar6 = fVar6 * fVar6 + fVar7 * fVar7, fVar6 <= local_24)) {
          (this_ptr->base).object_to_pick_up = pCVar1;
          local_28 = uVar9;
          local_24 = fVar6;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  pCVar2 = (this_ptr->base).object_to_pick_up;
  if (pCVar2 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar5 = (this_ptr->base).object_to_pick_up;
  (this_ptr->base).base.base.location.position.x =
       ((pCVar2->location).position.x - local_bc[local_28 * 3]) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((pCVar5->location).position.z - local_bc[local_28 * 3 + 2]) +
       (this_ptr->base).base.base.location.position.z;
  if (local_28 < 2) {
    if (local_28 != 1) {
LAB_004d5bd9:
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x638;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",local_28);
      return 1;
    }
    desired_state_index = 0xe;
  }
  else if (local_28 < 3) {
    desired_state_index = 0xf;
  }
  else {
    if (local_28 != 3) goto LAB_004d5bd9;
    desired_state_index = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,desired_state_index,1);
  return 1;
}
