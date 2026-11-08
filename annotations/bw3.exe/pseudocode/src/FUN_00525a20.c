// Name: FUN_00525a20
// Address: 00525a20
// Address Range: [[00525a20, 00526075]]
// Convention: unknown
// Signature: void FUN_00525a20(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525a20(int param_1)

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
  
  uVar3 = _DAT_01b85178;
  bVar6 = 0;
  switch(*(uint *)(param_1 + 0x20b68)) {
  case 1:
  case 2:
  case 10:
    FUN_004d4520(param_1);
    FUN_004d3210(param_1);
    return;
  case 3:
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar3);
    *(int *)(param_1 + 0x20b94) = iVar1;
    if (iVar1 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      FUN_004d3210(param_1);
      return;
    }
    iVar1 = FUN_00495db0(iVar1 + 0x478);
    if (iVar1 == 0) {
      switch(*(uint *)(param_1 + 0x20b74)) {
      case 0:
        break;
      default:
        FUN_004d3250(param_1);
        FUN_004d3210(param_1);
        return;
      case 2:
        FUN_004fc0d0(param_1 + 0x158,0x2a,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        FUN_004d3210(param_1);
        return;
      case 3:
        FUN_004fc0d0(param_1 + 0x158,0x2b,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        FUN_004d3210(param_1);
        return;
      case 4:
        FUN_004fc0d0(param_1 + 0x158,0x28,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        FUN_004d3210(param_1);
        return;
      case 5:
        FUN_004fc0d0(param_1 + 0x158,0x29,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        FUN_004d3210(param_1);
        return;
      }
    }
    *(uint *)(param_1 + 0x20b94) = 0;
    FUN_004d3210(param_1);
    return;
  case 4:
    iVar1 = *(int *)(param_1 + 0x20b6c);
    *(int *)(param_1 + 0x20b98) = iVar1;
    if (iVar1 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x20b98) + 0x154) + 0x1c))
                (*(int *)(param_1 + 0x20b98));
      puVar4 = (uint *)&stack0xffffff18;
      puVar5 = &stack0xffffff30;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if ((uint *)(param_1 + 0x20c98) != &stack0xffffff30) {
        *(uint *)(param_1 + 0x20c98) = uStack_d0;
        *(uint *)(param_1 + 0x20c9c) = uStack_cc;
        *(uint *)(param_1 + 0x20ca0) = uStack_c8;
      }
      if ((uint *)(param_1 + 0x20ca4) != &stack0xffffff3c) {
        *(uint *)(param_1 + 0x20ca4) = uStack_c4;
        *(uint *)(param_1 + 0x20ca8) = uStack_c0;
        *(uint *)(param_1 + 0x20cac) = uStack_bc;
      }
      fStack_28 = *(float *)(param_1 + 0x20c98) + *(float *)(param_1 + 0x20ca4);
      fStack_24 = *(float *)(param_1 + 0x20c9c) + *(float *)(param_1 + 0x20ca8);
      fStack_20 = *(float *)(param_1 + 0x20ca0) + *(float *)(param_1 + 0x20cac);
      fStack_58 = fStack_28;
      *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_64 = fStack_58 * _DAT_005cd947;
      fStack_60 = fStack_54 * _DAT_005cd947;
      fStack_5c = fStack_50 * _DAT_005cd947;
      fStack_4c = fStack_58 * _DAT_005cd947;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408b80(*(uint *)(param_1 + 0x20b98),&stack0xffffffb4);
      puVar4 = &stack0xffffffcc;
      uStack_34 = uStack_b8;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff4c + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408bf0(param_1,puVar4);
      uStack_70 = uStack_94;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if ((uint *)(param_1 + 0x20c8c) != &stack0xffffff90) {
        *(uint *)(param_1 + 0x20c8c) = uStack_70;
        *(uint *)(param_1 + 0x20c90) = uStack_6c;
        *(uint *)(param_1 + 0x20c94) = uStack_68;
      }
      switch(uVar3) {
      case 1:
        FUN_004fc0d0(param_1 + 0x158,0x26,1);
        uVar3 = *(uint *)(param_1 + 0x20b98);
        pcVar7 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar1 = *(int *)(param_1 + 0x20b98);
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          iVar1 = param_1 + 0x158;
          if (*(float *)(param_1 + 0x20c90) <= (float)_DAT_005cd957) {
            FUN_004fc0d0(iVar1,0x1e,1);
            uVar3 = *(uint *)(param_1 + 0x20b98);
            pcVar7 = "Picking up %s off ground\n";
          }
          else {
            FUN_0054dbd0(iVar1,_DAT_01ed3714);
            FUN_0054dbd0(iVar1,_DAT_01ed36ec);
            FUN_004fc0d0(iVar1,0x20,1);
            uVar3 = *(uint *)(param_1 + 0x20b98);
            pcVar7 = "Picking up %s waist level\n";
          }
        }
        else {
          FUN_00408bf0(*(uint *)(param_1 + 0x20b98),param_1 + 0x20);
          uStack_a0 = uStack_7c;
          *(uint *)(&stack0xffffff64 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *(uint *)(param_1 + 0x20c7c) = (uint)(0.0 < fStack_98);
          if (*(float *)(param_1 + 0x20c90) <= (float)_DAT_005cd94f) {
            FUN_004fc0d0(param_1 + 0x158,0x22,1);
            uVar3 = *(uint *)(param_1 + 0x20b98);
            pcVar7 = "Picking up heavy %s crate\n";
          }
          else {
            FUN_004fc0d0(param_1 + 0x158,0x23,1);
            FUN_00408bf0(param_1,*(int *)(param_1 + 0x20b98) + 0x20);
            uStack_88 = uStack_1c;
            *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((uint *)(param_1 + 0x20c8c) != &stack0xffffff78) {
              *(uint *)(param_1 + 0x20c8c) = uStack_88;
              *(uint *)(param_1 + 0x20c90) = uStack_84;
              *(uint *)(param_1 + 0x20c94) = uStack_80;
            }
            uVar3 = *(uint *)(param_1 + 0x20b98);
            pcVar7 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)(param_1 + 0x20b98) = 0;
        FUN_004d3210(param_1);
        return;
      }
      FUN_00441ff0(PTR_DAT_005f1690,pcVar7,uVar3);
      if (*(int *)(param_1 + 0x20b98) != 0) {
        *(uint *)(param_1 + 0x20b64) = 4;
        FUN_004d3210(param_1);
        return;
      }
    }
    break;
  case 8:
    FUN_00441ff0(PTR_DAT_005f1690,"?CPrye::doHeroAction - pull lever\n" + 1);
    uVar3 = _DAT_01d70c34;
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar3);
    if (iVar1 == 0) {
      FUN_0047cf40(0x01C5B0E4,"CPrye::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      FUN_004d3210(param_1);
      return;
    }
    FUN_00441ff0(PTR_DAT_005f1690,"  lever = %s\n",iVar1);
    iVar2 = FUN_00495db0(iVar1 + 0x420);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x20ba0) = iVar1;
      FUN_004fc0d0(param_1 + 0x158,0x2c,1);
      FUN_004d3210(param_1);
      return;
    }
  }
  FUN_004d3210(param_1);
  return;
}
