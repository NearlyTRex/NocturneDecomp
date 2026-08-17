// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
// Address: 004983f0
// Address Range: [[004983f0, 0049878e]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
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
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f local_38;
  CVector3f *local_2c;
  uint uStack_28;
  float local_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  __arrinit(local_bc,4,&g_CVectorTypeInfo_005993b0);
  local_5c.x = -0.08;
  local_5c.y = 0.44;
  local_5c.z = 1.92;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,&local_74,&local_5c);
  if (&local_b0 != pCVar3) {
    local_b0.x = pCVar3->x;
    local_b0.y = pCVar3->y;
    local_b0.z = pCVar3->z;
  }
  local_50.y = 0.0;
  local_50.x = -0.65;
  local_50.z = 2.12;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,&local_38,&local_50);
  if (&local_a4 != pCVar3) {
    local_a4.x = pCVar3->x;
    local_a4.y = pCVar3->y;
    local_a4.z = pCVar3->z;
  }
  local_8c.x = 0.0;
  local_8c.y = 0.0;
  local_8c.z = 2.0;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,&local_80,&local_8c);
  if (&local_98 != pCVar3) {
    local_98.x = pCVar3->x;
    local_98.y = pCVar3->y;
    local_98.z = pCVar3->z;
  }
  iVar5 = 0;
  local_24 = 4.0;
  local_2c = &(this_ptr->base).base.base.location.position;
  for (local_18 = 0; local_18 < g_CDemonSet_PTR_005be368->actor_count; local_18 = local_18 + 1) {
    pCVar1 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar5);
    pCVar4 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
    if (pCVar4 == (CDemonActor *)0x0) {
      uStack_20 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) &&
           ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(pCVar1,&CStack_68,local_2c);
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
          if (CStack_68.z <= (float)-0.80000000000000004) goto LAB_00498579;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) &&
              ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) {
LAB_00498579:
        fStack_44 = (pCVar1->location).position.x - local_bc[uStack_20 * 3];
        fStack_40 = (pCVar1->location).position.y - local_bc[uStack_20 * 3 + 1];
        fStack_3c = (pCVar1->location).position.z - local_bc[uStack_20 * 3 + 2];
        if (ABS(fStack_40) <= (float)2) {
          fStack_1c = fStack_44 * fStack_44 + fStack_3c * fStack_3c;
          if (fStack_1c <= local_24) {
            local_24 = fStack_1c;
            (this_ptr->base).object_to_pick_up = pCVar1;
            uStack_28 = uStack_20;
          }
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
       ((pCVar1->location).position.x - local_bc[uStack_28 * 3]) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((pCVar4->location).position.z - local_bc[uStack_28 * 3 + 2]) +
       (this_ptr->base).base.base.location.position.z;
  if (uStack_28 < 2) {
    if (uStack_28 != 1) {
LAB_00498759:
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 1592;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze - invalid pickUpType: %d",uStack_28);
      return 1;
    }
    iVar5 = 0xe;
  }
  else if (uStack_28 < 3) {
    iVar5 = 0xf;
  }
  else {
    if (uStack_28 != 3) goto LAB_00498759;
    iVar5 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  return 1;
}
