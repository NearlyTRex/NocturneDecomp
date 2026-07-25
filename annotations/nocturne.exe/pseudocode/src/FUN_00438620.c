// Name: FUN_00438620
// Address: 00438620
// Address Range: [[00438620, 00438654]]
// Convention: unknown
// Signature: void FUN_00438620(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00438620(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_applyRotation_FUN_00438780(piVar2[0x65],param_2);
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}
