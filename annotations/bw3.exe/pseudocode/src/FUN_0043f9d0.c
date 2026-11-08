// Name: FUN_0043f9d0
// Address: 0043f9d0
// Address Range: [[0043f9d0, 0043fa38]]
// Convention: unknown
// Signature: void FUN_0043f9d0(int *param_1)

#include "nocturne.h"

void FUN_0043f9d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x65] != 0) {
        uVar1 = FUN_0043c280(piVar3[0x65],0);
        FUN_005a30c4(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  FUN_005a28f0(param_1 + 1,0,400);
  FUN_005a28f0(param_1 + 0x65,0,0x28);
  return;
}
