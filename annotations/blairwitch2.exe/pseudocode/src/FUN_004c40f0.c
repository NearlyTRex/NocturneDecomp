// Name: FUN_004c40f0
// Address: 004c40f0
// Address Range: [[004c40f0, 004c44b1]]
// Convention: unknown
// Signature: void FUN_004c40f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c40f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte auStack_78 [100];
  float fStack_14;
  
  FUN_00551050(*(uint *)(param_1 + 0x10b48));
  if ((*(int *)(param_1 + 0x10b58) != 0) &&
     (iVar1 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar1 + 0x24) == 0)) {
    *(uint *)(param_1 + 0x10b5c) = 0x41f00000;
    *(uint *)(param_1 + 0x10b58) = 0;
    *(uint *)(param_1 + 0x10b60) = 1;
    *(uint *)(param_1 + 0x10b64) = 0x3f800000;
    if ((uint *)(param_1 + 0x10b68) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0x10b68) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10b6c) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x10b70) = *(uint *)(param_1 + 0x28);
    }
    FUN_00436710(PTR_DAT_00609ed0,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)(param_1 + 0x10b54) = 0x40800000;
  }
  FUN_004c3e30(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x10a78);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xfc))(iVar1), iVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))(*(int *)(param_1 + 0x10a78))
    ;
  }
  *(float *)(param_1 + 0x25a8) = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b44) * 4) == 0) {
    *(uint *)(param_1 + 0x25a8) = 0;
  }
  if (*(float *)(param_1 + 0x25a8) <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    if (*(int *)(param_1 + 0x10ae8) != 0) {
      FUN_00427210(param_1);
      FUN_00488890(param_1,param_2);
      return;
    }
    iVar1 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar1 + 0x24) != 10) && (*(int *)(iVar1 + 0x24) != 9)) {
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b44) * 4) == 0) {
        *(uint *)(param_1 + 0x10b14) = 0;
      }
      else {
        *(int *)(param_1 + 0x10b14) = *(int *)(param_1 + 0x10b14) + -1;
      }
      uVar3 = 6;
      if (*(int *)(param_1 + 0x3448) < 1) {
        iVar1 = FUN_0040d060(0x3f000000);
        if (iVar1 != 0) {
          uVar3 = 7;
        }
      }
      else {
        iVar2 = 0;
        iVar1 = param_1;
        if (0 < *(int *)(param_1 + 0x3448)) {
          do {
            if (*(int *)(iVar1 + 0x344c) == *(int *)(param_1 + 0x10b40)) {
              uVar3 = 8;
              break;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x38;
          } while (iVar2 < *(int *)(param_1 + 0x3448));
        }
      }
      FUN_00503620(param_1 + 0x2b4,uVar3,1);
      iVar1 = FUN_00550b70(*(uint *)(param_1 + 0x10b50));
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)(param_1 + 0x10b50) = uVar3;
      }
      fStack_14 = (float)FUN_0040cf60(0x40800000,0x41200000);
      fVar4 = (float10)fStack_14 * (float10)_DAT_005d9247;
      *(uint *)(param_1 + 0x10b04) = 0xa0000;
      iVar1 = FUN_005b7ff0(0x32,0x41c80000);
      *(int *)(param_1 + 0x10b00) = (int)ROUND(fVar4);
      (**(code **)(iVar1 + 0xb0))(param_1);
    }
  }
  else {
    iVar1 = FUN_005035c0(param_1 + 0x2b4);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0) || (iVar1 == 0xb || (iVar1 == 0xc || iVar1 == 2))) ||
       (iVar1 = FUN_0040d060(0x3e800000), iVar1 != 0)) {
      iVar1 = FUN_0040d060(0x3f000000,1);
      FUN_00503620(param_1 + 0x2b4,(iVar1 == 0) + '\x03');
    }
    else {
      uVar3 = FUN_0040cfc0(1,2);
      FUN_005b7790(auStack_78,"guul flinch%d",uVar3);
      uVar3 = FUN_00503860(param_1 + 0x2b4,auStack_78,1);
      uVar3 = FUN_00502f10(uVar3);
      *(uint *)(param_1 + 0x10b0c) = 0x3f800000;
      *(uint *)(param_1 + 0x10b10) = uVar3;
    }
    iVar1 = FUN_00550b70(*(uint *)(param_1 + 0x10b4c));
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)(param_1 + 0x10b4c) = uVar3;
      FUN_00488890(param_1,param_2);
      return;
    }
  }
  FUN_00488890(param_1,param_2);
  return;
}
