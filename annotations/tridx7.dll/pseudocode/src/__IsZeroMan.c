// Name: __IsZeroMan
// Address: 10009e90
// Address Range: [[10009e90, 10009eac]]
// Convention: unknown
// Signature: undefined4 __IsZeroMan(int *param_1)

#include "nocturne.h"

/* Library Function - Single Match
uint __IsZeroMan(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}
