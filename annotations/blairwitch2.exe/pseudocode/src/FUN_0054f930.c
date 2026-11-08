// Name: FUN_0054f930
// Address: 0054f930
// Address Range: [[0054f930, 0054f9b7]]
// Convention: unknown
// Signature: undefined4 FUN_0054f930(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054f930(int param_1)

{
  double dVar1;
  
  if (((*(int *)(param_1 + 0x60) != 0) && (_DAT_02648e80 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x68) != 0)) {
    dVar1 = (double)(**(code **)(*_DAT_02648e80 + 0x48))(_DAT_02648e80,param_1);
    if (dVar1 < 0.0) {
      FUN_005549c0("Error polling hw playback pos %s\n",*(uint *)(param_1 + 0x68));
      return 0;
    }
    FUN_0054f9c0(param_1,dVar1);
    return 1;
  }
  return 0;
}
