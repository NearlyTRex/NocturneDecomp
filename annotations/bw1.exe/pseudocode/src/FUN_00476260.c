// Name: FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 004763b2]]
// Convention: unknown
// Signature: int FUN_00476260(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00476260(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != 0) {
    FUN_00445430(PTR_DAT_00611100,"CDoc::startGettingGrabbed by %s, type %d\n",param_2,param_3);
    uVar1 = FUN_00524770(param_1 + 0x158);
    FUN_00445430(PTR_DAT_00611100,"  current motion is %s\n",uVar1);
    if (((*(int *)(param_1 + 0x1ff78) == 0) && (*(int *)(param_1 + 0x1ff74) == 0)) &&
       (*(int *)(param_1 + 0x1ff80) == 0)) {
      fVar2 = (float)FUN_00525020(param_1 + 0x158);
      if ((*(int *)(param_1 + 0x2c98) == 0xc) || (*(int *)(param_1 + 0x2c98) == 0xd)) {
        if ((fVar2 <= (float)_DAT_005da64c) || (_DAT_005da654 <= (double)fVar2)) {
LAB_0047631f:
          iVar3 = FUN_004eadf0(param_1,param_2,param_3);
          if (iVar3 != 0) {
            if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x25b0)) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
            }
            if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x2628)) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
            }
            *(uint *)(param_1 + 0x200a8) = 0;
          }
          return iVar3;
        }
      }
      else if (*(int *)(param_1 + 0x1ff5c) != 3) {
        if (*(int *)(param_1 + 0x1ff5c) != 0) {
          return 0;
        }
        goto LAB_0047631f;
      }
    }
  }
  return 0;
}
