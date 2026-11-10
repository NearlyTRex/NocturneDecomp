// Name: crt_unknown.c_FUN_005b1970
// Address: 005b1970
// Address Range: [[005b1970, 005b1997]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b1970(undefined4 param_1)

#include "nocturne.h"

int FUN_005b1970(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_005af2a0(param_1);
    if (iVar1 != 0) break;
    param_1 = FUN_005aca00(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
