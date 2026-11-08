// Name: FUN_004b7fc0
// Address: 004b7fc0
// Address Range: [[004b7fc0, 004b8026]]
// Convention: unknown
// Signature: void FUN_004b7fc0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004b7fc0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != *(int *)(param_1 + 0x25c)) && (*(int *)(param_1 + 0x25c) = param_2, param_2 == 0))
  {
    iVar1 = *(int *)(0x01E661B8 + 0x15aeb8);
    FUN_00538d10(0x01E661B8,*(uint *)(0x01E65CD0 + 0xc),1);
    *(uint *)(0x01E65CD0 + 0x10) = 0;
    if (iVar1 == *(int *)(0x01E661B8 + 0x15aeb8)) {
      FUN_0052ddf0(0x01E661B8,*(int *)(0x01E661B8 + 0x15aeb8));
      return;
    }
  }
  return;
}
