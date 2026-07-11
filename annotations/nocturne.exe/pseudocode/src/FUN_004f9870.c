// Name: FUN_004f9870
// Address: 004f9870
// Address Range: [[004f9870, 004f98dd]]
// Convention: unknown
// Signature: void FUN_004f9870(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9870(int param_1,int param_2)

{
  int iVar1;
  
  if (_DAT_01c0399c == 0) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        while (*(int *)(param_1 + 8) >> 4 == 0) {
          *(uint *)(param_1 + 8) = 0x7fffffff;
          iVar1 = iVar1 + 1;
          param_1 = param_1 + 0x30;
          if (param_2 <= iVar1) {
            return;
          }
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0xc);
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
      } while (iVar1 < param_2);
    }
  }
  else {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + 8) == 0) {
          *(uint *)(param_1 + 8) = 0x7fffffff;
        }
        else {
          *(int *)(param_1 + 8) = 0x7fffffff - *(int *)(param_1 + 8);
        }
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
      } while (iVar1 < param_2);
    }
  }
  return;
}
