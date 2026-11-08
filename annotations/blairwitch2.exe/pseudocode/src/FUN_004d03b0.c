// Name: FUN_004d03b0
// Address: 004d03b0
// Address Range: [[004d03b0, 004d068f]]
// Convention: unknown
// Signature: void FUN_004d03b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d03b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(*(uint *)(param_1 + 0x255f0)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x255f4);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      FUN_004cf200(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x6c))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x10a74) = 0;
      FUN_004cf200(param_1);
      return;
    }
    break;
  case 2:
    iVar3 = FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),DAT_007bdc94);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      FUN_004cf200(param_1);
      return;
    }
    FUN_004894f0(0x01C38BC0,iVar3 + 0x2708);
    FUN_004cf200(param_1);
    return;
  case 3:
    iVar3 = FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),_DAT_01b4d36c);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      FUN_004cf200(param_1);
      return;
    }
    iVar2 = FUN_004925c0(iVar3 + 0x5d4);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x255fc) == 1) {
        FUN_0045efc0(iVar3);
        FUN_004cf200(param_1);
        return;
      }
      *(int *)(param_1 + 0x25604) = iVar3;
      FUN_004cf230(param_1);
      FUN_004cf200(param_1);
      return;
    }
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0x255f4);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"@CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL" + 1);
      FUN_004cf200(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x255fc) == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      FUN_004cf200(param_1);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))
              (iVar3,*(int *)(param_1 + 0x255fc) + 0x20,*(int *)(param_1 + 0x255fc) + 0x30);
    FUN_004cf200(param_1);
    return;
  case 7:
    FUN_00436710(PTR_DAT_00609ed0,"CHero::doHeroAction - pull lever\n");
    uVar1 = _DAT_01d03500;
    *(uint *)(param_1 + 0x10a74) = 0;
    iVar3 = FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),uVar1);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      FUN_004cf200(param_1);
      return;
    }
    iVar2 = FUN_004925c0(iVar3 + 0x57c);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x25610) = iVar3;
      FUN_004cf440(param_1);
      FUN_004cf200(param_1);
      return;
    }
    break;
  case 9:
    iVar3 = *(int *)(param_1 + 0x255f4);
    if (iVar3 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      FUN_004cf200(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xa4))(iVar3,param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x25618) = *(uint *)(param_1 + 0x255f4);
      FUN_004cf200(param_1);
      return;
    }
  }
  FUN_004cf200(param_1);
  return;
}
