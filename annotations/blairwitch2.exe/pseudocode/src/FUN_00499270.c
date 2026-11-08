// Name: FUN_00499270
// Address: 00499270
// Address Range: [[00499270, 0049929d]]
// Convention: unknown
// Signature: int FUN_00499270(int param_1)

#include "nocturne.h"

int FUN_00499270(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044fc80(param_1 + 4);
  iVar1 = FUN_005b1bc0(iVar1 + 0x17c);
  *(uint *)(iVar1 + 0x25c) = 0;
  return iVar1 + -0x180;
}
