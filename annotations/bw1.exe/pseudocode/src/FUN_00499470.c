// Name: FUN_00499470
// Address: 00499470
// Address Range: [[00499470, 004994ca]]
// Convention: unknown
// Signature: void FUN_00499470(int *param_1)

#include "nocturne.h"

void FUN_00499470(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] != 0) {
    iVar1 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1[2] + iVar2) != 0) {
          FUN_005c09f0(*(int *)(param_1[2] + iVar2));
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *param_1);
    }
    FUN_005c09f0(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
