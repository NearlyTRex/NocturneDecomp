// Name: core_doc.cpp_FUN_004712b0
// Address: 004712b0
// Address Range: [[004712b0, 0047196d]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004712b0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_004712b0(CCharacter *param_1)

{
  float fVar1;
  CActorDestination *this_ptr;
  int iVar2;
  int *piVar3;
  CDemonActor *pCVar4;
  CLocation *pCVar5;
  UOrientationVector *pUVar6;
  char *pcVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_10ec [1005];
  CDemonSet *pCVar10;
  uint uVar11;
  float *pfVar12;
  CLocation *pCVar13;
  uint *puVar14;
  uint uVar15;
  uint local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint uStack_98;
  float fStack_94;
  uint uStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float local_5c;
  float local_54;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint uStack_38;
  float local_2c;
  CActorDestination *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float local_14;
  
  bVar9 = 0;
  if ((param_1[2].flames[0x1a].base.vtable._ub != (CDemonActor_vtable *)0x0) ||
     (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    return 0;
  }
  if ((param_1->layer_action_index != 0xe) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0),
     local_14 < (float)_DAT_005da1d4)) {
    return 0;
  }
  local_14 = (float)core_motion_cpp_FUN_00524a40(&param_1->model,0);
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
       (iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                          (this_ptr,param_1->carry_hands[1].carry_actor), iVar2 != 0)) {
      pCVar5 = &(this_ptr->base).location;
      core_actor_cpp_FUN_00408bb0(param_1,&(param_1->carry_hands[1].carry_actor)->location);
      local_b0 = local_50;
      *(uint *)((int)&stack0xffffff54 + (uint)bVar9 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar9 * -8);
      pCVar13 = pCVar5;
      *(uint *)((int)&stack0xffffff58 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      core_actor_cpp_FUN_00408bb0(param_1,pCVar13);
      local_e0 = local_f8;
      *(uint *)((int)&stack0xffffff24 + (uint)bVar9 * -8) =
           *(uint *)(&stack0xffffff0c + (uint)bVar9 * -8);
      *(uint *)((int)&stack0xffffff28 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      local_80 = local_e0 - local_b0;
      local_7c = local_dc - local_ac;
      local_78 = local_d8 - local_a8;
      local_104 = local_e0 - local_b0;
      (&stack0xffffff00)[(uint)bVar9 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8);
      *(uint *)((int)&stack0xffffff04 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      if ((0.0 < local_fc) &&
         ((((local_fc < (float)_DAT_005da1dc && (ABS(local_104) < (float)_DAT_005da1e4)) &&
           (0.0 < (double)local_100)) && ((double)local_100 < _DAT_005da1ec)))) {
        pCVar4 = param_1->carry_hands[1].carry_actor;
        if ((pCVar4 == (CDemonActor *)0x0) ||
           (iVar2 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,&param_1->base), iVar2 != 4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->model).base,0x19,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->model).base,0x1d,1);
          core_actor_cpp_FUN_00408bb0(param_1,pCVar5);
          pcVar7 = param_1[2].flames[0x1a].off_event + 0x2c;
          uStack_98 = uStack_38;
          (&stack0xffffff6c)[(uint)bVar9 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffffcc + (uint)bVar9 * -8);
          *(uint *)((int)&stack0xffffff70 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)(&stack0xffffffd0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
          if (pcVar7 != (char *)&stack0xffffff68) {
            *(uint *)pcVar7 = uStack_98;
            *(float *)(param_1[2].flames[0x1a].off_event + 0x30) = fStack_94;
            *(uint *)(param_1[2].flames[0x1a].off_event + 0x34) = uStack_90;
          }
          fStack_18 = *(float *)(param_1[2].flames[0x1a].off_event + 0x48) -
                      *(float *)(param_1[2].flames[0x1a].off_event + 0x3c);
          local_14 = (float)core_doc_cpp_FUN_00468b80(param_1->carry_hands[1].carry_actor);
          *(float *)(param_1[2].flames[0x1a].off_event + 0x30) =
               (fStack_18 - local_14) + *(float *)(param_1[2].flames[0x1a].off_event + 0x30);
        }
        fVar1 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x;
        if (fVar1 != 0.0) {
          shape_edittool_cpp_FUN_00494340
                    (g_CEditorToolsPtr,"?actionPending = %d\ndoc.cpp line %d" + 1,fVar1,0xfa1);
        }
        piVar3 = &param_1[2].flames[0x1a].globe.position_scaled.y;
        pCVar13 = &(local_28->base).location;
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 2.8026e-45;
        if ((CLocation *)piVar3 != pCVar13) {
          *piVar3 = (int)(pCVar13->position).x;
          param_1[2].flames[0x1a].globe.position_scaled.z =
               (int)(local_28->base).location.position.y;
          param_1[2].flames[0x1a].globe.linear_radius_scaled =
               (int)(local_28->base).location.position.z;
        }
        pUVar6 = &(local_28->base).orient;
        piVar3 = &param_1[2].flames[0x1a].globe.quadratic_radius_scaled;
        if ((UOrientationVector *)piVar3 != pUVar6) {
          *piVar3 = (int)(pUVar6->vec).x;
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
  pCVar4 = param_1->carry_hands[1].carry_actor;
  puVar14 = &stack0xfffffef0;
  puVar8 = (uint *)((int)pCVar4 + (uint)bVar9 * -8 + 0x24);
  local_bc = (pCVar4->location).position.x;
  (&stack0xffffff48)[(uint)bVar9 * 0xfffffffe] = (float)*puVar8;
  *(uint *)((int)&stack0xffffff4c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       puVar8[(uint)bVar9 * -2 + 1];
  local_108 = 0x3f800000;
  local_110 = 0;
  local_10c = 0;
  core_actor_cpp_FUN_00408ac0(param_1,puVar14);
  local_5c = local_74;
  *(uint *)(&stack0xffffffa8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  local_b8 = (param_1->base).location.position.y;
  local_bc = local_bc + local_5c;
  local_b4 = local_b4 + local_54;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3fc00000;
  core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffff38);
  uVar15 = 0x40400000;
  uVar11 = 0x3dcccccd;
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  local_14 = (float)core_setcolid_cpp_FUN_00558450
                              (g_CDemonSetPtr,local_bc,local_b4,local_a4,local_9c,0x3f800000,uVar11,
                               uVar15);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 0;
  }
  uVar11 = 0x3f000000;
  pfVar12 = &stack0xffffff14;
  local_44 = local_bc + local_a4;
  local_40 = local_b8 + local_a0;
  local_3c = local_b4 + local_9c;
  local_ec = local_bc + local_a4;
  *(uint *)((int)&stack0xffffff18 + (uint)bVar9 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar9 * -8);
  pCVar10 = g_CDemonSetPtr;
  *(uint *)(&stack0xffffff1c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  local_2c = (float)core_setcolid_cpp_FUN_005562c0(pCVar10,pfVar12,uVar11);
  local_14 = local_2c;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (ABS(local_2c - (param_1->base).location.position.y) <= 1.0) {
    iVar2 = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iVar2) {
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 8.40779e-45;
        pCVar4 = param_1->carry_hands[1].carry_actor;
        if ((pCVar4 == (CDemonActor *)0x0) ||
           (iVar2 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,&param_1->base), iVar2 != 4)) {
          iVar2 = 0x17;
        }
        else {
          iVar2 = 0x1c;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->model).base,iVar2,1);
        return 1;
      }
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        local_8c = (pCVar4->location).position.x - local_bc;
        local_88 = (pCVar4->location).position.y - local_b8;
        local_84 = (pCVar4->location).position.z - local_b4;
        local_d4 = local_8c;
        *(uint *)((int)&stack0xffffff30 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff78 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffff34 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        if (SQRT(local_cc * local_cc + local_d4 * local_d4 + local_d0 * local_d0) <
            (float)_DAT_005da1e4) {
          return 0;
        }
      }
      local_20 = local_20 + 4;
      iVar2 = iVar2 + 1;
    } while( true );
  }
  return 0;
}
