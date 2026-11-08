// Name: FUN_004cea00
// Address: 004cea00
// Address Range: [[004cea00, 004cea42]]
// Convention: unknown
// Signature: undefined4 FUN_004cea00(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004cea00(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = FUN_00503860(param_1 + 0x2b4,"GETGRABBED",0);
    iVar2 = FUN_00502fa0(uVar1);
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}
