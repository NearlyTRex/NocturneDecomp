// Name: FUN_0046b580
// Address: 0046b580
// Address Range: [[0046b580, 0046b660]]
// Convention: unknown
// Signature: bool FUN_0046b580(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0046b580(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = _DAT_01ed3198;
  _DAT_01bdd810 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_00403920(param_2 + 8);
    if (iVar3 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    _DAT_01c6e2b4 = 0xc0;
    _DAT_01c6e2b8 = 6;
    _DAT_01c6b5cc = &LAB_0046fea7;
  }
  else {
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = &LAB_0046ff25;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_01c6cee8 != 0) {
    FUN_0046d520(param_1,1);
  }
  FUN_0046b160(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  if (_DAT_01c6cee8 != 0) {
    FUN_0046d520(param_1,uVar1);
  }
  _DAT_01ed3198 = uVar2;
  return DAT_005f2b00 <= _DAT_01bdd810;
}
