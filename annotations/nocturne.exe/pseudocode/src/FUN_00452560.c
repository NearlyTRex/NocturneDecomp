// Name: FUN_00452560
// Address: 00452560
// Address Range: [[00452560, 00452587]]
// Convention: unknown
// Signature: void FUN_00452560(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00452560(uint param_1,int param_2)

{
  int iVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    do {
      iVar1 = _fgetc(param_1);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    param_2 = param_2 + -1;
  } while( true );
}
