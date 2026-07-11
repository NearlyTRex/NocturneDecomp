// Name: FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f07]]
// Convention: unknown
// Signature: void FUN_00460e80(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460e80(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00404610(param_2 + 8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  _DAT_01c039a0 = 0xc4;
  _DAT_01c039a4 = 6;
  FUN_0055e040(*(uint *)(param_2 + 4),param_2 + 0x18);
  if (DAT_00766c70 < 3) {
    return;
  }
  FUN_00562de0(&DAT_00766c74,DAT_00766c70,param_3);
  return;
}
