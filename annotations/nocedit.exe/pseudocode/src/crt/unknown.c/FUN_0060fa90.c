// Name: crt_unknown.c_FUN_0060fa90
// Address: 0060fa90
// Address Range: [[0060fa90, 0060fab7]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fa90(char *param_1)

#include "nocturne.h"

int FUN_0060fa90(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = mbstring_termination_check(param_1);
    if (iVar1 != 0) break;
    param_1 = mbtowc_next(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
