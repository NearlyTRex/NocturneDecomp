// Name: FUN_00551050
// Address: 00551050
// Address Range: [[00551050, 00551077]]
// Convention: unknown
// Signature: undefined4 FUN_00551050(undefined4 param_1)

#include "nocturne.h"

uint FUN_00551050(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0054f700(iVar1);
  FUN_00551440();
  return 1;
}
