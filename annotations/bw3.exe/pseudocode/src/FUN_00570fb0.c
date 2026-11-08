// Name: FUN_00570fb0
// Address: 00570fb0
// Address Range: [[00570fb0, 0057102f]]
// Convention: unknown
// Signature: void FUN_00570fb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_02cfd8a8 != 0) {
    FUN_00581930(_DAT_02cfd8a8);
  }
  if (param_1 == _DAT_02cfd8b0) {
    _DAT_02cfd8b0 = 0;
  }
  piVar2 = (int *)&DAT_02cfd8ac;
  iVar1 = _DAT_02cfd8ac;
  do {
    if (iVar1 == 0) {
LAB_00570fef:
      *(uint *)(param_1 + 0x3c0) = 0;
      if (_DAT_02cfd8a8 == 0) {
        return;
      }
      FUN_00581990(_DAT_02cfd8a8);
      return;
    }
    if (param_1 == *piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_00570fef;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
