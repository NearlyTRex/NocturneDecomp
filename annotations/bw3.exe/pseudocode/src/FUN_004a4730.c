// Name: FUN_004a4730
// Address: 004a4730
// Address Range: [[004a4730, 004a475e]]
// Convention: unknown
// Signature: int FUN_004a4730(undefined4 param_1)

#include "nocturne.h"

int FUN_004a4730(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0xb0,3,&DAT_005db0f0);
  *(byte ***)(iVar1 + -0x74) = &PTR_FUN_005df974;
  return iVar1 + -0xb0;
}
