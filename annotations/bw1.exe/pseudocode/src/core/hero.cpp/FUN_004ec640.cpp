// Name: core_hero.cpp_FUN_004ec640
// Address: 004ec640
// Address Range: [[004ec640, 004ec91f]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ec640(CHero *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004ec640(CHero *param_1)

{
  uint uVar1;
  int iVar2;
  CDoor *this_ptr;
  int iVar3;
  
  switch(*(uint *)(param_1 + 0x1ff60)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 100))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0xc1e4) = 0;
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 2:
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)(param_1 + 0x1ff64),g_CCharacterClassInfo.name_hash);
    if (iVar3 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,(char *)(iVar3 + 0x2698));
    core_hero_cpp_FUN_004eb5b0(param_1);
    return;
  case 3:
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(uint *)(param_1 + 0x1ff64),g_CDoorClassInfo.name_hash);
    if (this_ptr == (CDoor *)0x0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30
                      ((CRuleList *)&this_ptr->field_0x478);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1ff6c) == 1) {
        core_door_cpp_CDoor_onOpened_FUN_004774d0(this_ptr);
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      }
      *(CDoor **)(param_1 + 0x1ff74) = this_ptr;
      core_hero_cpp_FUN_004eb5e0(param_1);
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x1ff6c) == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))
              (iVar3,*(int *)(param_1 + 0x1ff6c) + 0x20,*(int *)(param_1 + 0x1ff6c) + 0x30);
    core_hero_cpp_FUN_004eb5b0(param_1);
    return;
  case 7:
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"CHero::doHeroAction - pull lever\n");
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(param_1 + 0xc1e4) = 0;
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x1ff64),uVar1);
    if (iVar3 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30((CRuleList *)(iVar3 + 0x420));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x1ff80) = iVar3;
      core_hero_cpp_FUN_004eb7f0(param_1);
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 9:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x9c))(iVar3,param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1ff88) = *(uint *)(param_1 + 0x1ff64);
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
  }
  core_hero_cpp_FUN_004eb5b0(param_1);
  return;
}
