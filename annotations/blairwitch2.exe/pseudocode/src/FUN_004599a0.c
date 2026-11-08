// Name: FUN_004599a0
// Address: 004599a0
// Address Range: [[004599a0, 00459d36]]
// Convention: unknown
// Signature: undefined4 FUN_004599a0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004599a0(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1058 [1006];
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uStack_70;
  uint uStack_64;
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  uint uStack_1c;
  float fStack_10;
  float fStack_c;
  
  bVar2 = 0;
  iVar1 = FUN_004254b0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004089d0(param_1);
  FUN_0042b620(param_1);
  FUN_00408a10(param_1);
  fStack_c = (float)FUN_0042a5a0(param_1,4);
  if ((float)_DAT_005d0507 < fStack_c) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x2698) != 0) {
      iVar1 = *(int *)(param_1 + 0x2698) + 0x20;
    }
    if (*(int *)(param_1 + 0x25698) != 0) {
      iVar1 = *(int *)(param_1 + 0x25698) + 0x20;
    }
    if (iVar1 != 0) {
      FUN_00537e00(0x01E661B8);
      FUN_00537eb0(0x01E661B8,1);
      FUN_00537e30(0x01E661B8,param_1);
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x25698));
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x2698));
      FUN_0045bba0(param_1);
      puVar6 = &stack0xffffffe4;
      uStack_1c = uStack_40;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00408cf0(param_1,puVar6);
      puVar6 = &stack0xffffff9c;
      uStack_64 = uStack_70;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff94 + (uint)bVar2 * -8);
      iVar3 = 0x01E661B8;
      iVar4 = iVar1;
      *(uint *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fStack_c = (float)FUN_00536210(iVar3,iVar4,puVar6);
      fStack_10 = fStack_c;
      if (fStack_c < 0.0) {
        fStack_10 = 10.0;
      }
      FUN_0049d840(0x01C3DEB4,iVar1,&stack0xffffff9c,0x3f800000,0x3f800000,0x01E661B8 + 0x14d128
                   ,fStack_10,0xff,0,0);
      FUN_00537e00(0x01E661B8);
    }
  }
  if (*(int *)(param_1 + 0x23f4 + _DAT_01b4d2b0 * 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x25698);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x43c) == 0) && (iVar1 != *(int *)(param_1 + 0x2620))) {
        uVar7 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x2698) == *(int *)(param_1 + 0x25698)) goto LAB_00459b81;
        uVar7 = 0;
      }
      FUN_004567c0(param_1,uVar7);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0x18))
                (*(int *)(param_1 + 0x25698));
    }
LAB_00459b81:
    if (0.0 < *(float *)(param_1 + 0x259b0)) {
      FUN_00592720(param_1 + 0x2575c);
      uStack_58 = uStack_34;
      *(uint *)((int)&stack0xffffffac + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00591de0(param_1 + 0x2575c);
      puVar6 = &stack0xffffffb4;
      puVar5 = &stack0xffffffa8;
      uStack_4c = uStack_28;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
      iVar1 = param_1 + 0x259b4;
      *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_0041ce90(iVar1,puVar5,puVar6);
      FUN_0041c580(param_1 + 0x259b4);
    }
  }
  iVar1 = *(int *)(param_1 + 0x25698);
  if ((((iVar1 == 0) || (iVar1 == *(int *)(param_1 + 0x2620))) ||
      (iVar1 == *(int *)(param_1 + 0x2698))) ||
     ((*(int *)(param_1 + 0x23f4 + _DAT_01b4d2b0 * 4) == 0 ||
      (iVar1 = FUN_0040c840(iVar1,&DAT_005d0502), iVar1 == 0)))) goto LAB_00459c91;
  if (*(int *)(param_1 + 0x25698) == 0) {
switchD_00459c4e_caseD_3:
    uVar7 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
    case 0:
    case 5:
      uVar7 = 2;
      break;
    case 1:
      uVar7 = 0xb;
      break;
    case 2:
      uVar7 = 9;
      break;
    default:
      goto switchD_00459c4e_caseD_3;
    case 4:
      uVar7 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      uVar7 = 6;
      break;
    case 10:
    case 0xb:
      uVar7 = 0xe;
    }
  }
  fStack_c = (float)FUN_0042a5a0(param_1,uVar7);
  if ((float)_DAT_005d050f < fStack_c) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xf8))(*(int *)(param_1 + 0x25698))
    ;
  }
LAB_00459c91:
  if (((*(int *)(param_1 + 0x23f4 + _DAT_01b4d2b0 * 4) == 0) &&
      (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) && (0 < *(int *)(param_1 + 0x2d0c))) {
    FUN_005b1550(param_1 + 0x2d0c);
  }
  return 1;
}
