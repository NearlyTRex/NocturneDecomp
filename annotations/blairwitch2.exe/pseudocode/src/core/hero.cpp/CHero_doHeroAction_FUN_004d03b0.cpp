// Name: core_hero.cpp_CHero_doHeroAction_FUN_004d03b0
// Address: 004d03b0
// Address Range: [[004d03b0, 004d068f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004d03b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004d03b0(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  uint uVar2;
  CLever *pCVar3;
  CDoor *this_ptr_00;
  int iVar4;
  
  switch(this_ptr->hero_action) {
  case 1:
    pCVar1 = this_ptr->hero_action_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar4 = (*((pCVar1->vtable)._ub)->processActionButton)(pCVar1);
    if (iVar4 != 0) {
      (this_ptr->player_input).action_state.fire = 0;
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 2:
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (this_ptr->hero_action_actor,g_CCharacterClassInfo.name_hash);
    if (iVar4 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,(char *)(iVar4 + 0x2708));
    core_hero_cpp_FUN_004cf200(this_ptr);
    return;
  case 3:
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (this_ptr->hero_action_actor,g_CDoorClassInfo.name_hash);
    if (this_ptr_00 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar4 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0(&this_ptr_00->open_rule);
    if (iVar4 == 0) {
      if (this_ptr->hero_action_data == 1) {
        core_door_cpp_FUN_0045efc0(this_ptr_00);
        core_hero_cpp_FUN_004cf200(this_ptr);
        return;
      }
      this_ptr->door_to_open = this_ptr_00;
      core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(this_ptr);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 5:
    pCVar1 = this_ptr->hero_action_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"@CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL" + 1);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    if (this_ptr->hero_action_data == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    (*((pCVar1->vtable)._ub)->setPositionAndOrientation)
              (pCVar1,(CVector3f *)(this_ptr->hero_action_data + 0x20),
               (CVector3f *)(this_ptr->hero_action_data + 0x30));
    core_hero_cpp_FUN_004cf200(this_ptr);
    return;
  case 7:
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"CHero::doHeroAction - pull lever\n");
    uVar2 = g_CLeverClassInfo.name_hash;
    pCVar1 = this_ptr->hero_action_actor;
    (this_ptr->player_input).action_state.fire = 0;
    pCVar3 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,uVar2);
    if (pCVar3 == (CLever *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar4 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0(&pCVar3->rule);
    if (iVar4 == 0) {
      this_ptr->lever_to_pull = pCVar3;
      core_hero_cpp_FUN_004cf440(this_ptr);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 9:
    pCVar1 = this_ptr->hero_action_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar4 = (*((pCVar1->vtable)._ub)->startInteraction)(pCVar1,(CDemonActor *)this_ptr);
    if (iVar4 != 0) {
      this_ptr->nearby_interactive_actor = this_ptr->hero_action_actor;
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
  }
  core_hero_cpp_FUN_004cf200(this_ptr);
  return;
}
