// Name: FUN_0040bb60
// Address: 0040bb60
// Address Range: [[0040bb60, 0040bc4b]]
// Convention: unknown
// Signature: void FUN_0040bb60(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bb60(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    FUN_0040b050(1);
    FUN_00504250(param_1,DAT_007bc034,&DAT_00609590);
    FUN_0040b050(0xffffffff);
    FUN_005b8010(DAT_007bc034,&DAT_005cab9c,&DAT_00609590);
    return;
  }
  do {
    iVar1 = FUN_005b8180(DAT_007bc034);
    if (iVar1 < 0) {
      FUN_0040b380("motion state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  FUN_005041b0(param_1,DAT_007bc034);
  do {
    while( true ) {
      iVar1 = FUN_005b8180(DAT_007bc034);
      if (-1 < iVar1) break;
      FUN_0040b380("motion state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
