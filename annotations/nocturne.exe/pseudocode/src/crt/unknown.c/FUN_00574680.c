// Name: crt_unknown.c_FUN_00574680
// Address: 00574680
// Address Range: [[00574680, 005746e3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574680(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00574680(void)

{
  int iVar1;
  void *ptr;
  int iVar2;
  int *piVar3;
  
  piVar3 = _DAT_02de54a4;
  if (_DAT_02de54a4 != (int *)0x0) {
    while( true ) {
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
      if (iVar2 == 0) break;
      iVar1 = FUN_00574000(iVar2);
      ptr = malloc((iVar1 + 1) * 2);
      if (ptr != (void *)0x0) {
        iVar2 = FUN_00574030(ptr,iVar2,iVar1 + 1);
        if (iVar2 == -1) {
          free(ptr);
        }
        else {
          FUN_00574264(ptr);
        }
      }
    }
  }
  return;
}
