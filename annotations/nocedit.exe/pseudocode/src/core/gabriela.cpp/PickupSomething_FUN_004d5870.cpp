// Name: core_gabriela.cpp_PickupSomething_FUN_004d5870
// Address: 004d5870
// Address Range: [[004d5870, 004d5c0e]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_PickupSomething_FUN_004d5870()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_PickupSomething(uint param_1) */

uint core_gabriela_cpp_PickupSomething_FUN_004d5870(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  float fVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
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
  
  in_stack_00000004[0x179].scale.x = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff44,4,&g_CVectorTypeInfo);
  local_5c.x = -0.08;
  local_5c.y = 0.44;
  local_5c.z = 1.92;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,local_74,&local_5c);
  if (&local_b0 != pCVar3) {
    local_b0.x = pCVar3->x;
    local_b0.y = pCVar3->y;
    local_b0.z = pCVar3->z;
  }
  local_50[0].y = 0.0;
  local_50[0].x = -0.65;
  local_50[0].z = 2.12;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_38,local_50);
  if (&local_a4 != pCVar3) {
    local_a4.x = pCVar3->x;
    local_a4.y = pCVar3->y;
    local_a4.z = pCVar3->z;
  }
  local_8c.x = 0.0;
  local_8c.y = 0.0;
  local_8c.z = 2.0;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_80,&local_8c);
  if (&local_98 != pCVar3) {
    local_98.x = pCVar3->x;
    local_98.y = pCVar3->y;
    local_98.z = pCVar3->z;
  }
  iVar5 = 0;
  local_24 = 0x40800000;
  local_2c = &in_stack_00000004->location;
  for (local_18 = 0.0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
      local_18 = (float)((int)local_18 + 1)) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
    pCVar4 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_14 = (*this_ptr->vtable->canPickup)(this_ptr,in_stack_00000004);
      if (uStack_14 < 2) {
        if ((uStack_14 == 1) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr,&local_5c,pCStack_20);
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
      else if (((uStack_14 < 3) || (uStack_14 == 3)) && (in_stack_00000004[0x1b].field7_0x6c == 0))
      {
LAB_004d59f9:
        local_38.x = (this_ptr->location).position.x - (&local_b0)[uStack_14].x;
        local_38.y = (this_ptr->location).position.y - (&local_b0)[uStack_14].y;
        local_38.z = (this_ptr->location).position.z - (&local_b0)[uStack_14].z;
        if ((ABS(local_38.y) <= (float)2) &&
           (fVar2 = local_38.x * local_38.x + local_38.z * local_38.z, fVar2 <= local_18)) {
          in_stack_00000004[0x179].scale.x = (int)this_ptr;
          uStack_1c = uStack_14;
          local_18 = fVar2;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  iVar5 = in_stack_00000004[0x179].scale.x;
  if (iVar5 == 0) {
    return 0;
  }
  iVar1 = in_stack_00000004[0x179].scale.x;
  (in_stack_00000004->location).position.x =
       (*(float *)(iVar5 + 0x20) - *(float *)(&stack0xffffff44 + local_28 * 0xc)) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(iVar1 + 0x28) - (&fStack_b4)[local_28 * 3]) +
       (in_stack_00000004->location).position.z;
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
            ((CMotionController *)(in_stack_00000004 + 1),iVar5,1);
  return 1;
}
