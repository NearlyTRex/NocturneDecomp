// Name: core_hero.cpp_FUN_004d4520
// Address: 004d4520
// Address Range: [[004d4520, 004d47ff]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d4520(CHero *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004d4520(CHero *param_1)

{
  uint uVar1;
  int iVar2;
  CDoor *this_ptr;
  int iVar3;
  
  switch(*(uint *)(param_1 + 0x20b68)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 100))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0xcde0) = 0;
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    break;
  case 2:
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(param_1 + 0x20b6c),g_CCharacterClassInfo.name_hash);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,(char *)(iVar3 + 0x2698));
    core_hero_cpp_FUN_004d3210(param_1);
    return;
  case 3:
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)(param_1 + 0x20b6c),g_CDoorClassInfo.name_hash);
    if (this_ptr == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0
                      ((CRuleList *)&this_ptr->field_0x478);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x20b74) == 1) {
        core_door_cpp_CDoor_onOpened_FUN_00463d10(this_ptr);
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      }
      *(CDoor **)(param_1 + 0x20b94) = this_ptr;
      core_hero_cpp_FUN_004d3250(param_1);
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    break;
  case 6:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"@CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL" + 1);
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x20b74) == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))
              (iVar3,*(int *)(param_1 + 0x20b74) + 0x20,*(int *)(param_1 + 0x20b74) + 0x30);
    core_hero_cpp_FUN_004d3210(param_1);
    return;
  case 8:
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"CHero::doHeroAction - pull lever\n");
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar1);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0((CRuleList *)(iVar3 + 0x420));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x20ba0) = iVar3;
      core_hero_cpp_FUN_004d3460(param_1);
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    break;
  case 10:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x9c))(iVar3,param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x20ba8) = *(uint *)(param_1 + 0x20b6c);
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
  }
  core_hero_cpp_FUN_004d3210(param_1);
  return;
}
