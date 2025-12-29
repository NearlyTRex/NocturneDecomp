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
  float fVar1;
  CVector3f *pCVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  float local_a4 [2];
  float local_8c;
  byte local_88 [12];
  uint uStack_7c;
  uint uStack_78;
  byte local_74 [28];
  CVector3f local_58;
  CVector3f local_48;
  byte local_38 [28];
  CLocation *pCStack_1c;
  uint local_18;
  float fStack_14;
  int iVar6;
  
  in_stack_00000004[0x179].scale.x = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff44,4,&g_CVectorTypeInfo);
  local_58.x = -0.08;
  local_58.y = 0.44;
  local_58.z = 1.92;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)(local_74 + 4),&local_58);
  if ((CVector3f *)&stack0xffffff58 != pCVar2) {
    local_a4[0] = pCVar2->y;
    local_a4[1] = pCVar2->z;
  }
  local_48.y = 0.0;
  local_48.x = -0.65;
  local_48.z = 2.12;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(local_38 + 8),&local_48);
  local_88._8_4_ = 0.0;
  uStack_7c = 0;
  uStack_78 = 0x40000000;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)local_74,(CVector3f *)(local_88 + 8));
  if ((CVector3f *)local_88 != pCVar2) {
    local_88._0_4_ = pCVar2->x;
    local_88._4_4_ = pCVar2->y;
    local_88._8_4_ = pCVar2->z;
  }
  iVar5 = 0;
  fStack_14 = 4.0;
  pCStack_1c = &in_stack_00000004->location;
  for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
    pCVar3 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar3 == (CDemonActor *)0x0) {
      uVar4 = (*this_ptr->vtable->canPickup)(this_ptr,in_stack_00000004);
      if (uVar4 < 2) {
        if ((uVar4 == 1) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
          local_a4[1] = 7.10386e-39;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr,(CVector3f *)local_38,(CVector3f *)in_stack_00000004);
          fVar1 = SQRT((float)local_38._8_4_ * (float)local_38._8_4_ +
                       (float)local_38._0_4_ * (float)local_38._0_4_ +
                       (float)local_38._4_4_ * (float)local_38._4_4_);
          if (fVar1 <= 0.0) {
            local_38._4_4_ = 0.0;
            local_38._0_4_ = 0.0;
            local_38._8_4_ = 0.0;
          }
          else {
            fVar1 = 1.0 / fVar1;
            local_38._0_4_ = (float)local_38._0_4_ * fVar1;
            local_38._4_4_ = (float)local_38._4_4_ * fVar1;
            local_38._8_4_ = (float)local_38._8_4_ * fVar1;
          }
          if ((float)local_38._8_4_ <= (float)-0.80000000000000004) goto LAB_004d59f9;
        }
      }
      else if (((uVar4 < 3) || (uVar4 == 3)) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
LAB_004d59f9:
        fStack_14 = (this_ptr->location).position.x - (&local_8c)[uVar4 * 3];
        fVar1 = (this_ptr->location).position.z - *(float *)(local_88 + uVar4 * 0xc + 4);
        if ((ABS((this_ptr->location).position.y - *(float *)(local_88 + uVar4 * 0xc)) <=
             (float)2) &&
           (fVar1 = fStack_14 * fStack_14 + fVar1 * fVar1, fVar1 <= in_stack_0000000c)) {
          in_stack_00000004[0x179].scale.x = (int)this_ptr;
          in_stack_0000000c = fVar1;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  iVar6 = in_stack_00000004[0x179].scale.x;
  if (iVar6 == 0) {
    return 0;
  }
  iVar5 = in_stack_00000004[0x179].scale.x;
  (in_stack_00000004->location).position.x =
       (*(float *)(iVar6 + 0x20) - *(float *)(&stack0xffffff54 + local_18 * 0xc)) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(iVar5 + 0x28) - local_a4[local_18 * 3]) +
       (in_stack_00000004->location).position.z;
  if (local_18 < 2) {
    if (local_18 != 1) {
LAB_004d5bd9:
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x638;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d");
      return 1;
    }
    iVar6 = 0xe;
  }
  else if (local_18 < 3) {
    iVar6 = 0xf;
  }
  else {
    if (local_18 != 3) goto LAB_004d5bd9;
    iVar6 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 1),iVar6,1);
  return 1;
}
