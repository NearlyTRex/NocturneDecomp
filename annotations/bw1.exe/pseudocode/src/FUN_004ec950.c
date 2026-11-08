// Name: FUN_004ec950
// Address: 004ec950
// Address Range: [[004ec950, 004ec9d5]]
// Convention: unknown
// Signature: undefined4 FUN_004ec950(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004ec950(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x1ff88) == 0) && (*(int *)(param_1 + 0x1ff74) == 0)) &&
      (*(int *)(param_1 + 0x1ff78) == 0)) &&
     (((*(int *)(param_1 + 0x1ff7c) == 0 && (*(int *)(param_1 + 0x1ff80) == 0)) &&
      ((*(int *)(param_1 + 0x1ff84) == 0 && (*(int *)(param_1 + 0x1ff8c) == 0)))))) {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
      iVar1 = FUN_00432c40(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = FUN_00432c40(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
