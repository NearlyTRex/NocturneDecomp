// Name: core_prye.cpp_FUN_00521880
// Address: 00521880
// Address Range: [[00521880, 00521f3d]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00521880(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_prye_cpp_FUN_00521880(CCharacter *param_1)

{
  CActorDestination *this_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  CLocation *pCVar3;
  UOrientationVector *pUVar4;
  int *piVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10ec [27];
  int aiStackY_1080 [3];
  float afStackY_1074 [21];
  int aiStackY_1020 [954];
  CDemonSet *this_ptr_00;
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
  int iStack_94;
  float fStack_90;
  float local_8c;
  float local_88 [4];
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
  if ((param_1[2].flames[0x15].base.orient.vec.x != 0.0) ||
     (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    return 0;
  }
  if ((param_1->layer_action_index != 0x11) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0),
     local_14 < (float)_DAT_005cd5b7)) {
    return 0;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                       (&(param_1->model).base,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    this_ptr = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_24),
                          g_CActorDestinationClassInfo.name_hash);
    local_28 = this_ptr;
    if ((this_ptr != (CActorDestination *)0x0) &&
       (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0
                          (this_ptr,param_1->carry_hands[1].carry_actor), iVar1 != 0)) {
      pCVar3 = &(this_ptr->base).location;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (&param_1->base,&((param_1->carry_hands[1].carry_actor)->location).position,
                 &local_50);
      local_b8[2] = local_50.x;
      local_b8[(uint)bVar7 * -2 + 3] = *(float *)((int)&local_50 + (uint)bVar7 * -8 + 4);
      pCVar9 = &pCVar3->position;
      local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&local_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(&param_1->base,pCVar9,&local_f8);
      local_e0 = local_f8.x;
      local_dc[(uint)bVar7 * -2] = *(float *)((int)&local_f8 + (uint)bVar7 * -8 + 4);
      local_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&local_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      local_88[2] = local_e0 - local_b8[2];
      local_88[3] = local_dc[0] - local_b8[3];
      local_78 = local_dc[1] - local_a8;
      local_104 = local_e0 - local_b8[2];
      local_100[(uint)bVar7 * -2] = local_88[(uint)bVar7 * -2 + 3];
      local_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if ((0.0 < local_100[1]) &&
         ((((local_100[1] < (float)_DAT_005cd5bf && (ABS(local_104) < (float)_DAT_005cd5c7)) &&
           (0.0 < (double)local_100[0])) && ((double)local_100[0] < _DAT_005cd5cf)))) {
        pCVar2 = param_1->carry_hands[1].carry_actor;
        if ((pCVar2 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,&param_1->base), iVar1 != 4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->model).base,0x21,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->model).base,0x25,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    (&param_1->base,&pCVar3->position,&CStack_38);
          piVar5 = &param_1[2].flames[0x15].base.dead1;
          fStack_98 = CStack_38.x;
          (&iStack_94)[(uint)bVar7 * -2] = *(int *)((int)&CStack_38 + (uint)bVar7 * -8 + 4);
          (&iStack_94)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(int *)((int)&CStack_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if ((float *)piVar5 != local_b8 + 8) {
            *piVar5 = (int)fStack_98;
            param_1[2].flames[0x15].base.dead2 = iStack_94;
            param_1[2].flames[0x15].base.previous_transform_state.position.x = fStack_90;
          }
          fStack_18 = param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.z -
                      param_1[2].flames[0x15].base.previous_transform_state.position.z;
          local_14 = core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80
                               (param_1->carry_hands[1].carry_actor);
          param_1[2].flames[0x15].base.dead2 =
               (int)((fStack_18 - local_14) + (float)param_1[2].flames[0x15].base.dead2);
        }
        iVar1 = param_1[2].flames[0x14].render_corona;
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                    (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar1,0x11b5);
        }
        pCVar9 = param_1[2].flames[0x15].base.orient_matrix.m + 1;
        pCVar3 = &(local_28->base).location;
        param_1[2].flames[0x14].render_corona = 2;
        if ((CLocation *)pCVar9 != pCVar3) {
          pCVar9->x = (pCVar3->position).x;
          param_1[2].flames[0x15].base.orient_matrix.m[1].y = (local_28->base).location.position.y;
          param_1[2].flames[0x15].base.orient_matrix.m[1].z = (local_28->base).location.position.z;
        }
        pUVar4 = &(local_28->base).orient;
        pCVar9 = param_1[2].flames[0x15].base.orient_matrix.m + 2;
        if (pCVar9 != (CVector3f *)pUVar4) {
          pCVar9->x = (pUVar4->vec).x;
          param_1[2].flames[0x15].base.orient_matrix.m[2].y = (local_28->base).orient.vec.y;
          param_1[2].flames[0x15].base.orient_matrix.m[2].z = (local_28->base).orient.vec.z;
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
            (g_CDemonSetPtr,param_1->carry_hands[1].carry_actor);
  pCVar2 = param_1->carry_hands[1].carry_actor;
  pCVar9 = &local_110;
  pfVar6 = (float *)((int)pCVar2 + (uint)bVar7 * -8 + 0x24);
  local_bc = (pCVar2->location).position.x;
  local_b8[(uint)bVar7 * -2] = *pfVar6;
  local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  local_110.z = 1.0;
  local_110.x = 0.0;
  local_110.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&param_1->base,pCVar9,&local_74);
  local_5c = local_74.x;
  local_58[(uint)bVar7 * -2] = *(float *)((int)&local_74 + (uint)bVar7 * -8 + 4);
  local_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&local_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_b8[0] = (param_1->base).location.position.y;
  local_bc = local_bc + local_5c;
  local_b8[1] = local_b8[1] + local_58[1];
  local_c8.x = 0.0;
  local_c8.y = 0.0;
  local_c8.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&param_1->base,&local_c8,&local_68);
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
  this_ptr_00 = g_CDemonSetPtr;
  *(float *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       local_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  local_2c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0053bc80
                       (this_ptr_00,pCVar9,fVar8);
  local_14 = local_2c;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if (ABS(local_2c - (param_1->base).location.position.y) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iVar1) {
        param_1[2].flames[0x14].render_corona = 6;
        pCVar2 = param_1->carry_hands[1].carry_actor;
        if ((pCVar2 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,&param_1->base), iVar1 != 4)) {
          iVar1 = 0x1f;
        }
        else {
          iVar1 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->model).base,iVar1,1);
        return 1;
      }
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        local_8c = (pCVar2->location).position.x - local_bc;
        local_88[0] = (pCVar2->location).position.y - local_b8[0];
        local_88[1] = (pCVar2->location).position.z - local_b8[1];
        local_dc[2] = local_8c;
        local_dc[(uint)bVar7 * -2 + 3] = local_88[(uint)bVar7 * -2];
        local_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             local_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
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
