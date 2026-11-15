// Name: core_prye.cpp_CPrye_tryPlaceObject_FUN_00521880
// Address: 00521880
// Address Range: [[00521880, 00521f3d]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_tryPlaceObject_FUN_00521880(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_prye_cpp_CPrye_tryPlaceObject_FUN_00521880(CPrye *this_ptr)

{
  CActorDestination *this_ptr_00;
  int iVar1;
  UOrientationVector *pUVar2;
  CDemonActor *pCVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10ec [1005];
  CDemonSet *this_ptr_01;
  float fVar8;
  CVector3f *pCVar9;
  float top_y;
  CVector3f local_110;
  float local_104;
  float local_100 [2];
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc [4];
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58 [2];
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f CStack_38;
  float local_2c;
  CActorDestination *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float local_14;
  
  bVar7 = 0;
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) ||
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    return 0;
  }
  if (((this_ptr->base).base.layer_action_index != 0x11) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                           ((CCharacter *)this_ptr,0), local_14 < (float)_DAT_005cd5b7)) {
    return 0;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                       (&(this_ptr->base).base.model.base,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    this_ptr_00 = (CActorDestination *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_24),
                             g_CActorDestinationClassInfo.name_hash);
    local_28 = this_ptr_00;
    if ((this_ptr_00 != (CActorDestination *)0x0) &&
       (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0
                          (this_ptr_00,(this_ptr->base).base.carry_hands[1].carry_actor), iVar1 != 0
       )) {
      pCVar4 = &(this_ptr_00->base).location;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,
                 &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position,&local_50)
      ;
      local_b8[2] = local_50.x;
      local_b8[(uint)bVar7 * -2 + 3] = *(float *)((int)&local_50 + (uint)bVar7 * -8 + 4);
      pCVar9 = &pCVar4->position;
      local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&local_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,pCVar9,&local_f8);
      local_e0 = local_f8.x;
      local_dc[(uint)bVar7 * -2] = *(float *)((int)&local_f8 + (uint)bVar7 * -8 + 4);
      local_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&local_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      local_80 = local_e0 - local_b8[2];
      local_7c = local_dc[0] - local_b8[3];
      local_78 = local_dc[1] - local_a8;
      local_104 = local_e0 - local_b8[2];
      local_100[(uint)bVar7 * -2] = local_b8[(uint)bVar7 * -2 + 0xf];
      local_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      if ((0.0 < local_100[1]) &&
         ((((local_100[1] < (float)_DAT_005cd5bf && (ABS(local_104) < (float)_DAT_005cd5c7)) &&
           (0.0 < (double)local_100[0])) && ((double)local_100[0] < _DAT_005cd5cf)))) {
        pCVar3 = (this_ptr->base).base.carry_hands[1].carry_actor;
        if ((pCVar3 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr), iVar1 != 4
           )) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x21,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x25,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    ((CDemonActor *)this_ptr,&pCVar4->position,&CStack_38);
          fStack_98 = CStack_38.x;
          local_b8[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_38 + (uint)bVar7 * -8 + 4);
          local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               *(float *)((int)&CStack_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (&this_ptr->carry_object_world_center != (CVector3f *)(local_b8 + 8)) {
            (this_ptr->carry_object_world_center).x = fStack_98;
            (this_ptr->carry_object_world_center).y = fStack_94;
            (this_ptr->carry_object_world_center).z = fStack_90;
          }
          fStack_18 = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          local_14 = core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80
                               ((this_ptr->base).base.carry_hands[1].carry_actor);
          (this_ptr->carry_object_world_center).y =
               (fStack_18 - local_14) + (this_ptr->carry_object_world_center).y;
        }
        iVar1 = (this_ptr->base).action_pending;
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                    (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar1,0x11b5);
        }
        pCVar9 = &(this_ptr->base).target_position;
        pCVar4 = &(local_28->base).location;
        (this_ptr->base).action_pending = 2;
        if ((CLocation *)pCVar9 != pCVar4) {
          pCVar9->x = (pCVar4->position).x;
          (this_ptr->base).target_position.y = (local_28->base).location.position.y;
          (this_ptr->base).target_position.z = (local_28->base).location.position.z;
        }
        pUVar5 = &(local_28->base).orient;
        pUVar2 = &(this_ptr->base).target_orientation;
        if (pUVar2 != pUVar5) {
          (pUVar2->vec).x = (pUVar5->vec).x;
          (this_ptr->base).target_orientation.vec.y = (local_28->base).orient.vec.y;
          (this_ptr->base).target_orientation.vec.z = (local_28->base).orient.vec.z;
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
            (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar3 = (this_ptr->base).base.carry_hands[1].carry_actor;
  pCVar9 = &local_110;
  pfVar6 = (float *)((int)pCVar3 + (uint)bVar7 * -8 + 0x24);
  local_bc = (pCVar3->location).position.x;
  local_b8[(uint)bVar7 * -2] = *pfVar6;
  local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  local_110.z = 1.0;
  local_110.x = 0.0;
  local_110.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00((CDemonActor *)this_ptr,pCVar9,&local_74);
  local_5c = local_74.x;
  local_58[(uint)bVar7 * -2] = *(float *)((int)&local_74 + (uint)bVar7 * -8 + 4);
  local_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&local_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_b8[0] = (this_ptr->base).base.base.location.position.y;
  local_bc = local_bc + local_5c;
  local_b8[1] = local_b8[1] + local_58[1];
  local_c8.x = 0.0;
  local_c8.y = 0.0;
  local_c8.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            ((CDemonActor *)this_ptr,&local_c8,&local_68);
  top_y = 3.0;
  fVar8 = 0.1;
  local_a4 = local_68.x;
  local_b8[(uint)bVar7 * -2 + 6] = *(float *)((int)&local_68 + (uint)bVar7 * -8 + 4);
  local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       *(float *)((int)&local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                       (g_CDemonSetPtr,local_bc,local_b8[1],local_a4,local_9c,1.0,fVar8,top_y);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    return 0;
  }
  fVar8 = 0.5;
  pCVar9 = &local_ec;
  local_44 = local_bc + local_a4;
  local_40[0] = local_b8[0] + local_a0;
  local_40[1] = local_b8[1] + local_9c;
  local_ec.x = local_bc + local_a4;
  *(float *)((int)&local_ec + (uint)bVar7 * -8 + 4) = local_40[(uint)bVar7 * -2];
  this_ptr_01 = g_CDemonSetPtr;
  *(float *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  local_2c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0053bc80
                       (this_ptr_01,pCVar9,fVar8);
  local_14 = local_2c;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if (ABS(local_2c - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iVar1) {
        (this_ptr->base).action_pending = 6;
        pCVar3 = (this_ptr->base).base.carry_hands[1].carry_actor;
        if ((pCVar3 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr), iVar1 != 4
           )) {
          iVar1 = 0x1f;
        }
        else {
          iVar1 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar1,1);
        return 1;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        local_8c = (pCVar3->location).position.x - local_bc;
        local_88 = (pCVar3->location).position.y - local_b8[0];
        local_84 = (pCVar3->location).position.z - local_b8[1];
        local_dc[2] = local_8c;
        local_dc[(uint)bVar7 * -2 + 3] = local_b8[(uint)bVar7 * -2 + 0xc];
        local_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        if (SQRT(local_cc * local_cc + local_dc[2] * local_dc[2] + local_dc[3] * local_dc[3]) <
            (float)_DAT_005cd5c7) {
          return 0;
        }
      }
      local_20 = local_20 + 4;
      iVar1 = iVar1 + 1;
    } while( true );
  }
  return 0;
}
