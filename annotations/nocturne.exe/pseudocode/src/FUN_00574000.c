// Name: FUN_00574000
// Address: 00574000
// Address Range: [[00574000, 00574027]]
// Convention: unknown
// Signature: int FUN_00574000(char *param_1)

#include "nocturne.h"

int FUN_00574000(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = mbstring_termination_check(param_1);
    if (iVar1 != 0) break;
    param_1 = (char *)mbtowc_next(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
