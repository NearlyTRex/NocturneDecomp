// Name: FUN_00447610
// Address: 00447610
// Address Range: [[00447610, 00447654]]
// Convention: unknown
// Signature: void FUN_00447610(int *param_1)

#include "nocturne.h"

void FUN_00447610(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x281] != 0) {
        uVar1 = FUN_00447840(piVar3[0x281],0);
        FUN_005b7fdc(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  return;
}
