// Name: FUN_0052c090
// Address: 0052c090
// Address Range: [[0052c090, 0052c0df]]
// Convention: unknown
// Signature: void FUN_0052c090(int param_1)

#include "nocturne.h"

void FUN_0052c090(int param_1)

{
  int iVar1;
  
  FUN_0044e590(0x1fc9ff8);
  iVar1 = param_1 + 4;
  do {
    FUN_0053a830(iVar1);
    iVar1 = iVar1 + 0x1a4;
  } while (iVar1 != param_1 + 0x19a2c);
  FUN_0057b840(0x0265364C);
  FUN_00539be0(param_1);
  return;
}
