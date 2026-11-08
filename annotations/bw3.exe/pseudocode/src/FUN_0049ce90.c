// Name: FUN_0049ce90
// Address: 0049ce90
// Address Range: [[0049ce90, 0049cebd]]
// Convention: unknown
// Signature: int FUN_0049ce90(int param_1)

#include "nocturne.h"

int FUN_0049ce90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462500(param_1 + 4);
  iVar1 = FUN_0041ad40(iVar1 + 0x17c);
  *(uint *)(iVar1 + 0x25c) = 0;
  return iVar1 + -0x180;
}
