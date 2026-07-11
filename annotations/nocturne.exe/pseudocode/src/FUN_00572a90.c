// Name: FUN_00572a90
// Address: 00572a90
// Address Range: [[00572a90, 00572afe]]
// Convention: unknown
// Signature: undefined4 FUN_00572a90(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_00572a90(uint param_1,int param_2)

{
  int iVar1;
  byte auStack_8 [4];
  
  FUN_0056da30(param_2,auStack_8);
  iVar1 = FUN_0056da50(auStack_8);
  auStack_8[iVar1] = 0;
  while( true ) {
    iVar1 = FUN_00570ca0(param_1);
    if (iVar1 != 0) break;
    iVar1 = FUN_00572e00(param_1,auStack_8);
    if (iVar1 == 0) break;
    param_1 = FUN_0056da80(param_1);
  }
  iVar1 = FUN_00570ca0(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    param_1 = 0;
  }
  return param_1;
}
