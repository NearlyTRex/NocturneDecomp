// Name: crt_math.c__IsZeroMan_FUN_10009e90
// Address: 10009e90
// Address Range: [[10009e90, 10009eac]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__IsZeroMan_FUN_10009e90(int *man)

#include "nocturne.h"

int __cdecl _IsZeroMan(int *man)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*man != 0) {
      return 0;
    }
    man = man + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}
