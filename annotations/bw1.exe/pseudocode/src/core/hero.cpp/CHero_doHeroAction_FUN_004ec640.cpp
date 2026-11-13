// Name: core_hero.cpp_CHero_doHeroAction_FUN_004ec640
// Address: 004ec640
// Address Range: [[004ec640, 004ec91f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004ec640(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004ec640(CHero *this_ptr)

{
  uint class_name_hash;
  CLever *pCVar1;
  CDoor *this_ptr_00;
  CDemonActor *pCVar2;
  int iVar3;
  
  switch(this_ptr->hero_action) {
  case 1:
    pCVar2 = this_ptr->hero_action_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    iVar3 = (*((pCVar2->vtable)._ub)->processActionButton)(pCVar2);
    if (iVar3 != 0) {
      (this_ptr->player_input).action_state.fire = 0;
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    break;
  case 2:
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                       (this_ptr->hero_action_actor,g_CCharacterClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,(char *)&pCVar2[0x1c].is_renderable);
    core_hero_cpp_FUN_004eb5b0(this_ptr);
    return;
  case 3:
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (this_ptr->hero_action_actor,g_CDoorClassInfo.name_hash);
    if (this_ptr_00 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30(&this_ptr_00->open_rule);
    if (iVar3 == 0) {
      if (this_ptr->hero_action_data == 1) {
        core_door_cpp_CDoor_onOpened_FUN_004774d0(this_ptr_00);
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      }
      this_ptr->door_to_open = this_ptr_00;
      core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(this_ptr);
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    break;
  case 5:
    pCVar2 = this_ptr->hero_action_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    if (this_ptr->hero_action_data == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    (*((pCVar2->vtable)._ub)->setPositionAndOrientation)
              (pCVar2,(CVector3f *)(this_ptr->hero_action_data + 0x20),
               (CVector3f *)(this_ptr->hero_action_data + 0x30));
    core_hero_cpp_FUN_004eb5b0(this_ptr);
    return;
  case 7:
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"CHero::doHeroAction - pull lever\n");
    class_name_hash = g_CLeverClassInfo.name_hash;
    pCVar2 = this_ptr->hero_action_actor;
    (this_ptr->player_input).action_state.fire = 0;
    pCVar1 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar2,class_name_hash);
    if (pCVar1 == (CLever *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30(&pCVar1->rule);
    if (iVar3 == 0) {
      this_ptr->lever_to_pull = pCVar1;
      core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(this_ptr);
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    break;
  case 9:
    pCVar2 = this_ptr->hero_action_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    iVar3 = (*((pCVar2->vtable)._ub)->startInteraction)(pCVar2,(CDemonActor *)this_ptr);
    if (iVar3 != 0) {
      this_ptr->nearby_interactive_actor = this_ptr->hero_action_actor;
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
  }
  core_hero_cpp_FUN_004eb5b0(this_ptr);
  return;
}
