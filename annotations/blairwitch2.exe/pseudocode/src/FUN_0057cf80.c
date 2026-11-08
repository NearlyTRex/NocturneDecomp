// Name: FUN_0057cf80
// Address: 0057cf80
// Address Range: [[0057cf80, 0057cfdf]]
// Convention: unknown
// Signature: uint FUN_0057cf80(int param_1)

#include "nocturne.h"

uint FUN_0057cf80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
    if ((*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x1c)) ||
       (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x10))) {
      iVar1 = FUN_0057d280(param_1);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)*(byte *)(*(int *)(param_1 + 0x18) +
                          (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x1c)));
  }
  return 0xffffffff;
}
