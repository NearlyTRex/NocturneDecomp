// Name: core_doc.cpp_CDoc_doHeroAction_FUN_00474fc0
// Address: 00474fc0
// Address Range: [[00474fc0, 00475615]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_doHeroAction_FUN_00474fc0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_doHeroAction_FUN_00474fc0(CDoc *this_ptr)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  CDoc *this_ptr_00;
  CLever *pCVar6;
  int iVar7;
  CDoor *pCVar8;
  int iVar9;
  float unaff_EBX;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1090 [41];
  CDoc *apCStackY_fec [958];
  CBoundingBox3D *in_stack_ffffff20;
  float *pfVar13;
  CConsole *this_ptr_01;
  char *in_stack_ffffff28;
  uint auStack_c8 [2];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [4];
  CVector3f CStack_94;
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
  float afStack_3c [5];
  CVector3f CStack_28;
  float afStack_1c [3];
  
  this_ptr_00 = this_ptr;
  uVar5 = g_CDoorClassInfo.name_hash;
  bVar12 = 0;
  switch((this_ptr->base).hero_action) {
  case 1:
  case 2:
  case 9:
    core_hero_cpp_CHero_doHeroAction_FUN_004ec640(&this_ptr->base);
    core_hero_cpp_FUN_004eb5b0(this_ptr_00);
    return;
  case 3:
    pCVar4 = (this_ptr->base).hero_action_actor;
    (this_ptr->base).player_input.action_state.fire = 0;
    pCVar8 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar4,uVar5);
    (this_ptr_00->base).door_to_open = pCVar8;
    if (pCVar8 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004eb5b0(this_ptr_00);
      return;
    }
    iVar7 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30(&pCVar8->open_rule);
    if (iVar7 == 0) {
      switch((this_ptr_00->base).hero_action_data) {
      case 0:
        break;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr_00->base);
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr_00->base).base.model.base,0x22,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr_00->base).base.model.base,0x23,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr_00->base).base.model.base,0x20,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr_00->base).base.model.base,0x21,1);
        (this_ptr_00->base).action_pending = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      }
    }
    (this_ptr_00->base).door_to_open = (CDoor *)0x0;
    core_hero_cpp_FUN_004eb5b0(this_ptr_00);
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
      afStack_1c[1] =
           (this_ptr_00->carry_object_bbox).min.x + (this_ptr_00->carry_object_bbox).max.x;
      afStack_1c[2] =
           (this_ptr_00->carry_object_bbox).min.y + (this_ptr_00->carry_object_bbox).max.y;
      fStack_48 = afStack_1c[1];
      afStack_6c[(uint)bVar12 * -2 + 10] = afStack_1c[(uint)bVar12 * -2 + 2];
      afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xb] =
           *(float *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      fStack_54 = fStack_48 * _DAT_005da59c;
      fStack_50 = fStack_44 * _DAT_005da59c;
      fStack_4c = fStack_40 * _DAT_005da59c;
      afStack_3c[0] = fStack_48 * _DAT_005da59c;
      afStack_6c[(uint)bVar12 * -2 + 0xd] = afStack_6c[(uint)bVar12 * -2 + 7];
      afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xe] =
           afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 8];
      core_actor_cpp_FUN_00408b40((this_ptr_00->base).object_to_pick_up,afStack_6c + 0xc);
      pfVar13 = &CStack_28.y;
      CStack_28.y = fStack_a8;
      afStack_1c[(uint)bVar12 * -2 + -1] = afStack_a4[(uint)bVar12 * -2];
      afStack_1c[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
           afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      core_actor_cpp_FUN_00408bb0(this_ptr_00,pfVar13);
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr_00->base).base.model.base,0x1e,1);
        this_ptr_01 = (CConsole *)(this_ptr_00->base).object_to_pick_up;
        break;
      case 2:
      case 3:
      case 4:
        pCVar4 = (this_ptr_00->base).object_to_pick_up;
        if ((pCVar4 == (CDemonActor *)0x0) ||
           (iVar7 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr_00),
           iVar7 != 4)) {
          pCVar2 = &(this_ptr_00->base).base.model;
          if ((this_ptr_00->carry_object_world_center).y <= (float)_DAT_005da5ac) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x16,1);
            in_stack_ffffff28 = "Picking up %s off ground\n";
            this_ptr_01 = g_CConsolePtr;
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (pCVar2,_DAT_01b6884c,&CStack_94);
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (pCVar2,_DAT_01b68824,&CStack_28);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x18,1);
            in_stack_ffffff28 = "Picking up %s waist level\n";
            this_ptr_01 = g_CConsolePtr;
          }
        }
        else {
          core_actor_cpp_FUN_00408bb0();
          uStack_88 = afStack_6c[2];
          afStack_84[(uint)bVar12 * -2] = afStack_6c[(uint)bVar12 * -2 + 3];
          afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          fVar3 = (this_ptr_00->carry_object_world_center).y;
          pCVar2 = &(this_ptr_00->base).base.model;
          this_ptr_00->pickup_facing_reversed = (uint)(0.0 < afStack_84[1]);
          if (fVar3 <= (float)_DAT_005da5a4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x1a,1);
            in_stack_ffffff28 = "Picking up heavy %s crate\n";
            this_ptr_01 = g_CConsolePtr;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x1b,1);
            core_actor_cpp_FUN_00408bb0();
            afStack_6c[(uint)bVar12 * -2] = *(float *)(&stack0x00000000 + (uint)bVar12 * -8);
            afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 (float)(&this_ptr)[(uint)bVar12 * -2 + (uint)bVar12 * -2];
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
        core_hero_cpp_FUN_004eb5b0(this_ptr_00);
        return;
      }
      engine_console_cpp_CConsole_printf_FUN_00445430(this_ptr_01,in_stack_ffffff28);
      if ((this_ptr_00->base).object_to_pick_up != (CDemonActor *)0x0) {
        (this_ptr_00->base).action_pending = 4;
        core_hero_cpp_FUN_004eb5b0();
        return;
      }
    }
    break;
  case 7:
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"?CDoc::doHeroAction - pull lever\n" + 1);
    uVar5 = g_CLeverClassInfo.name_hash;
    pCVar4 = (this_ptr_00->base).hero_action_actor;
    (this_ptr_00->base).player_input.action_state.fire = 0;
    pCVar6 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar4,uVar5);
    if (pCVar6 == (CLever *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CDoc::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004eb5b0(this_ptr_00);
      return;
    }
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  lever = %s\n");
    iVar7 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30(&pCVar6->rule);
    if (iVar7 == 0) {
      (this_ptr_00->base).lever_to_pull = pCVar6;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr_00->base).base.model.base,0x24,1);
      core_hero_cpp_FUN_004eb5b0(this_ptr_00);
      return;
    }
  }
  core_hero_cpp_FUN_004eb5b0();
  return;
}
