// Name: core_prye.cpp_CPrye_doHeroAction_FUN_00525a20
// Address: 00525a20
// Address Range: [[00525a20, 00526075]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_doHeroAction_FUN_00525a20(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_doHeroAction_FUN_00525a20(CPrye *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  CPrye *this_ptr_00;
  CLever *pCVar5;
  int iVar6;
  CDoor *pCVar7;
  int iVar8;
  float unaff_EBX;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1090 [41];
  CPrye *apCStackY_fec [958];
  CBoundingBox3D *in_stack_ffffff20;
  CVector3f *pCVar12;
  CConsole *this_ptr_01;
  char *in_stack_ffffff28;
  uint auStack_c8 [2];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f CStack_a8;
  CVector3f CStack_94;
  float fStack_88;
  CVector3f CStack_84;
  float afStack_6c [2];
  CVector3f CStack_64;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  byte auStack_28 [8];
  float afStack_20 [4];
  
  this_ptr_00 = this_ptr;
  uVar4 = g_CDoorClassInfo.name_hash;
  bVar11 = 0;
  switch((this_ptr->base).hero_action) {
  case 1:
  case 2:
  case 10:
    core_hero_cpp_CHero_doHeroAction_FUN_004d4520(&this_ptr->base);
    core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
    return;
  case 3:
    pCVar3 = (this_ptr->base).hero_action_actor;
    (this_ptr->base).player_input.action_state.fire = 0;
    pCVar7 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar3,uVar4);
    (this_ptr_00->base).door_to_open = pCVar7;
    if (pCVar7 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
      return;
    }
    iVar6 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(&pCVar7->open_rule);
    if (iVar6 == 0) {
      switch((this_ptr_00->base).hero_action_data) {
      case 0:
        break;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(&this_ptr_00->base);
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x2a,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x2b,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x28,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x29,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      }
    }
    (this_ptr_00->base).door_to_open = (CDoor *)0x0;
    core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
    return;
  case 4:
    pCVar3 = (this_ptr->base).hero_action_actor;
    (this_ptr->base).object_to_pick_up = pCVar3;
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar6 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
      pCVar3 = (this_ptr_00->base).object_to_pick_up;
      (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,in_stack_ffffff20);
      puVar9 = (uint *)&stack0xffffff28;
      puVar10 = auStack_c8;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      if (&this_ptr_00->carry_object_bbox != (CBoundingBox3D *)&fStack_c0) {
        (this_ptr_00->carry_object_bbox).min.x = fStack_c0;
        (this_ptr_00->carry_object_bbox).min.y = fStack_bc;
        (this_ptr_00->carry_object_bbox).min.z = fStack_b8;
      }
      pCVar12 = &(this_ptr_00->carry_object_bbox).max;
      if (pCVar12 != (CVector3f *)&fStack_b4) {
        pCVar12->x = fStack_b4;
        (this_ptr_00->carry_object_bbox).max.y = fStack_b0;
        (this_ptr_00->carry_object_bbox).max.z = fStack_ac;
      }
      afStack_20[2] =
           (this_ptr_00->carry_object_bbox).min.x + (this_ptr_00->carry_object_bbox).max.x;
      afStack_20[3] =
           (this_ptr_00->carry_object_bbox).min.y + (this_ptr_00->carry_object_bbox).max.y;
      fStack_48 = afStack_20[2];
      afStack_58[(uint)bVar11 * -2 + 5] = afStack_20[(uint)bVar11 * -2 + 3];
      afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
           *(float *)(&stack0xfffffff0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      afStack_58[1] = fStack_48 * _DAT_005cd947;
      afStack_58[2] = fStack_44 * _DAT_005cd947;
      afStack_58[3] = fStack_40 * _DAT_005cd947;
      CStack_3c.x = fStack_48 * _DAT_005cd947;
      *(float *)((int)&CStack_3c + (uint)bVar11 * -8 + 4) = afStack_58[(uint)bVar11 * -2 + 2];
      *(float *)((int)&CStack_3c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((this_ptr_00->base).object_to_pick_up,&CStack_3c,&CStack_a8);
      pCVar12 = (CVector3f *)(auStack_28 + 4);
      auStack_28._4_4_ = CStack_a8.x;
      afStack_20[(uint)bVar11 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar11 * -8 + 4);
      afStack_20[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           *(float *)((int)&CStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr_00,pCVar12,&CStack_84);
      CStack_64.y = CStack_84.x;
      afStack_58[(uint)bVar11 * -2 + -1] = *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + 4);
      afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
           *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      if (&this_ptr_00->carry_object_world_center != (CVector3f *)&CStack_64.y) {
        (this_ptr_00->carry_object_world_center).x = CStack_64.y;
        (this_ptr_00->carry_object_world_center).y = CStack_64.z;
        (this_ptr_00->carry_object_world_center).z = afStack_58[0];
      }
      switch(iVar6) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x26,1);
        this_ptr_01 = (CConsole *)(this_ptr_00->base).object_to_pick_up;
        break;
      case 2:
      case 3:
      case 4:
        pCVar3 = (this_ptr_00->base).object_to_pick_up;
        if ((pCVar3 == (CDemonActor *)0x0) ||
           (iVar6 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr_00),
           iVar6 != 4)) {
          pCVar1 = &(this_ptr_00->base).base.model;
          if ((this_ptr_00->carry_object_world_center).y <= (float)_DAT_005cd957) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0x1e,1);
            in_stack_ffffff28 = "Picking up %s off ground\n";
            this_ptr_01 = g_CConsolePtr;
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (pCVar1,_DAT_01ed3714,&CStack_94);
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (pCVar1,_DAT_01ed36ec,(CVector3f *)auStack_28);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0x20,1);
            in_stack_ffffff28 = "Picking up %s waist level\n";
            this_ptr_01 = g_CConsolePtr;
          }
        }
        else {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    ((this_ptr_00->base).object_to_pick_up,
                     &(this_ptr_00->base).base.base.location.position,&CStack_64);
          fStack_88 = CStack_64.x;
          *(float *)((int)&CStack_84 + (uint)bVar11 * -8) = afStack_58[(uint)bVar11 * -2 + -2];
          *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          fVar2 = (this_ptr_00->carry_object_world_center).y;
          pCVar1 = &(this_ptr_00->base).base.model;
          this_ptr_00->pickup_facing_reversed = (uint)(0.0 < CStack_84.y);
          if (fVar2 <= (float)_DAT_005cd94f) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0x22,1);
            in_stack_ffffff28 = "Picking up heavy %s crate\n";
            this_ptr_01 = g_CConsolePtr;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0x23,1);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      ((CDemonActor *)this_ptr_00,
                       &(((this_ptr_00->base).object_to_pick_up)->location).position,
                       (CVector3f *)&stack0xfffffffc);
            afStack_6c[(uint)bVar11 * -2] = *(float *)(&stack0x00000000 + (uint)bVar11 * -8);
            afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 (float)(&this_ptr)[(uint)bVar11 * -2 + (uint)bVar11 * -2];
            if (&this_ptr_00->carry_object_world_center != (CVector3f *)&stack0xffffff90) {
              (this_ptr_00->carry_object_world_center).x = unaff_EBX;
              (this_ptr_00->carry_object_world_center).y = afStack_6c[0];
              (this_ptr_00->carry_object_world_center).z = afStack_6c[1];
            }
            in_stack_ffffff28 = "Picking up heavy %s shelf\n";
            this_ptr_01 = g_CConsolePtr;
          }
        }
        break;
      default:
        (this_ptr_00->base).object_to_pick_up = (CDemonActor *)0x0;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      }
      engine_console_cpp_CConsole_printf_FUN_00441ff0(this_ptr_01,in_stack_ffffff28);
      if ((this_ptr_00->base).object_to_pick_up != (CDemonActor *)0x0) {
        (this_ptr_00->base).action_pending = 4;
        core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
        return;
      }
    }
    break;
  case 8:
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"?CPrye::doHeroAction - pull lever\n" + 1);
    uVar4 = g_CLeverClassInfo.name_hash;
    pCVar3 = (this_ptr_00->base).hero_action_actor;
    (this_ptr_00->base).player_input.action_state.fire = 0;
    pCVar5 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar3,uVar4);
    if (pCVar5 == (CLever *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CPrye::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
      return;
    }
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  lever = %s\n");
    iVar6 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(&pCVar5->rule);
    if (iVar6 == 0) {
      (this_ptr_00->base).lever_to_pull = pCVar5;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr_00->base).base.model.base,0x2c,1);
      core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
      return;
    }
  }
  core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(&this_ptr_00->base);
  return;
}
