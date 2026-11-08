// Name: FUN_004d4520
// Address: 004d4520
// Address Range: [[004d4520, 004d47ff]]
// Convention: unknown
// Signature: void FUN_004d4520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4520(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(*(uint *)(param_1 + 0x20b68)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      FUN_004d3210(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 100))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0xcde0) = 0;
      FUN_004d3210(param_1);
      return;
    }
    break;
  case 2:
    iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x20b6c),DAT_007e2cec);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      FUN_004d3210(param_1);
      return;
    }
    FUN_0048c150(0x01C6E360,iVar3 + 0x2698);
    FUN_004d3210(param_1);
    return;
  case 3:
    iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x20b6c),_DAT_01b85178);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      FUN_004d3210(param_1);
      return;
    }
    iVar2 = FUN_00495db0(iVar3 + 0x478);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x20b74) == 1) {
        FUN_00463d10(iVar3);
        FUN_004d3210(param_1);
        return;
      }
      *(int *)(param_1 + 0x20b94) = iVar3;
      FUN_004d3250(param_1);
      FUN_004d3210(param_1);
      return;
    }
    break;
  case 6:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"@CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL" + 1);
      FUN_004d3210(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x20b74) == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      FUN_004d3210(param_1);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))
              (iVar3,*(int *)(param_1 + 0x20b74) + 0x20,*(int *)(param_1 + 0x20b74) + 0x30);
    FUN_004d3210(param_1);
    return;
  case 8:
    FUN_00441ff0(PTR_DAT_005f1690,"CHero::doHeroAction - pull lever\n");
    uVar1 = _DAT_01d70c34;
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar1);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      FUN_004d3210(param_1);
      return;
    }
    iVar2 = FUN_00495db0(iVar3 + 0x420);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x20ba0) = iVar3;
      FUN_004d3460(param_1);
      FUN_004d3210(param_1);
      return;
    }
    break;
  case 10:
    iVar3 = *(int *)(param_1 + 0x20b6c);
    if (iVar3 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      FUN_004d3210(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x9c))(iVar3,param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x20ba8) = *(uint *)(param_1 + 0x20b6c);
      FUN_004d3210(param_1);
      return;
    }
  }
  FUN_004d3210(param_1);
  return;
}
