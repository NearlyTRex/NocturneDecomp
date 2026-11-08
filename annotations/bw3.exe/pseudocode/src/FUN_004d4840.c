// Name: FUN_004d4840
// Address: 004d4840
// Address Range: [[004d4840, 004d48c5]]
// Convention: unknown
// Signature: undefined4 FUN_004d4840(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004d4840(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x20ba8) == 0) && (*(int *)(param_1 + 0x20b94) == 0)) &&
      (*(int *)(param_1 + 0x20b98) == 0)) &&
     (((*(int *)(param_1 + 0x20b9c) == 0 && (*(int *)(param_1 + 0x20ba0) == 0)) &&
      ((*(int *)(param_1 + 0x20ba4) == 0 && (*(int *)(param_1 + 0x20bac) == 0)))))) {
    switch(param_2) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
      iVar1 = FUN_00432060(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
    case 3:
      return 1;
    case 10:
      iVar1 = FUN_00432060(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
