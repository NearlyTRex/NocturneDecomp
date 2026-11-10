// Name: core_hero.cpp_CHero_doHeroAction_FUN_004d03b0
// Address: 004d03b0
// Address Range: [[004d03b0, 004d068f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004d03b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_doHeroAction_FUN_004d03b0(CHero *this_ptr)

{
  uint uVar1;
  int iVar2;
  CDoor *this_ptr_00;
  int iVar3;
  
  switch(*(uint *)(this_ptr + 0x255f0)) {
  case 1:
    iVar3 = *(int *)(this_ptr + 0x255f4);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x6c))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(this_ptr + 0x10a74) = 0;
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 2:
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)(this_ptr + 0x255f4),g_CCharacterClassInfo.name_hash);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,(char *)(iVar3 + 0x2708));
    core_hero_cpp_FUN_004cf200(this_ptr);
    return;
  case 3:
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(this_ptr + 0x255f4),g_CDoorClassInfo.name_hash
                                     );
    if (this_ptr_00 == (CDoor *)0x0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0
                      ((CRuleList *)&this_ptr_00->field_0x5d4);
    if (iVar3 == 0) {
      if (*(int *)(this_ptr + 0x255fc) == 1) {
        core_door_cpp_FUN_0045efc0(this_ptr_00);
        core_hero_cpp_FUN_004cf200(this_ptr);
        return;
      }
      *(CDoor **)(this_ptr + 0x25604) = this_ptr_00;
      core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(this_ptr);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 5:
    iVar3 = *(int *)(this_ptr + 0x255f4);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"@CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL" + 1);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    if (*(int *)(this_ptr + 0x255fc) == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))
              (iVar3,*(int *)(this_ptr + 0x255fc) + 0x20,*(int *)(this_ptr + 0x255fc) + 0x30);
    core_hero_cpp_FUN_004cf200(this_ptr);
    return;
  case 7:
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"CHero::doHeroAction - pull lever\n");
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(this_ptr + 0x10a74) = 0;
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)(this_ptr + 0x255f4),uVar1);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0((CRuleList *)(iVar3 + 0x57c));
    if (iVar2 == 0) {
      *(int *)(this_ptr + 0x25610) = iVar3;
      core_hero_cpp_FUN_004cf440(this_ptr);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    break;
  case 9:
    iVar3 = *(int *)(this_ptr + 0x255f4);
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xa4))(iVar3,this_ptr);
    if (iVar3 != 0) {
      *(uint *)(this_ptr + 0x25618) = *(uint *)(this_ptr + 0x255f4);
      core_hero_cpp_FUN_004cf200(this_ptr);
      return;
    }
  }
  core_hero_cpp_FUN_004cf200(this_ptr);
  return;
}
