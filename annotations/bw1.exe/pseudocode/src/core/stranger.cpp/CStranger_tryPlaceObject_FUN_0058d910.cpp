// Name: core_stranger.cpp_CStranger_tryPlaceObject_FUN_0058d910
// Address: 0058d910
// Address Range: [[0058d910, 0058e234]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_0058d910(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_0058d910(CStranger *this_ptr)

{
  CVector3f *pCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CDemonActor *pCVar5;
  CLocation *pCVar6;
  UOrientationVector *pUVar7;
  int iVar8;
  UOrientationVector *pUVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1160 [1002];
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_148;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_4c;
  float local_48;
  CActorDestination *local_44;
  CActorDestination *pCStack_40;
  CLocation *pCStack_3c;
  CLocation *local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  CActorDestination *pCStack_28;
  CActorDestination *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar11 = 0;
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    return 0;
  }
  if (((this_ptr->base).base.layer_action_index != 0xe) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,0), local_14 < (float)_DAT_005f6df9)) {
    return 0;
  }
  local_14 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0);
  if (local_14 < 1.0) {
    return 0;
  }
  pCVar5 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar5 == (CDemonActor *)0x0) ||
     (iVar8 = (*((pCVar5->vtable)._ub)->canPickup)(pCVar5,(CDemonActor *)this_ptr), iVar8 != 4)) {
    local_18 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      local_44 = (CActorDestination *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)((int)g_CDemonSetPtr->actors + local_18),
                            g_CActorDestinationClassInfo.name_hash);
      local_24 = local_44;
      if ((local_44 != (CActorDestination *)0x0) &&
         (iVar8 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (local_44,(this_ptr->base).base.carry_hands[1].carry_actor), iVar8 != 0)
         ) {
        core_actor_cpp_FUN_00408bb0
                  (this_ptr,&((this_ptr->base).base.carry_hands[1].carry_actor)->location);
        pCVar6 = &(local_24->base).location;
        local_c4 = local_130;
        *(uint *)((int)&stack0xffffff40 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xfffffed4 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff44 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xfffffed8 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        local_38 = pCVar6;
        core_actor_cpp_FUN_00408bb0(this_ptr,pCVar6);
        local_dc = local_58;
        *(uint *)((int)&stack0xffffff28 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff2c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        local_70 = local_dc - local_c4;
        local_6c = local_d8 - local_c0;
        local_68 = local_d4 - local_bc;
        local_10c = local_dc - local_c4;
        *(uint *)((int)&stack0xfffffef8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff94 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xfffffefc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff98 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        dVar2 = (double)local_104;
        dVar3 = (double)local_108;
        dVar4 = (double)local_10c;
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",dVar4,dVar3,dVar2);
        if ((((0.0 < local_104) && ((dVar2 < _DAT_005f6e01 && (ABS(dVar4) < _DAT_005f6e09)))) &&
            (0.0 < dVar3)) && (dVar3 < _DAT_005f6e11)) {
          pCVar1 = &(this_ptr->base).target_position;
          (this_ptr->base).action_pending = 2;
          if ((CLocation *)pCVar1 != local_38) {
            pCVar1->x = (local_38->position).x;
            (this_ptr->base).target_position.y = (local_38->position).y;
            (this_ptr->base).target_position.z = (local_38->position).z;
          }
          pUVar7 = &(this_ptr->base).target_orientation;
          pUVar9 = &(local_44->base).orient;
          if (pUVar7 != pUVar9) {
            (pUVar7->vec).x = (pUVar9->vec).x;
            (this_ptr->base).target_orientation.vec.y = (local_44->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (local_44->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x21,1);
          return 1;
        }
      }
      local_18 = local_18 + 4;
    }
  }
  else {
    iStack_34 = 0;
    for (iStack_30 = 0; iStack_30 < g_CDemonSetPtr->actor_count; iStack_30 = iStack_30 + 1) {
      pCStack_40 = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)((int)g_CDemonSetPtr->actors + iStack_34),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_28 = pCStack_40;
      if ((pCStack_40 != (CActorDestination *)0x0) &&
         (iVar8 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (pCStack_40,(this_ptr->base).base.carry_hands[1].carry_actor),
         iVar8 != 0)) {
        core_actor_cpp_FUN_00408bb0
                  (this_ptr,&((this_ptr->base).base.carry_hands[1].carry_actor)->location);
        pCVar6 = &(pCStack_28->base).location;
        fStack_88 = fStack_100;
        *(uint *)((int)&stack0xffffff7c + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff04 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff80 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff08 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        pCStack_3c = pCVar6;
        core_actor_cpp_FUN_00408bb0(this_ptr,pCVar6);
        fStack_118 = fStack_94;
        *(uint *)((int)&stack0xfffffeec + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff70 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xfffffef0 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff74 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        fStack_174 = fStack_114 - fStack_84;
        fStack_170 = fStack_110 - fStack_80;
        fStack_16c = fStack_118 - fStack_88;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xfffffe8c + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xfffffe9c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xfffffe90 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        if ((0.0 < fStack_164) &&
           ((((fStack_164 < (float)_DAT_005f6e01 && (ABS(fStack_16c) < (float)_DAT_005f6e09)) &&
             (0.0 < (double)fStack_168)) && ((double)fStack_168 < _DAT_005f6e11)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x25,1);
          core_actor_cpp_FUN_00408bb0(this_ptr,pCStack_3c);
          fStack_160 = fStack_154;
          (&stack0xfffffea4)[(uint)bVar11 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffeb0 + (uint)bVar11 * -8);
          *(uint *)((int)&stack0xfffffea8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               *(uint *)(&stack0xfffffeb4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          if (&this_ptr->carry_object_world_center != (CVector3f *)&stack0xfffffea0) {
            (this_ptr->carry_object_world_center).x = fStack_160;
            (this_ptr->carry_object_world_center).y = fStack_15c;
            (this_ptr->carry_object_world_center).z = fStack_158;
          }
          fStack_4c = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          local_14 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170
                               ((this_ptr->base).base.carry_hands[1].carry_actor);
          iVar8 = (this_ptr->base).action_pending;
          (this_ptr->carry_object_world_center).y =
               (fStack_4c - local_14) + (this_ptr->carry_object_world_center).y;
          if (iVar8 != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"?actionPending = %d\nstranger.cpp line %d" + 1,iVar8,0xee0);
          }
          pCVar1 = &(this_ptr->base).target_position;
          pCVar6 = &(pCStack_40->base).location;
          (this_ptr->base).action_pending = 2;
          if ((CLocation *)pCVar1 != pCVar6) {
            pCVar1->x = (pCVar6->position).x;
            (this_ptr->base).target_position.y = (pCStack_40->base).location.position.y;
            (this_ptr->base).target_position.z = (pCStack_40->base).location.position.z;
          }
          pUVar9 = &(this_ptr->base).target_orientation;
          pUVar7 = &(pCStack_40->base).orient;
          if (pUVar9 != pUVar7) {
            (pUVar9->vec).x = (pUVar7->vec).x;
            (this_ptr->base).target_orientation.vec.y = (pCStack_40->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (pCStack_40->base).orient.vec.z;
          }
          return 1;
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
            (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar5 = (this_ptr->base).base.carry_hands[1].carry_actor;
  puVar13 = &stack0xffffff0c;
  puVar10 = (uint *)((int)pCVar5 + (uint)bVar11 * -8 + 0x24);
  local_13c = (pCVar5->location).position.x;
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar11 * -8) = *puVar10;
  *(uint *)((int)&stack0xfffffecc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       puVar10[(uint)bVar11 * -2 + 1];
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0x3f800000;
  core_actor_cpp_FUN_00408ac0(this_ptr,puVar13);
  local_a0 = local_148;
  *(uint *)(&stack0xffffff64 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar11 * -8);
  *(uint *)((int)&stack0xffffff68 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xfffffec0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_138 = (this_ptr->base).base.base.location.position.y;
  local_13c = local_13c + local_a0;
  local_b8 = 0;
  local_b4 = 0;
  local_134 = local_134 + local_98;
  local_b0 = 0x3fc00000;
  core_actor_cpp_FUN_00408ac0(this_ptr,&stack0xffffff48);
  uVar14 = 0x40400000;
  uVar12 = 0x3dcccccd;
  local_64 = local_7c;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar11 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_14 = (float)core_setcolid_cpp_FUN_00558450
                              (g_CDemonSetPtr,local_13c,local_134,local_64,local_5c,0x3f800000,
                               uVar12,uVar14);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 0;
  }
  uVar12 = 0x3f000000;
  local_e8 = local_13c + local_64;
  local_e4 = local_138 + local_60;
  local_e0 = local_134 + local_5c;
  local_ac = local_13c + local_64;
  *(float *)((int)&stack0xffffff58 + (uint)bVar11 * 0xfffffffe * 4) =
       (&stack0xffffff1c)[(uint)bVar11 * 0xfffffffe];
  *(uint *)(&stack0xffffff5c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)((int)&stack0xffffff20 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_48 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,&stack0xffffff54,uVar12);
  local_14 = local_48;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (ABS(local_48 - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    local_2c = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= local_2c) {
        pCVar5 = (this_ptr->base).base.carry_hands[1].carry_actor;
        (this_ptr->base).action_pending = 6;
        if ((pCVar5 == (CDemonActor *)0x0) ||
           (iVar8 = (*((pCVar5->vtable)._ub)->canPickup)(pCVar5,(CDemonActor *)this_ptr), iVar8 != 4
           )) {
          iVar8 = 0x1f;
        }
        else {
          iVar8 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,iVar8,1);
        this_ptr->action_timer = 4.0;
        return 1;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)((int)g_CDemonSetPtr->actors + local_20),
                         g_CCrateClassInfo.name_hash);
      if (iVar8 != 0) {
        local_d0 = *(float *)(iVar8 + 0x20) - local_13c;
        local_cc = *(float *)(iVar8 + 0x24) - local_138;
        local_c8 = *(float *)(iVar8 + 0x28) - local_134;
        local_124 = local_d0;
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff34 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xfffffee4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff38 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        if (SQRT(local_11c * local_11c + local_124 * local_124 + local_120 * local_120) <
            (float)_DAT_005f6e09) {
          return 0;
        }
      }
      local_2c = local_2c + 1;
      local_20 = local_20 + 4;
    } while( true );
  }
  return 0;
}
