// Name: FUN_005699c0
// Address: 005699c0
// Address Range: [[005699c0, 00569a00]]
// Convention: unknown
// Signature: void FUN_005699c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005699c0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2320)) {
    FUN_00569890(param_1,param_2);
  }
  uVar1 = FUN_00569eb0(param_1,*(uint *)(param_1 + 0x2320),*(uint *)(param_1 + 0x2324));
  FUN_00564070(uVar1);
  return;
}
