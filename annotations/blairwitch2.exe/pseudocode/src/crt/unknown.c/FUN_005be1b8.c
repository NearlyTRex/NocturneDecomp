// Name: crt_unknown.c_FUN_005be1b8
// Address: 005be1b8
// Address Range: [[005be1b8, 005be1c5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005be1b8(undefined4 param_1)

#include "nocturne.h"

void FUN_005be1b8(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
  *(uint *)(iVar1 + 8) = param_1;
  return;
}
