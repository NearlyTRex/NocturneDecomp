// Name: core_doc.cpp_FUN_004712b0
// Address: 004712b0
// Address Range: [[004712b0, 0047196d]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004712b0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_004712b0(CCharacter *param_1)

{
  CActorDestination *this_ptr;
  int iVar1;
  int *piVar2;
  CDemonActor *pCVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  char *pcVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_10ec [1005];
  CDemonSet *pCVar9;
  float fVar10;
  CVector3f *pCVar11;
  float top_y;
  uint uVar12;
  CVector3f local_110;
  float local_104;
  float local_100 [2];
  CVector3f local_f8;
  float local_ec;
  float afStack_e8 [4];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
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
  
  bVar8 = 0;
  if ((param_1[2].flames[0x1a].base.vtable._ub != (CDemonActor_vtable *)0x0) ||
     (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    return 0;
  }
  if ((param_1->layer_action_index != 0xe) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0),
     local_14 < (float)_DAT_005da1d4)) {
    return 0;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&(param_1->model).base,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    this_ptr = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_24),
                          g_CActorDestinationClassInfo.name_hash);
    local_28 = this_ptr;
    if ((this_ptr != (CActorDestination *)0x0) &&
       (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                          (this_ptr,param_1->carry_hands[1].carry_actor), iVar1 != 0)) {
      pCVar4 = &(this_ptr->base).location;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (&param_1->base,&((param_1->carry_hands[1].carry_actor)->location).position,
                 &local_50);
      local_b8[2] = local_50.x;
      local_b8[(uint)bVar8 * -2 + 3] = *(float *)((int)&local_50 + (uint)bVar8 * -8 + 4);
      pCVar11 = &pCVar4->position;
      local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&local_50 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(&param_1->base,pCVar11,&local_f8);
      afStack_e8[2] = local_f8.x;
      afStack_e8[(uint)bVar8 * -2 + 3] = *(float *)((int)&local_f8 + (uint)bVar8 * -8 + 4);
      afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&local_f8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      local_80 = afStack_e8[2] - local_b8[2];
      local_7c = afStack_e8[3] - local_b8[3];
      local_78 = local_d8 - local_a8;
      local_104 = afStack_e8[2] - local_b8[2];
      local_100[(uint)bVar8 * -2] = local_b8[(uint)bVar8 * -2 + 0xf];
      local_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      if ((0.0 < local_100[1]) &&
         ((((local_100[1] < (float)_DAT_005da1dc && (ABS(local_104) < (float)_DAT_005da1e4)) &&
           (0.0 < (double)local_100[0])) && ((double)local_100[0] < _DAT_005da1ec)))) {
        pCVar3 = param_1->carry_hands[1].carry_actor;
        if ((pCVar3 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,&param_1->base), iVar1 != 4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->model).base,0x19,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->model).base,0x1d,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (&param_1->base,&pCVar4->position,&CStack_38);
          pcVar6 = param_1[2].flames[0x1a].off_event + 0x2c;
          fStack_98 = CStack_38.x;
          local_b8[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_38 + (uint)bVar8 * -8 + 4);
          local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               *(float *)((int)&CStack_38 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if ((float *)pcVar6 != local_b8 + 8) {
            *(float *)pcVar6 = fStack_98;
            *(uint *)(param_1[2].flames[0x1a].off_event + 0x30) = uStack_94;
            *(uint *)(param_1[2].flames[0x1a].off_event + 0x34) = uStack_90;
          }
          fStack_18 = *(float *)(param_1[2].flames[0x1a].off_event + 0x48) -
                      *(float *)(param_1[2].flames[0x1a].off_event + 0x3c);
          local_14 = (float)core_doc_cpp_FUN_00468b80(param_1->carry_hands[1].carry_actor);
          *(float *)(param_1[2].flames[0x1a].off_event + 0x30) =
               (fStack_18 - local_14) + *(float *)(param_1[2].flames[0x1a].off_event + 0x30);
        }
        fVar10 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x;
        if (fVar10 != 0.0) {
          shape_edittool_cpp_FUN_00494340
                    (g_CEditorToolsPtr,"?actionPending = %d\ndoc.cpp line %d" + 1,fVar10,0xfa1);
        }
        piVar2 = &param_1[2].flames[0x1a].globe.position_scaled.y;
        pCVar4 = &(local_28->base).location;
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 2.8026e-45;
        if ((CLocation *)piVar2 != pCVar4) {
          *piVar2 = (int)(pCVar4->position).x;
          param_1[2].flames[0x1a].globe.position_scaled.z =
               (int)(local_28->base).location.position.y;
          param_1[2].flames[0x1a].globe.linear_radius_scaled =
               (int)(local_28->base).location.position.z;
        }
        pUVar5 = &(local_28->base).orient;
        piVar2 = &param_1[2].flames[0x1a].globe.quadratic_radius_scaled;
        if ((UOrientationVector *)piVar2 != pUVar5) {
          *piVar2 = (int)(pUVar5->vec).x;
          param_1[2].flames[0x1a].globe.falloff_value = (int)(local_28->base).orient.vec.y;
          param_1[2].flames[0x1a].globe.radius_squared = (local_28->base).orient.vec.z;
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&param_1->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
            (g_CDemonSetPtr,param_1->carry_hands[1].carry_actor);
  pCVar3 = param_1->carry_hands[1].carry_actor;
  pCVar11 = &local_110;
  pfVar7 = (float *)((int)pCVar3 + (uint)bVar8 * -8 + 0x24);
  local_bc = (pCVar3->location).position.x;
  local_b8[(uint)bVar8 * -2] = *pfVar7;
  local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar7[(uint)bVar8 * -2 + 1];
  local_110.z = 1.0;
  local_110.x = 0.0;
  local_110.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&param_1->base,pCVar11,&local_74);
  local_5c = local_74.x;
  local_58[(uint)bVar8 * -2] = *(float *)((int)&local_74 + (uint)bVar8 * -8 + 4);
  local_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&local_74 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  local_b8[0] = (param_1->base).location.position.y;
  local_bc = local_bc + local_5c;
  local_b8[1] = local_b8[1] + local_58[1];
  local_c8.x = 0.0;
  local_c8.y = 0.0;
  local_c8.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&param_1->base,&local_c8,&local_68);
  top_y = 3.0;
  fVar10 = 0.1;
  local_a4 = local_68.x;
  local_b8[(uint)bVar8 * -2 + 6] = *(float *)((int)&local_68 + (uint)bVar8 * -8 + 4);
  local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       *(float *)((int)&local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00558450
                       (g_CDemonSetPtr,local_bc,local_b8[1],local_a4,local_9c,1.0,fVar10,top_y);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 0;
  }
  uVar12 = 0x3f000000;
  pfVar7 = &local_ec;
  local_44 = local_bc + local_a4;
  local_40[0] = local_b8[0] + local_a0;
  local_40[1] = local_b8[1] + local_9c;
  local_ec = local_bc + local_a4;
  afStack_e8[(uint)bVar8 * -2] = local_40[(uint)bVar8 * -2];
  pCVar9 = g_CDemonSetPtr;
  afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       local_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  local_2c = (float)core_setcolid_cpp_FUN_005562c0(pCVar9,pfVar7,uVar12);
  local_14 = local_2c;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (ABS(local_2c - (param_1->base).location.position.y) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iVar1) {
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 8.40779e-45;
        pCVar3 = param_1->carry_hands[1].carry_actor;
        if ((pCVar3 == (CDemonActor *)0x0) ||
           (iVar1 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,&param_1->base), iVar1 != 4)) {
          iVar1 = 0x17;
        }
        else {
          iVar1 = 0x1c;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->model).base,iVar1,1);
        return 1;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        local_8c = (pCVar3->location).position.x - local_bc;
        local_88 = (pCVar3->location).position.y - local_b8[0];
        local_84 = (pCVar3->location).position.z - local_b8[1];
        local_d4 = local_8c;
        afStack_e8[(uint)bVar8 * -2 + 6] = local_b8[(uint)bVar8 * -2 + 0xc];
        afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        if (SQRT(local_cc * local_cc + local_d4 * local_d4 + local_d0 * local_d0) <
            (float)_DAT_005da1e4) {
          return 0;
        }
      }
      local_20 = local_20 + 4;
      iVar1 = iVar1 + 1;
    } while( true );
  }
  return 0;
}
