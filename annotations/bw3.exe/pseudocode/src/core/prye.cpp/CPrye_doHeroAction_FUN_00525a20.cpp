// Name: core_prye.cpp_CPrye_doHeroAction_FUN_00525a20
// Address: 00525a20
// Address Range: [[00525a20, 00526075]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_doHeroAction_FUN_00525a20(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_doHeroAction_FUN_00525a20(CPrye *this_ptr)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  CPrye *this_ptr_00;
  CLever *pCVar6;
  int iVar7;
  CDoor *pCVar8;
  int iVar9;
  float unaff_EBX;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1090 [41];
  CPrye *apCStackY_fec [958];
  CBoundingBox3D *in_stack_ffffff20;
  CConsole *pCVar13;
  uint auStack_c8 [2];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  float afStack_a4 [7];
  uint uStack_88;
  float afStack_84 [5];
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [6];
  uint uStack_24;
  float afStack_20 [4];
  
  this_ptr_00 = this_ptr;
  uVar5 = g_CDoorClassInfo.name_hash;
  bVar12 = 0;
  switch((this_ptr->base).hero_action) {
  case 1:
  case 2:
  case 10:
    core_hero_cpp_FUN_004d4520(this_ptr);
    core_hero_cpp_FUN_004d3210(this_ptr_00);
    return;
  case 3:
    pCVar4 = (this_ptr->base).hero_action_actor;
    (this_ptr->base).player_input.action_state.fire = 0;
    pCVar8 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,uVar5);
    (this_ptr_00->base).door_to_open = pCVar8;
    if (pCVar8 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004d3210(this_ptr_00);
      return;
    }
    iVar7 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(&pCVar8->open_rule);
    if (iVar7 == 0) {
      switch((this_ptr_00->base).hero_action_data) {
      case 0:
        break;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(&this_ptr_00->base);
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x2a,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x2b,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x28,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x29,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      }
    }
    (this_ptr_00->base).door_to_open = (CDoor *)0x0;
    core_hero_cpp_FUN_004d3210(this_ptr_00);
    return;
  case 4:
    pCVar4 = (this_ptr->base).hero_action_actor;
    (this_ptr->base).object_to_pick_up = pCVar4;
    if (pCVar4 != (CDemonActor *)0x0) {
      iVar7 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr);
      pCVar4 = (this_ptr_00->base).object_to_pick_up;
      (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,in_stack_ffffff20);
      puVar10 = (uint *)&stack0xffffff28;
      puVar11 = auStack_c8;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      if (&this_ptr_00->carry_object_bbox != (CBoundingBox3D *)&fStack_c0) {
        (this_ptr_00->carry_object_bbox).min.x = fStack_c0;
        (this_ptr_00->carry_object_bbox).min.y = fStack_bc;
        (this_ptr_00->carry_object_bbox).min.z = fStack_b8;
      }
      pCVar1 = &(this_ptr_00->carry_object_bbox).max;
      if (pCVar1 != (CVector3f *)&fStack_b4) {
        pCVar1->x = fStack_b4;
        (this_ptr_00->carry_object_bbox).max.y = fStack_b0;
        (this_ptr_00->carry_object_bbox).max.z = fStack_ac;
      }
      afStack_20[2] =
           (this_ptr_00->carry_object_bbox).min.x + (this_ptr_00->carry_object_bbox).max.x;
      afStack_20[3] =
           (this_ptr_00->carry_object_bbox).min.y + (this_ptr_00->carry_object_bbox).max.y;
      fStack_48 = afStack_20[2];
      afStack_6c[(uint)bVar12 * -2 + 10] = afStack_20[(uint)bVar12 * -2 + 3];
      afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xb] =
           *(float *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      fStack_54 = fStack_48 * _DAT_005cd947;
      fStack_50 = fStack_44 * _DAT_005cd947;
      fStack_4c = fStack_40 * _DAT_005cd947;
      afStack_3c[0] = fStack_48 * _DAT_005cd947;
      afStack_6c[(uint)bVar12 * -2 + 0xd] = afStack_6c[(uint)bVar12 * -2 + 7];
      afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xe] =
           afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 8];
      core_actor_cpp_FUN_00408b80((this_ptr_00->base).object_to_pick_up,afStack_6c + 0xc);
      puVar10 = &uStack_24;
      uStack_24 = uStack_a8;
      afStack_20[(uint)bVar12 * -2] = afStack_a4[(uint)bVar12 * -2];
      afStack_20[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      core_actor_cpp_FUN_00408bf0(this_ptr_00,puVar10);
      afStack_6c[3] = afStack_84[0];
      afStack_6c[(uint)bVar12 * -2 + 4] = afStack_84[(uint)bVar12 * -2 + 1];
      afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5] =
           afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
      if (&this_ptr_00->carry_object_world_center != (CVector3f *)(afStack_6c + 3)) {
        (this_ptr_00->carry_object_world_center).x = afStack_6c[3];
        (this_ptr_00->carry_object_world_center).y = fStack_5c;
        (this_ptr_00->carry_object_world_center).z = fStack_58;
      }
      switch(iVar7) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr_00->base).base.model.base,0x26,1);
        pCVar13 = (CConsole *)(this_ptr_00->base).object_to_pick_up;
        break;
      case 2:
      case 3:
      case 4:
        pCVar4 = (this_ptr_00->base).object_to_pick_up;
        if ((pCVar4 == (CDemonActor *)0x0) ||
           (iVar7 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr_00),
           iVar7 != 4)) {
          pCVar2 = &(this_ptr_00->base).base.model;
          if ((this_ptr_00->carry_object_world_center).y <= (float)_DAT_005cd957) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0x1e,1);
            pCVar13 = g_CConsolePtr;
          }
          else {
            core_skeleton_cpp_FUN_0054dbd0();
            core_skeleton_cpp_FUN_0054dbd0();
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0x20,1);
            pCVar13 = g_CConsolePtr;
          }
        }
        else {
          core_actor_cpp_FUN_00408bf0();
          uStack_88 = afStack_6c[2];
          afStack_84[(uint)bVar12 * -2] = afStack_6c[(uint)bVar12 * -2 + 3];
          afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          fVar3 = (this_ptr_00->carry_object_world_center).y;
          pCVar2 = &(this_ptr_00->base).base.model;
          this_ptr_00->pickup_facing_reversed = (uint)(0.0 < afStack_84[1]);
          if (fVar3 <= (float)_DAT_005cd94f) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0x22,1);
            pCVar13 = g_CConsolePtr;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0x23,1);
            core_actor_cpp_FUN_00408bf0();
            afStack_6c[(uint)bVar12 * -2] = *(float *)(&stack0x00000000 + (uint)bVar12 * -8);
            afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 (float)(&this_ptr)[(uint)bVar12 * -2 + (uint)bVar12 * -2];
            pCVar13 = g_CConsolePtr;
            if (&this_ptr_00->carry_object_world_center != (CVector3f *)&stack0xffffff90) {
              (this_ptr_00->carry_object_world_center).x = unaff_EBX;
              (this_ptr_00->carry_object_world_center).y = afStack_6c[0];
              (this_ptr_00->carry_object_world_center).z = afStack_6c[1];
              pCVar13 = g_CConsolePtr;
            }
          }
        }
        break;
      default:
        (this_ptr_00->base).object_to_pick_up = (CDemonActor *)0x0;
        core_hero_cpp_FUN_004d3210(this_ptr_00);
        return;
      }
      engine_console_cpp_FUN_00441ff0(pCVar13);
      if ((this_ptr_00->base).object_to_pick_up != (CDemonActor *)0x0) {
        (this_ptr_00->base).action_pending = 4;
        core_hero_cpp_FUN_004d3210();
        return;
      }
    }
    break;
  case 8:
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"?CPrye::doHeroAction - pull lever\n" + 1);
    uVar5 = g_CLeverClassInfo.name_hash;
    pCVar4 = (this_ptr_00->base).hero_action_actor;
    (this_ptr_00->base).player_input.action_state.fire = 0;
    pCVar6 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,uVar5);
    if (pCVar6 == (CLever *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CPrye::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004d3210(this_ptr_00);
      return;
    }
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  lever = %s\n",pCVar6);
    iVar7 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(&pCVar6->rule);
    if (iVar7 == 0) {
      (this_ptr_00->base).lever_to_pull = pCVar6;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr_00->base).base.model.base,0x2c,1);
      core_hero_cpp_FUN_004d3210(this_ptr_00);
      return;
    }
  }
  core_hero_cpp_FUN_004d3210();
  return;
}
