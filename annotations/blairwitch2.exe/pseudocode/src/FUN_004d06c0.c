// Name: FUN_004d06c0
// Address: 004d06c0
// Address Range: [[004d06c0, 004d0745]]
// Convention: unknown
// Signature: undefined4 FUN_004d06c0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004d06c0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x25618) == 0) && (*(int *)(param_1 + 0x25604) == 0)) &&
      (*(int *)(param_1 + 0x25608) == 0)) &&
     (((*(int *)(param_1 + 0x2560c) == 0 && (*(int *)(param_1 + 0x25610) == 0)) &&
      ((*(int *)(param_1 + 0x25614) == 0 && (*(int *)(param_1 + 0x2561c) == 0)))))) {
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
      iVar1 = FUN_00429180(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = FUN_00429180(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
