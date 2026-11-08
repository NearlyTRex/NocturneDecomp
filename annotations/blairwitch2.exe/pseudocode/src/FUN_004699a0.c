// Name: FUN_004699a0
// Address: 004699a0
// Address Range: [[004699a0, 00469a80]]
// Convention: unknown
// Signature: bool FUN_004699a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004699a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = _DAT_01e61b58;
  _DAT_01ba5c7c = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_00403970(param_2 + 8);
    if (iVar3 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    _DAT_01c38b54 = 0xc0;
    _DAT_01c38b58 = 6;
    _DAT_01c35e6c = &LAB_0046ee37;
  }
  else {
    _DAT_01c38b54 = 0;
    _DAT_01c38b58 = 0;
    _DAT_01c35e6c = &LAB_0046eeb5;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_01c37788 != 0) {
    FUN_0046b940(param_1,1);
  }
  FUN_00469590(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  if (_DAT_01c37788 != 0) {
    FUN_0046b940(param_1,uVar1);
  }
  _DAT_01e61b58 = uVar2;
  return DAT_0060b284 <= _DAT_01ba5c7c;
}
