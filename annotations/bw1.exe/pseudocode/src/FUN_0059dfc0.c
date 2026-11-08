// Name: FUN_0059dfc0
// Address: 0059dfc0
// Address Range: [[0059dfc0, 0059e03f]]
// Convention: unknown
// Signature: void FUN_0059dfc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059dfc0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_02c8ae58 != 0) {
    FUN_005b3750(_DAT_02c8ae58);
  }
  if (param_1 == _DAT_02c8ae60) {
    _DAT_02c8ae60 = 0;
  }
  piVar2 = (int *)&DAT_02c8ae5c;
  iVar1 = _DAT_02c8ae5c;
  do {
    if (iVar1 == 0) {
LAB_0059dfff:
      *(uint *)(param_1 + 0x3c0) = 0;
      if (_DAT_02c8ae58 == 0) {
        return;
      }
      FUN_005b37b0(_DAT_02c8ae58);
      return;
    }
    if (param_1 == *piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_0059dfff;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
