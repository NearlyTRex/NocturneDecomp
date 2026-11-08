// Name: FUN_00571fa0
// Address: 00571fa0
// Address Range: [[00571fa0, 00572027]]
// Convention: unknown
// Signature: undefined4 FUN_00571fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00571fa0(int param_1)

{
  double dVar1;
  
  if (((*(int *)(param_1 + 0x60) != 0) && (_DAT_02c80650 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x68) != 0)) {
    dVar1 = (double)(**(code **)(*_DAT_02c80650 + 0x48))(_DAT_02c80650,param_1);
    if (dVar1 < 0.0) {
      FUN_005773f0("Error polling hw playback pos %s\n",*(uint *)(param_1 + 0x68));
      return 0;
    }
    FUN_00572030(param_1,dVar1);
    return 1;
  }
  return 0;
}
