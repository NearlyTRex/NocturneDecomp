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
  void *pvVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = _DAT_02de54a4;
  if (_DAT_02de54a4 != (int *)0x0) {
    while( true ) {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      if (iVar3 == 0) break;
      iVar1 = FUN_00574000(iVar3);
      pvVar2 = malloc((iVar1 + 1) * 2);
      if (pvVar2 != (void *)0x0) {
        iVar3 = FUN_00574030(pvVar2,iVar3,iVar1 + 1);
        if (iVar3 == -1) {
          FUN_005638d0(pvVar2);
        }
        else {
          FUN_00574264(pvVar2);
        }
      }
    }
  }
  return;
}
