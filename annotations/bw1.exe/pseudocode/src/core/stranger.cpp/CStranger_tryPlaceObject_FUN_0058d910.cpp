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
  double dVar1;
  double dVar2;
  double dVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  int iVar6;
  CDemonActor *pCVar7;
  UOrientationVector *pUVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1160 [1002];
  float fVar11;
  CVector3f *pCVar12;
  float top_y;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  CVector3f CStack_154;
  CVector3f local_148;
  float local_13c;
  float local_138 [2];
  CVector3f local_130;
  float local_124;
  float local_120 [4];
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  CVector3f CStack_100;
  CVector3f local_f4;
  float local_e8;
  float local_e4 [4];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f local_7c;
  float local_70;
  float local_6c [4];
  float local_5c;
  CVector3f local_58;
  float fStack_4c;
  float local_48;
  CActorDestination *local_44;
  CActorDestination *pCStack_40;
  CVector3f *pCStack_3c;
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
  
  bVar10 = 0;
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
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&(this_ptr->base).base.model.base,0);
  if (local_14 < 1.0) {
    return 0;
  }
  pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar7 == (CDemonActor *)0x0) ||
     (iVar6 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr), iVar6 != 4)) {
    local_18 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      local_44 = (CActorDestination *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                            g_CActorDestinationClassInfo.name_hash);
      local_24 = local_44;
      if ((local_44 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (local_44,(this_ptr->base).base.carry_hands[1].carry_actor), iVar6 != 0)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,
                   &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position,
                   &local_130);
        pCVar4 = &(local_24->base).location;
        local_c4 = local_130.x;
        local_e4[(uint)bVar10 * -2 + 9] = *(float *)((int)&local_130 + (uint)bVar10 * -8 + 4);
        local_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             *(float *)((int)&local_130 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        local_38 = pCVar4;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&pCVar4->position,&local_58);
        local_e4[2] = local_58.x;
        local_e4[(uint)bVar10 * -2 + 3] = *(float *)((int)&local_58 + (uint)bVar10 * -8 + 4);
        local_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&local_58 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        local_70 = local_e4[2] - local_c4;
        local_6c[0] = local_e4[3] - local_c0;
        local_6c[1] = local_d4 - local_bc;
        local_10c = local_e4[2] - local_c4;
        local_120[(uint)bVar10 * -2 + 6] = local_6c[(uint)bVar10 * -2];
        local_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        dVar1 = (double)local_104;
        dVar2 = (double)local_108;
        dVar3 = (double)local_10c;
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n");
        if ((((0.0 < local_104) && ((dVar1 < _DAT_005f6e01 && (ABS(dVar3) < _DAT_005f6e09)))) &&
            (0.0 < dVar2)) && (dVar2 < _DAT_005f6e11)) {
          pCVar12 = &(this_ptr->base).target_position;
          (this_ptr->base).action_pending = 2;
          if ((CLocation *)pCVar12 != local_38) {
            pCVar12->x = (local_38->position).x;
            (this_ptr->base).target_position.y = (local_38->position).y;
            (this_ptr->base).target_position.z = (local_38->position).z;
          }
          pUVar5 = &(this_ptr->base).target_orientation;
          pUVar8 = &(local_44->base).orient;
          if (pUVar5 != pUVar8) {
            (pUVar5->vec).x = (pUVar8->vec).x;
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
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_34),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_28 = pCStack_40;
      if ((pCStack_40 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (pCStack_40,(this_ptr->base).base.carry_hands[1].carry_actor),
         iVar6 != 0)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,
                   &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position,
                   &CStack_100);
        pCVar4 = &(pCStack_28->base).location;
        fStack_88 = CStack_100.x;
        afStack_84[(uint)bVar10 * -2] = *(float *)((int)&CStack_100 + (uint)bVar10 * -8 + 4);
        afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_100 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCStack_3c = &pCVar4->position;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&pCVar4->position,&CStack_94);
        local_120[2] = CStack_94.x;
        local_120[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_94 + (uint)bVar10 * -8 + 4);
        local_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        fStack_174 = local_120[3] - afStack_84[0];
        fStack_170 = fStack_110 - afStack_84[1];
        fStack_16c = local_120[2] - fStack_88;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xfffffe8c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xfffffe9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xfffffe90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        if ((0.0 < fStack_164) &&
           ((((fStack_164 < (float)_DAT_005f6e01 && (ABS(fStack_16c) < (float)_DAT_005f6e09)) &&
             (0.0 < (double)fStack_168)) && ((double)fStack_168 < _DAT_005f6e11)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x25,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)this_ptr,pCStack_3c,&CStack_154);
          fStack_160 = CStack_154.x;
          (&stack0xfffffea4)[(uint)bVar10 * 0xfffffffe] =
               (float)*(uint *)((int)&CStack_154 + (uint)bVar10 * -8 + 4);
          local_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -8] =
               *(float *)((int)&CStack_154 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if (&this_ptr->carry_object_world_center != (CVector3f *)&stack0xfffffea0) {
            (this_ptr->carry_object_world_center).x = fStack_160;
            (this_ptr->carry_object_world_center).y = fStack_15c;
            (this_ptr->carry_object_world_center).z = fStack_158;
          }
          fStack_4c = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          local_14 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170
                               ((this_ptr->base).base.carry_hands[1].carry_actor);
          iVar6 = (this_ptr->base).action_pending;
          (this_ptr->carry_object_world_center).y =
               (fStack_4c - local_14) + (this_ptr->carry_object_world_center).y;
          if (iVar6 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"?actionPending = %d\nstranger.cpp line %d" + 1,iVar6,0xee0);
          }
          pCVar12 = &(this_ptr->base).target_position;
          pCVar4 = &(pCStack_40->base).location;
          (this_ptr->base).action_pending = 2;
          if ((CLocation *)pCVar12 != pCVar4) {
            pCVar12->x = (pCVar4->position).x;
            (this_ptr->base).target_position.y = (pCStack_40->base).location.position.y;
            (this_ptr->base).target_position.z = (pCStack_40->base).location.position.z;
          }
          pUVar8 = &(this_ptr->base).target_orientation;
          pUVar5 = &(pCStack_40->base).orient;
          if (pUVar8 != pUVar5) {
            (pUVar8->vec).x = (pUVar5->vec).x;
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
  pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
  pCVar12 = &local_f4;
  pfVar9 = (float *)((int)pCVar7 + (uint)bVar10 * -8 + 0x24);
  local_13c = (pCVar7->location).position.x;
  local_138[(uint)bVar10 * -2] = *pfVar9;
  local_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar9[(uint)bVar10 * -2 + 1];
  local_f4.x = 0.0;
  local_f4.y = 0.0;
  local_f4.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
            ((CDemonActor *)this_ptr,pCVar12,&local_148);
  local_a0 = local_148.x;
  local_9c[(uint)bVar10 * -2] = *(float *)((int)&local_148 + (uint)bVar10 * -8 + 4);
  local_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)((int)&local_148 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  local_138[0] = (this_ptr->base).base.base.location.position.y;
  local_13c = local_13c + local_a0;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_138[1] = local_138[1] + local_9c[1];
  local_b8.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
            ((CDemonActor *)this_ptr,&local_b8,&local_7c);
  top_y = 3.0;
  fVar11 = 0.1;
  local_6c[2] = local_7c.x;
  local_6c[(uint)bVar10 * -2 + 3] = *(float *)((int)&local_7c + (uint)bVar10 * -8 + 4);
  local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       *(float *)((int)&local_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00558450
                       (g_CDemonSetPtr,local_13c,local_138[1],local_6c[2],local_5c,1.0,fVar11,top_y)
  ;
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 0;
  }
  fVar11 = 0.5;
  local_e8 = local_13c + local_6c[2];
  local_e4[0] = local_138[0] + local_6c[3];
  local_e4[1] = local_138[1] + local_5c;
  local_ac.x = local_13c + local_6c[2];
  *(float *)((int)&local_ac + (uint)bVar10 * -8 + 4) = local_e4[(uint)bVar10 * -2];
  *(float *)((int)&local_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       local_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_48 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005562c0
                       (g_CDemonSetPtr,&local_ac,fVar11);
  local_14 = local_48;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (ABS(local_48 - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    local_2c = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= local_2c) {
        pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
        (this_ptr->base).action_pending = 6;
        if ((pCVar7 == (CDemonActor *)0x0) ||
           (iVar6 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr), iVar6 != 4
           )) {
          iVar6 = 0x1f;
        }
        else {
          iVar6 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,iVar6,1);
        this_ptr->action_timer = 4.0;
        return 1;
      }
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar7 != (CDemonActor *)0x0) {
        local_d0 = (pCVar7->location).position.x - local_13c;
        local_cc = (pCVar7->location).position.y - local_138[0];
        local_c8 = (pCVar7->location).position.z - local_138[1];
        local_124 = local_d0;
        local_120[(uint)bVar10 * -2] = local_e4[(uint)bVar10 * -2 + 6];
        local_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        if (SQRT(local_120[1] * local_120[1] + local_124 * local_124 + local_120[0] * local_120[0])
            < (float)_DAT_005f6e09) {
          return 0;
        }
      }
      local_2c = local_2c + 1;
      local_20 = local_20 + 4;
    } while( true );
  }
  return 0;
}
