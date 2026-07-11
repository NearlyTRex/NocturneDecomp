// Name: FUN_00439590
// Address: 00439590
// Address Range: [[00439590, 0043962c]]
// Convention: unknown
// Signature: uint FUN_00439590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00439590(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = 1 << ((char)*(uint *)(param_1 + 8) - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_004395d9;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = FUN_00438ab0(param_2,1,param_3,param_4);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_004395d9:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = FUN_00438ab0(param_2,1,param_3,param_4);
            if (iVar2 < 0) {
              return 0xffffffff;
            }
            if (iVar2 == 0) break;
            uVar4 = uVar4 | uVar3;
            uVar3 = (int)uVar3 >> 1;
            if (uVar3 == 0) {
              return uVar4;
            }
          }
        }
        return uVar4;
      }
      uVar4 = uVar4 | uVar3;
    }
    uVar3 = (int)uVar3 >> 1;
    if (uVar3 == 0) {
      return uVar4;
    }
  } while( true );
}
