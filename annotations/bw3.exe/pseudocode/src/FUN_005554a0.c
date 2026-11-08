// Name: FUN_005554a0
// Address: 005554a0
// Address Range: [[005554a0, 00555527]]
// Convention: unknown
// Signature: undefined4 FUN_005554a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005554a0(int param_1)

{
  double dVar1;
  
  if (((*(int *)(param_1 + 0x60) != 0) && (_DAT_02cf3280 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x68) != 0)) {
    dVar1 = (double)(**(code **)(*_DAT_02cf3280 + 0x48))(_DAT_02cf3280,param_1);
    if (dVar1 < 0.0) {
      FUN_0055a560("Error polling hw playback pos %s\n",*(uint *)(param_1 + 0x68));
      return 0;
    }
    FUN_00555530(param_1,dVar1);
    return 1;
  }
  return 0;
}
