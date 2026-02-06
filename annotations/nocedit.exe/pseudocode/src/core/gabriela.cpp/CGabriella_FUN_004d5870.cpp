// Name: core_gabriela.cpp_CGabriella_FUN_004d5870
// Address: 004d5870
// Address Range: [[004d5870, 004d5c0e]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_FUN_004d5870(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_FUN_004d5870(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  float fStack_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74 [2];
  CVector3f local_5c;
  CVector3f local_50 [2];
  CVector3f local_38;
  CLocation *local_2c;
  uint local_28;
  uint local_24;
  CVector3f *pCStack_20;
  uint uStack_1c;
  float local_18;
  uint uStack_14;
  
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  __arrinit(&stack0xffffff44,4,&g_CVectorTypeInfo);
  local_5c.x = -0.08;
  local_5c.y = 0.44;
  local_5c.z = 1.92;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,local_74,&local_5c);
  if (&local_b0 != pCVar3) {
    local_b0.x = pCVar3->x;
    local_b0.y = pCVar3->y;
    local_b0.z = pCVar3->z;
  }
  local_50[0].y = 0.0;
  local_50[0].x = -0.65;
  local_50[0].z = 2.12;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_38,local_50);
  if (&local_a4 != pCVar3) {
    local_a4.x = pCVar3->x;
    local_a4.y = pCVar3->y;
    local_a4.z = pCVar3->z;
  }
  local_8c.x = 0.0;
  local_8c.y = 0.0;
  local_8c.z = 2.0;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_80,&local_8c);
  if (&local_98 != pCVar3) {
    local_98.x = pCVar3->x;
    local_98.y = pCVar3->y;
    local_98.z = pCVar3->z;
  }
  iVar5 = 0;
  local_24 = 0x40800000;
  local_2c = &(this_ptr->base).base.base.location;
  for (local_18 = 0.0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
      local_18 = (float)((int)local_18 + 1)) {
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
    pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_14 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
      if (uStack_14 < 2) {
        if ((uStack_14 == 1) &&
           ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(pCVar1,&local_5c,pCStack_20);
          fStack_b4 = SQRT(local_5c.z * local_5c.z +
                           local_5c.x * local_5c.x + local_5c.y * local_5c.y);
          if (fStack_b4 <= 0.0) {
            local_5c.y = 0.0;
            local_5c.x = 0.0;
            local_5c.z = 0.0;
          }
          else {
            fVar2 = 1.0 / fStack_b4;
            local_5c.x = local_5c.x * fVar2;
            local_5c.y = local_5c.y * fVar2;
            local_5c.z = local_5c.z * fVar2;
          }
          if (local_5c.z <= (float)-0.80000000000000004) goto LAB_004d59f9;
        }
      }
      else if (((uStack_14 < 3) || (uStack_14 == 3)) &&
              ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
LAB_004d59f9:
        local_38.x = (pCVar1->location).position.x - (&local_b0)[uStack_14].x;
        local_38.y = (pCVar1->location).position.y - (&local_b0)[uStack_14].y;
        local_38.z = (pCVar1->location).position.z - (&local_b0)[uStack_14].z;
        if ((ABS(local_38.y) <= (float)2) &&
           (fVar2 = local_38.x * local_38.x + local_38.z * local_38.z, fVar2 <= local_18)) {
          (this_ptr->base).object_to_pick_up = pCVar1;
          uStack_1c = uStack_14;
          local_18 = fVar2;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  pCVar1 = (this_ptr->base).object_to_pick_up;
  if (pCVar1 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar4 = (this_ptr->base).object_to_pick_up;
  (this_ptr->base).base.base.location.position.x =
       ((pCVar1->location).position.x - *(float *)(&stack0xffffff44 + local_28 * 0xc)) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((pCVar4->location).position.z - (&fStack_b4)[local_28 * 3]) +
       (this_ptr->base).base.base.location.position.z;
  if (local_28 < 2) {
    if (local_28 != 1) {
LAB_004d5bd9:
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x638;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",local_28);
      return 1;
    }
    iVar5 = 0xe;
  }
  else if (local_28 < 3) {
    iVar5 = 0xf;
  }
  else {
    if (local_28 != 3) goto LAB_004d5bd9;
    iVar5 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  return 1;
}
