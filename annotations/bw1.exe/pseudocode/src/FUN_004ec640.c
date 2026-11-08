// Name: FUN_004ec640
// Address: 004ec640
// Address Range: [[004ec640, 004ec91f]]
// Convention: unknown
// Signature: void FUN_004ec640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ec640(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(*(uint *)(param_1 + 0x1ff60)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionActorSpecific, but actor == NULL");
      FUN_004eb5b0(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 100))(iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0xc1e4) = 0;
      FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 2:
    iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x1ff64),DAT_007c637c);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionTalkToCharacter, but actor is NULL or isn't a character");
      FUN_004eb5b0(param_1);
      return;
    }
    FUN_004a1b70(0x01C51D80,iVar3 + 0x2698);
    FUN_004eb5b0(param_1);
    return;
  case 3:
    iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x1ff64),_DAT_01b68928);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      FUN_004eb5b0(param_1);
      return;
    }
    iVar2 = FUN_004aaf30(iVar3 + 0x478);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x1ff6c) == 1) {
        FUN_004774d0(iVar3);
        FUN_004eb5b0(param_1);
        return;
      }
      *(int *)(param_1 + 0x1ff74) = iVar3;
      FUN_004eb5e0(param_1);
      FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionPlaceObject, but actor is NULL");
      FUN_004eb5b0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x1ff6c) == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionPlaceObject, but destActor is NULL");
      FUN_004eb5b0(param_1);
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))
              (iVar3,*(int *)(param_1 + 0x1ff6c) + 0x20,*(int *)(param_1 + 0x1ff6c) + 0x30);
    FUN_004eb5b0(param_1);
    return;
  case 7:
    FUN_00445430(PTR_DAT_00611100,"CHero::doHeroAction - pull lever\n");
    uVar1 = _DAT_01d1c21c;
    *(uint *)(param_1 + 0xc1e4) = 0;
    iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x1ff64),uVar1);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      FUN_004eb5b0(param_1);
      return;
    }
    iVar2 = FUN_004aaf30(iVar3 + 0x420);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x1ff80) = iVar3;
      FUN_004eb7f0(param_1);
      FUN_004eb5b0(param_1);
      return;
    }
    break;
  case 9:
    iVar3 = *(int *)(param_1 + 0x1ff64);
    if (iVar3 == 0) {
      FUN_004943a0(0x01C3EB54,"CHero::doHeroAction - type=eHeroActionAimTurret, but actor == NULL");
      FUN_004eb5b0(param_1);
      return;
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x9c))(iVar3,param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1ff88) = *(uint *)(param_1 + 0x1ff64);
      FUN_004eb5b0(param_1);
      return;
    }
  }
  FUN_004eb5b0(param_1);
  return;
}
