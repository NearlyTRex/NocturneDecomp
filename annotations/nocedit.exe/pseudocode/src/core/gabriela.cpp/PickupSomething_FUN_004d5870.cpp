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
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float local_bc;
  CVector3f CStack_b8;
  CVector3f local_a8;
  byte local_98 [12];
  uint local_8c;
  uint local_88;
  byte local_84 [28];
  CVector3f CStack_68;
  CVector3f local_58;
  float fStack_44;
  CVector3f CStack_40;
  CVector3f *local_2c;
  uint local_28;
  float local_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  
  in_stack_00000004[0x179].scale.x = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_bc,4,&g_CVectorTypeInfo);
  CStack_68.x = -0.08;
  CStack_68.y = 0.44;
  CStack_68.z = 1.92;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)(local_84 + 4),&CStack_68);
  if (&CStack_b8 != pCVar3) {
    CStack_b8.x = pCVar3->x;
    CStack_b8.y = pCVar3->y;
    CStack_b8.z = pCVar3->z;
  }
  local_58.y = 0.0;
  local_58.x = -0.65;
  local_58.z = 2.12;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&CStack_40,&local_58);
  if (&local_a8 != pCVar3) {
    local_a8.x = pCVar3->x;
    local_a8.y = pCVar3->y;
    local_a8.z = pCVar3->z;
  }
  local_98._8_4_ = 0.0;
  local_8c = 0;
  local_88 = 0x40000000;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)local_84,(CVector3f *)(local_98 + 8));
  if ((CVector3f *)local_98 != pCVar3) {
    local_98._0_4_ = pCVar3->x;
    local_98._4_4_ = pCVar3->y;
    local_98._8_4_ = pCVar3->z;
  }
  iVar5 = 0;
  local_24 = 4.0;
  local_2c = &(in_stack_00000004->location).position;
  for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
    pCVar4 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_20 = (*this_ptr->vtable->canPickup)(this_ptr,in_stack_00000004);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr,&CStack_68,local_2c);
          fVar2 = SQRT(CStack_68.z * CStack_68.z +
                       CStack_68.x * CStack_68.x + CStack_68.y * CStack_68.y);
          if (fVar2 <= 0.0) {
            CStack_68.y = 0.0;
            CStack_68.x = 0.0;
            CStack_68.z = 0.0;
          }
          else {
            fVar2 = 1.0 / fVar2;
            CStack_68.x = CStack_68.x * fVar2;
            CStack_68.y = CStack_68.y * fVar2;
            CStack_68.z = CStack_68.z * fVar2;
          }
          if (CStack_68.z <= (float)-0.80000000000000004) goto LAB_004d59f9;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) && (in_stack_00000004[0x1b].field7_0x6c == 0))
      {
LAB_004d59f9:
        fStack_44 = (this_ptr->location).position.x - (&local_bc)[uStack_20 * 3];
        CStack_40.x = (this_ptr->location).position.y - (&CStack_b8)[uStack_20].x;
        CStack_40.y = (this_ptr->location).position.z - (&CStack_b8)[uStack_20].y;
        if (ABS(CStack_40.x) <= (float)2) {
          fStack_1c = fStack_44 * fStack_44 + CStack_40.y * CStack_40.y;
          if (fStack_1c <= local_24) {
            local_24 = fStack_1c;
            in_stack_00000004[0x179].scale.x = (int)this_ptr;
            local_28 = uStack_20;
          }
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
       (*(float *)(iVar5 + 0x20) - (&local_bc)[local_28 * 3]) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(iVar1 + 0x28) - (&CStack_b8)[local_28].y) +
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
