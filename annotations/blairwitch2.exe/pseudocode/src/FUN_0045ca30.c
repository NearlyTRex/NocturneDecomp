// Name: FUN_0045ca30
// Address: 0045ca30
// Address Range: [[0045ca30, 0045d085]]
// Convention: unknown
// Signature: void FUN_0045ca30(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ca30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10a0 [1003];
  char *pcVar7;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_a0;
  float fStack_98;
  uint uStack_94;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  
  uVar3 = _DAT_01b4d36c;
  bVar6 = 0;
  switch(*(uint *)(param_1 + 0x255f0)) {
  case 1:
  case 2:
  case 9:
    FUN_004d03b0(param_1);
    FUN_004cf200(param_1);
    return;
  case 3:
    *(uint *)(param_1 + 0x10a74) = 0;
    iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),uVar3);
    *(int *)(param_1 + 0x25604) = iVar1;
    if (iVar1 == 0) {
      FUN_0047be40(0x01C25594,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      FUN_004cf200(param_1);
      return;
    }
    iVar1 = FUN_004925c0(iVar1 + 0x5d4);
    if (iVar1 == 0) {
      switch(*(uint *)(param_1 + 0x255fc)) {
      case 0:
        break;
      default:
        FUN_004cf230(param_1);
        FUN_004cf200(param_1);
        return;
      case 2:
        FUN_00503620(param_1 + 0x2b4,0x1f,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        FUN_004cf200(param_1);
        return;
      case 3:
        FUN_00503620(param_1 + 0x2b4,0x20,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        FUN_004cf200(param_1);
        return;
      case 4:
        FUN_00503620(param_1 + 0x2b4,0x1d,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        FUN_004cf200(param_1);
        return;
      case 5:
        FUN_00503620(param_1 + 0x2b4,0x1e,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        FUN_004cf200(param_1);
        return;
      }
    }
    *(uint *)(param_1 + 0x25604) = 0;
    FUN_004cf200(param_1);
    return;
  case 4:
    iVar1 = *(int *)(param_1 + 0x255f4);
    *(int *)(param_1 + 0x25608) = iVar1;
    if (iVar1 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x8c))(iVar1,param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x25608) + 0x2b0) + 0x24))
                (*(int *)(param_1 + 0x25608));
      puVar4 = (uint *)&stack0xffffff18;
      puVar5 = &stack0xffffff30;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if ((uint *)(param_1 + 0x2570c) != &stack0xffffff30) {
        *(uint *)(param_1 + 0x2570c) = uStack_d0;
        *(uint *)(param_1 + 0x25710) = uStack_cc;
        *(uint *)(param_1 + 0x25714) = uStack_c8;
      }
      if ((uint *)(param_1 + 0x25718) != &stack0xffffff3c) {
        *(uint *)(param_1 + 0x25718) = uStack_c4;
        *(uint *)(param_1 + 0x2571c) = uStack_c0;
        *(uint *)(param_1 + 0x25720) = uStack_bc;
      }
      fStack_28 = *(float *)(param_1 + 0x2570c) + *(float *)(param_1 + 0x25718);
      fStack_24 = *(float *)(param_1 + 0x25710) + *(float *)(param_1 + 0x2571c);
      fStack_20 = *(float *)(param_1 + 0x25714) + *(float *)(param_1 + 0x25720);
      fStack_58 = fStack_28;
      *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_64 = fStack_58 * _DAT_005d07b7;
      fStack_60 = fStack_54 * _DAT_005d07b7;
      fStack_5c = fStack_50 * _DAT_005d07b7;
      fStack_4c = fStack_58 * _DAT_005d07b7;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408d70(*(uint *)(param_1 + 0x25608),&stack0xffffffb4);
      puVar4 = &stack0xffffffcc;
      uStack_34 = uStack_b8;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff4c + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408de0(param_1,puVar4);
      uStack_70 = uStack_94;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if ((uint *)(param_1 + 0x25700) != &stack0xffffff90) {
        *(uint *)(param_1 + 0x25700) = uStack_70;
        *(uint *)(param_1 + 0x25704) = uStack_6c;
        *(uint *)(param_1 + 0x25708) = uStack_68;
      }
      switch(uVar3) {
      case 1:
        FUN_00503620(param_1 + 0x2b4,0x1b,1);
        uVar3 = *(uint *)(param_1 + 0x25608);
        pcVar7 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar1 = *(int *)(param_1 + 0x25608);
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x8c))(iVar1,param_1), iVar1 != 4)) {
          iVar1 = param_1 + 0x2b4;
          if (*(float *)(param_1 + 0x25704) <= (float)_DAT_005d07c7) {
            FUN_00503620(iVar1,0x13,1);
            uVar3 = *(uint *)(param_1 + 0x25608);
            pcVar7 = "Picking up %s off ground\n";
          }
          else {
            FUN_005469a0(iVar1,_DAT_01b4d290);
            FUN_005469a0(iVar1,_DAT_01b4d268);
            FUN_00503620(iVar1,0x15,1);
            uVar3 = *(uint *)(param_1 + 0x25608);
            pcVar7 = "Picking up %s waist level\n";
          }
        }
        else {
          FUN_00408de0(*(uint *)(param_1 + 0x25608),param_1 + 0x20);
          uStack_a0 = uStack_7c;
          *(uint *)(&stack0xffffff64 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *(uint *)(param_1 + 0x256f0) = (uint)(0.0 < fStack_98);
          if (*(float *)(param_1 + 0x25704) <= (float)_DAT_005d07bf) {
            FUN_00503620(param_1 + 0x2b4,0x17,1);
            uVar3 = *(uint *)(param_1 + 0x25608);
            pcVar7 = "Picking up heavy %s crate\n";
          }
          else {
            FUN_00503620(param_1 + 0x2b4,0x18,1);
            FUN_00408de0(param_1,*(int *)(param_1 + 0x25608) + 0x20);
            uStack_88 = uStack_1c;
            *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((uint *)(param_1 + 0x25700) != &stack0xffffff78) {
              *(uint *)(param_1 + 0x25700) = uStack_88;
              *(uint *)(param_1 + 0x25704) = uStack_84;
              *(uint *)(param_1 + 0x25708) = uStack_80;
            }
            uVar3 = *(uint *)(param_1 + 0x25608);
            pcVar7 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)(param_1 + 0x25608) = 0;
        FUN_004cf200(param_1);
        return;
      }
      FUN_00436710(PTR_DAT_00609ed0,pcVar7,uVar3);
      if (*(int *)(param_1 + 0x25608) != 0) {
        *(uint *)(param_1 + 0x256a4) = 4;
        FUN_004cf200(param_1);
        return;
      }
    }
    break;
  case 7:
    FUN_00436710(PTR_DAT_00609ed0,"?CDoc::doHeroAction - pull lever\n" + 1);
    uVar3 = _DAT_01d03500;
    *(uint *)(param_1 + 0x10a74) = 0;
    iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),uVar3);
    if (iVar1 == 0) {
      FUN_0047be40(0x01C25594,"CDoc::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      FUN_004cf200(param_1);
      return;
    }
    FUN_00436710(PTR_DAT_00609ed0,"  lever = %s\n",iVar1);
    iVar2 = FUN_004925c0(iVar1 + 0x57c);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x25610) = iVar1;
      FUN_00503620(param_1 + 0x2b4,0x21,1);
      FUN_004cf200(param_1);
      return;
    }
  }
  FUN_004cf200(param_1);
  return;
}
