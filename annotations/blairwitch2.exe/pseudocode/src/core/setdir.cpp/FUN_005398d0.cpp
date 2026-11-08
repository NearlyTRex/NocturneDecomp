// Name: FUN_005398d0
// Address: 005398d0
// Address Range: [[005398d0, 005399f4] [00539b85, 00539bdb]]
// Convention: unknown
// Signature: void FUN_005398d0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005398d0(int *param_1,uint param_2)

{
  int iVar1;
  uint unaff_EBX;
  uint uVar2;
  int iVar3;
  uint unaff_ESI;
  uint unaff_EDI;
  byte bVar4;
  int *apiStackY_108c [1008];
  uint uStack_a4;
  int *piStack_a0;
  uint uStack_98;
  int *piStack_94;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  int *piStack_7c;
  uint uStack_74;
  int *piStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int *piStack_4c;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int *piStack_28;
  uint uStack_20;
  int *piStack_1c;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  int *local_8;
  
  bVar4 = 0;
  iVar3 = 0;
  FUN_00539be0(param_1);
LAB_005398e9:
  while( true ) {
    if (*param_1 <= iVar3) {
      return;
    }
    local_8 = param_1 + iVar3 * 0x69 + 1;
    if (local_8[0x50] != 0) break;
    FUN_00538470(iVar3 * 0xf0 + 0x2093d34,local_8 + 0x40,local_8 + 0x43,0x40,0x30,
                 (float)local_8[0x51] * (float)_DAT_005e6045,param_2,unaff_EBX,unaff_ESI,unaff_EDI);
    iVar3 = iVar3 + 1;
  }
  uVar2 = 0;
  do {
    switch(uVar2) {
    default:
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_80 = 0;
      (&stack0xffffff84)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffffb4)[(uint)bVar4 * -2 + 3];
      (&stack0xffffff84)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (&stack0xffffffb4)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&stack0xffffff8c != &stack0xffffff80) {
        uStack_74 = uStack_80;
        piStack_70 = piStack_7c;
      }
      break;
    case 1:
      uStack_30 = 0;
      uStack_34 = 0x40490fdb;
      uStack_38 = 0;
      uStack_20 = 0;
      (&stack0xffffffe4)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffffb4)[(uint)bVar4 * -2 + 6];
      (&stack0xffffffe4)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (&stack0xffffffb4)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&stack0xffffff8c != &stack0xffffffe0) {
        uStack_74 = uStack_20;
        piStack_70 = piStack_1c;
      }
      break;
    case 2:
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_64 = 0x3fc90fdb;
      uStack_98 = 0;
      (&stack0xffffff6c)[(uint)bVar4 * 0xfffffffe] =
           (int *)(&stack0xffffff9c)[(uint)bVar4 * 0xfffffffe];
      (&stack0xffffff6c)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (int *)(&stack0xffffff9c)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&stack0xffffff8c != &stack0xffffff68) {
        uStack_74 = uStack_98;
        piStack_70 = piStack_94;
      }
      break;
    case 3:
      uStack_84 = 0;
      uStack_8c = 0;
      uStack_88 = 0xbfc90fdb;
      uStack_50 = 0;
      (&stack0xffffffb4)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffff6c)[(uint)bVar4 * -2 + 3];
      (&stack0xffffffb4)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (&stack0xffffff6c)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&stack0xffffff8c != &stack0xffffffb0) {
        uStack_74 = uStack_50;
        piStack_70 = piStack_4c;
      }
      break;
    case 4:
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_5c = 0xbfc90fdb;
      uStack_2c = 0xbfc90fdb;
      (&stack0xffffffd8)[(uint)bVar4 * 0xfffffffe] = (int *)(&stack0xffffff9c)[(uint)bVar4 * -2 + 3]
      ;
      (&stack0xffffffd8)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (int *)(&stack0xffffff9c)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&stack0xffffff8c != &stack0xffffffd4) {
        uStack_74 = uStack_2c;
        piStack_70 = piStack_28;
      }
      break;
    case 5:
      uStack_14 = 0x3fc90fdb;
      uStack_c = 0;
      uStack_10 = 0;
      uStack_a4 = 0x3fc90fdb;
      (&stack0xffffff60)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffffe4)[(uint)bVar4 * -2 + 3];
      (&stack0xffffff60)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           (&stack0xffffffe4)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&stack0xffffff8c != &stack0xffffff5c) {
        uStack_74 = uStack_a4;
        piStack_70 = piStack_a0;
      }
    }
    while( true ) {
      iVar1 = uVar2 * 0x28;
      uVar2 = uVar2 + 1;
      FUN_00538470(iVar1 + iVar3 * 0xf0 + 0x2093d34,local_8 + 0x40,&stack0xffffff8c,0x40,0x40,
                   0x3f800000,param_2,unaff_EBX,unaff_ESI,unaff_EDI);
      if (5 < (int)uVar2) {
        iVar3 = iVar3 + 1;
        goto LAB_005398e9;
      }
      if (uVar2 < 6) break;
      _DAT_01d046a0 = "..\\core\\setdir.cpp";
      _DAT_01d046a4 = 0x3aa;
      FUN_004e4500("Hell froze");
    }
  } while( true );
}
