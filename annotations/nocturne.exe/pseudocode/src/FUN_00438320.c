// Name: FUN_00438320
// Address: 00438320
// Address Range: [[00438320, 00438388]]
// Convention: unknown
// Signature: void FUN_00438320(int *param_1)

#include "nocturne.h"

void FUN_00438320(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x65] != 0) {
        uVar1 = FUN_00435160(piVar3[0x65],0);
        FUN_00564494(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  FUN_00563cc0(param_1 + 1,0,400);
  FUN_00563cc0(param_1 + 0x65,0,0x28);
  return;
}
